#include <iostream>
using namespace std;

void age(int x)
{
    cout << "Please enter your age: ";
    cin >> x;
    cout << "your age is " << x << endl;
}

int main()
{
    int x;

    //cin >> x;
    age(x);
    return 0;
}
