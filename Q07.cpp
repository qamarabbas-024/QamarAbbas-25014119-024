#include<iostream>
using namespace std;
int main()
{
    int total ;
    char rollNo[20];
    int marks1,marks2,marks3;
    float average;
    cout << "Enter Your Rollno:";
    cin >> rollNo;
    cout << "Enter your PF Marks:";
    cin >> marks1;
    cout << "Enter your IC Marks:";
    cin >> marks2;
    cout << "Enter your CG Marks:";
    cin >> marks3;
    total = marks1+marks2+marks3;
    average = total/3.0;
    cout << "Your roll no is: " << rollNo << "\nYour Total Marks are: " << total << "\nYour Average is: " << average;

}