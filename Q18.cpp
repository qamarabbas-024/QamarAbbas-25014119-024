/*Write a program to assign values to variables 'vi' and 't' 
an compute the value of 's' by using the formula:
	   S=vi*t+  1/2  〖at〗^2 */
#include<iostream>
using namespace std;
int main()
{
    float a,vi,t,S;
    a = 2.2 ;
    vi = 5.0 ;
    t = 6.5 ;
    S = vi*t+(0.5*a*t*t);
    cout << "Value of S = " << S;
}