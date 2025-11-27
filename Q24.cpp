/*Write a program to input marks of five subjects of a student. 
Calculate the Total and Average marks. (Each subject has weight of 100 marks).*/
#include<iostream>
using namespace std;
int main()
{
    int total ;
    int marks1,marks2,marks3,marks4,marks5;
    float average;
    cout << "Enter your PF Marks:";
    cin >> marks1;
    cout << "Enter your ICT Marks:";
    cin >> marks2;
    cout << "Enter your CAG Marks:";
    cin >> marks3;
    cout << "Enter your FE Marks:";
    cin >> marks4;
    cout << "Enter your AP Marks:";
    cin >> marks5;
    total = marks1+marks2+marks3+marks4+marks5;
    average = total/5.0;
    cout << "Your Total Marks are: " << total << "\nYour Average is: " << average;

}