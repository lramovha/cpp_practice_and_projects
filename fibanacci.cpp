// Fibonacci with C++
#include <iostream>

using namespace std;

int main()
{
    int len;
    int prev = 1;
    int next = 1;
    int sum = 0;
    int index = 0;

    cout << "Please enter a Fib length: ";
    cin >> len;
    cout << prev << ", ";
    cout << next;
    while (index < len - 2)
    {
        cout << ", ";
        sum = prev + next;
        cout << sum;
        prev = next;
        next = sum;
        sum = 0;

        index++;
    }
}
