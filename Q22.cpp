/*Write a program to input the name, age, height and 
gender of the student and prints the data of student on screen.*/
#include<iostream>
using namespace std;
int main()
{
    int age ;
    float height;
    char gender;
    string name ;
    cout << "Enter Your Name:";
    cin >> name;
    cout << "Enter Your Age:";
    cin >> age ;
    cout << "Enter Your Height:";
    cin >> height;
    cout << "Enter your Gender:";
    cin >> gender;
    cout << "Your name is: " << name <<endl << "Your age is: " << age << endl << "Your gender is : "
    << gender <<endl << "Your height is: " <<height ; 

}