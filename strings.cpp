// personal exercise on strings
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    string mystr;

    cout << "enter your name: ";
    getline(cin, mystr);
    cout << "Hello there " << mystr << endl;
    cout << "please enter your age: ";
    cin >> age;
    cout << "you are " << age << " old." << endl;
    return 0;
}
