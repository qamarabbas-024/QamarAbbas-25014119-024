/* . Write a program to input time in hours, minutes and seconds. 
Convert time into seconds and print the result on screen.*/
#include<iostream>
using namespace std ;
int main()
{
    int hours , minutes,seconds,total_seconds;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    cout << "Enter seconds: ";
    cin >> seconds;
    total_seconds =(hours*3600)+(minutes*60)+seconds;
    cout << "Total seconds: " << total_seconds;
    
}