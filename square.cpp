#include <iostream>
using namespace std;


int main()
{
    for(int outer = 1; outer <= 3; outer++)
    {
        for(int inner = 1; inner <= 5; inner++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
