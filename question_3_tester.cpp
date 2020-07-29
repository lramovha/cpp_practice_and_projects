#include <iostream>
using namespace std;

void multiplyBy2(int firstP, int secondP)
{
    firstP = firstP * 2;
    secondP = secondP * 2;
}

void multiplyBy3(int & firstP, int & secondP)
{

    firstP = firstP * 3;
    secondP = secondP * 3;
}

int main()
{
    int first, second;
    cout << "Enter the first number: "<< endl;
    cin >> first;
    cout << "Enter the second number:" << endl;
    cin >> second;
    multiplyBy2(first, second);
    multiplyBy3(first, second);
    cout << "The first number is "<< first << " now." << endl;
    cout << "The second number is " << second << " now." << endl;
    return 0;
}
