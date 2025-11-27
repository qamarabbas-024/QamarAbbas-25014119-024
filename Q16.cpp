/* Write a program to assign a value 3 to "int" type variables a, b and c
 using multiple assignment statement. Calculate the product of these numbers.*/
 #include<iostream>
using namespace std;
int main()
{
  int a,b,c,product;
    a=b=c=3;
  product = a*b*c;
  cout << "Product is " << product ;  
}