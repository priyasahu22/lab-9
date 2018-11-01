//Implement your versions for the following functions:
/*Strcpy
Strcat
Strlen
Strcmp
Strchr
Strstr*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char arr1[100];
   char arr2[100];
cout<<"\n enter string one:    ";
 
   cin.getline(arr1,100); 
cout<<"\n enter string two:    ";
 cin.getline(arr2,100);

strcpy(arr1,arr2);
cout<<endl<<arr2;
return 0;
}
 
