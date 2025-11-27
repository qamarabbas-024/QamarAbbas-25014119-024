/*Write a program to separate the integral
 and fractional parts of a 15.58971 real number and print the result on screen.*/
 #include<iostream>
using namespace std;
int main()
{
    float num =15.58971;
    int intergral ;
    float fractional;
    intergral = (int)num;
    fractional = num - intergral;
    cout << " Original number " << num << endl;
    cout << " Intergral Value " << intergral << endl;
    cout << " Fractional Value " << fractional;
}