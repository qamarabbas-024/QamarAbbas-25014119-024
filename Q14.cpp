/*Write a program to convert millimeters into
 inches and print the result on screen. (Hint: 1 inch = 25.4 mm)*/
#include<iostream>
using namespace std;
int main()
{
   float inches,mm;
   cout << "Enter Value in mm:";
   cin >> mm;
   inches = mm/25.4;
   cout << mm << " mm in inches = " <<inches ;
}