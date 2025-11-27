/*Write a program to assign your age in a variable and find the age in months and days*/
#include<iostream>
using namespace std;
int main()
{
    int ageDays ,ageMonths;
    int ageYear = 19 ;
    ageMonths = ageYear*12 ;
    ageDays = ageYear*365;
    cout << "Your age in Months = " <<ageMonths <<endl;
    cout << "Your age in Days = " << ageDays ;

}