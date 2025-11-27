/*. Write a program to input the values of three sides
 of a triangle and calculate its area using the formula:
	Area = √(s(s-a)(s-b)(s-c))  		where s = (a+b+c)/2 */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float a,b,c,s,area;
  cout << "Enter values of 3 sides(a,b,c):";
  cin >> a >>b >>c ;
  s = (a+b+c)/2.0;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  cout << "Area of triangle = " << area;
}