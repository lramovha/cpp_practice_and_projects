#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << "please enter your name: ";
    //cin >> name;
    getline(cin, name, '\n');
    cout << "your name is " << name;
    return 0;
}
