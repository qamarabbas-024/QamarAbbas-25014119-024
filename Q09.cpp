/*Write a program to find the maximum number from four numbers. */
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,num4,max;
    cout << "Enter Four Numbers:";
    cin >> num1 >> num2 >> num3 >> num4 ;
    max = num1;
    if(num2 > max) max = num2;
    if(num3 > max) max = num3;
    if(num4 > max) max = num4;
    cout << "Maximum number is: " << max ;
    return 0 ;
}