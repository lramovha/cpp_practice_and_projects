#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int secret, guess, error, absError;

    srand(time(0));
    secret = 1 + rand() % 100 + 1;

    cout << "Enter Guess number: ";
    cin >> guess;

    error = secret - guess;
    absError = abs(error);

    cout << "you are off by " << absError<< endl;
    return 0;
}
