#include<iostream>
using namespace std;

void passByValue(int x)
{
    x = 100;
}

void passByReference(int *x)
{
    *x = 73;
}

int main()
{
    int betty = 13;
    int sandy = 13;

    passByValue(betty);
    passByReference(&sandy);

    cout << "betty is now " << betty <<endl;
    cout << "sandy is now " << sandy <<endl;

    return 0;
}

