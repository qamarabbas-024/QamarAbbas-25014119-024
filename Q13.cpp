/* 	Write a program using define directive to find the area of a circle. 
The formula to find the area of a circle is:
		Area =πR^2      The value of π is 3.1417
*/
#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
 float R ,A;
 cout << "Enter value of Radius:";
 cin >> R;
 A = PI*R*R;
 cout << "Area = " <<A;

}