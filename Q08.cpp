/*1.	Write a program to get temperature in Fahrenheit.
 Convert the temperature to Celsius degrees by using the formula.
			C = 5/9(f - 32)
*/
#include<iostream>
using namespace std;
int main()
{
float fahren,cel;
cout<<"Enter Temperature in Fahrenheit:";
cin >> fahren;
cel = 5.0/9.0*(fahren-32);
cout << "Your Temperature in Celsius:" << cel;
}