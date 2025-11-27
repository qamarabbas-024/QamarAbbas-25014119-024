/* Q15.	Write a program to interchange values of two variables*/
#include<iostream>
using namespace std;
int main()
{
 int a = 10;
 int b = 20;
 int temp ;
 cout << "Values before Interchanging:\nValue of a = "<<a <<" Value of b = " <<b ;
 temp = a ;
 a = b;
 b = temp;
 cout << "\nValues after Interchanging:\nValue of a = "<<a <<" Value of b = " <<b ;

}