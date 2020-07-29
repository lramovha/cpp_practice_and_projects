#include <iostream>
using namespace std;

void inputMarks(float &markP, float &mark2P, float &mark3P)
{
    cout << "Enter three marks: ";
    cin >> markP >> mark2P >> mark3P;
}

float avarage(float &markP,float &mark2P,float &mark3P)
{
    return (markP + mark2P + mark3P)/3;
}

void displayBest(float &A, float &B)
{
    if (A > B)
    {
        cout << "The best avarage is "<< A <<endl;
    }
    else
        cout << "The best avarage is "<< B << endl;
}

int main()
{
    float mark1, mark2, mark3;
    float avarageA, avarageB;

    inputMarks(mark1, mark2, mark3);
    avarageA = avarage(mark1, mark2, mark3);

    inputMarks(mark1, mark2, mark3);
    avarageB = avarage(mark1, mark2, mark3);

    displayBest(avarageA, avarageB);

    return 0;
}
