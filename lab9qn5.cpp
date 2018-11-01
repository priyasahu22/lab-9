//Write a piece of code which prints the characters in a cstring in a reverse order.
#include<iostream>
using namespace std;
int main()
{
   char a[100];
   cout<<"\n Enter your name:\n";
   cin.getline(a,100);
   char *p;//character pointer
   p=a;
   while(*p!='\0')
{
   p++;
}
while(p!=a)// bringing the pointer back to initial position
{
  cout<<*p;
 p--;
}
cout<<*p;
return 0;
}
   
  
