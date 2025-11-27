/*Write a program to input the radius of a circle and calculate area & circumstance of the circle.
		Formula for Area of a circle = πR^2
		Formula for Circumference of a circle = 2πR */
#include<iostream>
using namespace std;
int main()
{
    float pi = 3.14;
    float r ,area,circumference;
    cout << "Enter radius:";
    cin >> r;
    area = pi*r*r;
    circumference = 2*pi*r;
    cout <<"Area = " <<area <<endl;
    cout <<"Circumference = " << circumference;

}