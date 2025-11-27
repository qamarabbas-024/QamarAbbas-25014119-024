/*Write a program to print a message if the value of variable 
"n" is greater than 100, otherwise ignore the statement.*/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter value of n:";
    cin >> n;
    if (n>100)
    cout << "The number is greater than 100";
}