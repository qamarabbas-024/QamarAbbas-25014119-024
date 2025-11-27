/* Write a program to test whether a 
given integer is odd or even using simple 'if' structure.*/
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    }
    if (number % 2 != 0) {
        cout << number << " is odd.";
    }
    return 0;
}