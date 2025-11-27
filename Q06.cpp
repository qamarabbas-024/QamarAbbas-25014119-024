/*Q6. Write a program to get age (in years) of a person. 
Calculate the age in months and print the age in months.*/
#include<iostream>
using namespace std;
int main()
{
  int ageYears ,ageMonths ;
  cout << "Enter Your age in Years:";
  cin >> ageYears;
  ageMonths = ageYears*12;
  cout << "Your age in Months:"<<ageMonths ;
}