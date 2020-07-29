#include <iostream>
using namespace std;

/* Question 1.1
 The function prompts the user for their weight and Hight.*/

void getData(float &weight, float &hight)
{
    cout << "Please Enter your weight in Kilograms: ";
    cin >> weight;
    cout << "Please Enter your hight in Meters: ";
    cin >> hight;
    cout << "\n";
}

/* Question 1.2
 These funtion calculates the BMI of the user.*/

float calcBMI(float &weight, float &hight)
{
    return weight/(hight*hight);
}

/* Question 1.3
These Funtion displays the the BMI Fitness Results.*/

void displayFitnessResults(float &bmi)
{
    if (bmi < 18.5)
    {
        cout << "Your Body Mass Index is "<< bmi << " and your Weight status is Underweight" << endl;
    }
    if (bmi >= 18.5 && bmi <=24.9)
    {
        cout << "Your Body Mass Index is "<< bmi << " and your Weight status is Healthy" <<endl;
    }
    if (bmi >= 25.0 && bmi <= 29.9)
    {
        cout << "Your Body Mass Index is "<< bmi << " and your Weight status is Overweight" <<endl;
    }
    if (bmi >= 30.0)
    {
        cout << "Your Body Mass Index is "<< bmi << " and your Weight status is Obese" <<endl;
    }
}

/* Question 1.3
Main Funtion*/

int main()
{
    float W, H;    //weight and Hight
    float BMI;     //Body Mass Index

    getData(W, H);
    BMI = calcBMI(W, H);

    displayFitnessResults(BMI);

    return 0;
}

