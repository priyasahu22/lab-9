//Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.
//Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
//Assign values a=2 and b = 3. Print the values of a, b and *p.
//Now point p to b. Print the values of a, b and *p.
#include<iostream>
using namespace std;
int main()
{
  int a,b;
 
int *p;
cout<<"\nenter the value of a ";
cin>>a;
cout<<"\nenter the value of b ";
cin>>b;
  p=&a;//Point p to a
  b=*p;// storing the value pointed by p in b
  cout<<"\nthe value of a  "<<a;
   cout<<"\nthe value of *p  "<<*p; 
cout<<"\nthe value of b  "<<b;
//+++++++++++++++++++++++++++++++++++++++++++++=======================+++++++++++++++++++++++++++++++++++++++++++
a=2,b=3;
p=&b;
cout<<"\n value of a: ";
cout<<a;
cout<<"\n value of b: ";
cout<<b;


return 0;
}
