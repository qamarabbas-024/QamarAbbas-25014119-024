/* . Write a program to input values into variables a, b and c.
 Compute the value of 'disc' by using formula: disc = b2 - 4ac*/
 #include<iostream>
using namespace std;
int main()
{
     float a, b, c, disc;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    disc = (b*b)-4*a*c;
     cout << "The value of discriminant = " << disc;
}