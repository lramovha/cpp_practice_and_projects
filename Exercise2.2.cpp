/* Exercise 2.2*/
#include <iostream>

using namespace std;

int main()
{
    int sec = 60;
    int hour = 60 * sec;
    int day = 24 * hour;
    int year = 365 * day;


    cout << "There are " << sec << " seconds in a minute." << endl;
    cout << "There are " << hour << " seconds in a hour." << endl;
    cout << "There are " << day << " seconds in a day." << endl;
    cout << "There are " << year << " seconds in a year." << endl;
    return 0;

}
