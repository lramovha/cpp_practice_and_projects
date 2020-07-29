#include <iostream>
using namespace std;

void    inputMarks(float &m1, float &m2, float &m3, float &m4)
{
    cout << "Enter three marks separated by space: ";
    cin >> m1 >> m2 >> m3 >> m4;
}

float   avarage(float &m1, float &m2, float &m3, float &m4)
{
    return (m1 + m2 + m3 + m4)/4;
}

void    displayBest(float &A, float &B, float &C)
{
    if ( A > B && A > C)
    {
        cout << "The Best Avarage is " << A <<endl;
    }
    if (B > A && B > C)
    {
        cout << "The Best Avarage is " << B <<endl;
    }
    else
        cout << "The Best Avarage is " << C<<endl;
}

int main()
{
    float mark1, mark2, mark3, mark4;
    float avarage1, avarage2, avarage3;

    inputMarks(mark1, mark2, mark3, mark4);
    avarage1 = avarage(mark1, mark2, mark3, mark4);

    inputMarks(mark1, mark2, mark3, mark4);
    avarage2 = avarage(mark1, mark2, mark3, mark4);

    inputMarks(mark1, mark2, mark3, mark4);
    avarage3 = avarage(mark1, mark2, mark3, mark4);

    displayBest(avarage1, avarage2, avarage3);

    return 0;
}
