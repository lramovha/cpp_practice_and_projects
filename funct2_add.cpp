#include <iostream>
using namespace std;

int addNumbers(int x, int y)
{
    int sum;

    sum = x + y;
    return (sum);
}

int main()
{
    //int a = 5;
    //int b = 7;
    int add;

    add = addNumbers(7, 15 );
    cout << "the sum of numbers is " << add << endl;
    return 0;
}
