#include <iostream>

using namespace std;

int main()
{
    int h;

    cout << "Please enter the hight: ";
    cin >> h;

    for(int i = 1; i < h + 1; i++)
    {
        for (int j = 1; j < h - i + 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < i + 1; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

}
