/*Write a program to assign two varibles by assignment statement.
 Interchange the values and print the result on the screen.
*/
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