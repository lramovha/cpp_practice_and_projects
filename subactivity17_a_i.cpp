#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int r;

    srand(time(0));
    for(int i = 0; i < 10; i++)
    {
        r = rand() % 50 + 1;
        cout << "The random number is " << r << endl;
    }
    return 0;
}
