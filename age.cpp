// Personal exercise for IF/ELSE
#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "please enter your age: ";
    cin >> age;
    if (age >= 18)
        cout << "Congradulations your now an adult!!" << endl;
    else
        cout << "Sorry!! you are still young." << endl;
    return 0;
}
