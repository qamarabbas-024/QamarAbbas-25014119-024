/* 	Write a program to find the volume of a cylinder by using 'const' qualifier.
 The formula to find the volume of a cylinder is:
		Volume =πR^2 xH     The value of π is 3.141
*/
#include<iostream>
using namespace std;
int main()
{
float H ,R,V ;
const float PI = 3.14;
cout << "Enter Value of Radius:";
cin >>R;
cout << "ENter Value of Height:";
cin >>H;
V = PI *R*R*H;
cout << "Volume =" << V;

}