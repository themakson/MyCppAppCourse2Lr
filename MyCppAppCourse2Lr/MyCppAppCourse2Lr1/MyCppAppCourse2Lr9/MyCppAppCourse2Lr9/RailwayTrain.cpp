#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

template<class T>
void sortRailway(stack<T>& input) {
   stack<T> output;
   stack<T> sideTrack;

    int expected = 1;

    while (!input.empty()) {
        if (input.top() == expected) {
            output.push(input.top());
            input.pop();
            expected++;
        }
        else {
            sideTrack.push(input.top());
            input.pop();
        }

        while (!sideTrack.empty() && sideTrack.top() == expected) {
            output.push(sideTrack.top());
            sideTrack.pop();
            expected++;
        }
    }

    while (!sideTrack.empty()) {
        output.push(sideTrack.top());
        sideTrack.pop();
    }

    while (!output.empty()) {
        input.push(output.top());
        output.pop();
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    stack<int> railway;

    railway.push(3);
    railway.push(5);
    railway.push(1);



    cout << "Перед сортировкой: ";
    stack<int> temp = railway;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    sortRailway(railway);

    cout << "После сортировки: ";
    while (!railway.empty()) {
        cout << railway.top() << " ";
        railway.pop();
    }
    cout << endl;

    return 0;
}
