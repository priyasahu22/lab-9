 //Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 
#include<iostream>
using namespace std;

int main()
{
  int arr[10];
  int i;
  cout<<"\n Enter Array Elements:";
  for(i=0;i<10;i++)
 {
    cin>>arr[i];
 }
  
  cout<<"\n Entered Array Elements are by array indexing method: ";
  for(i=0;i<10;i++)
 {
   cout<<arr[i]<<endl;
 }

int *p;
p=arr;
cout<<"\n Entered Array Elements are by pointer method: ";
for(i=0;i<10;i++)
{
  cout<<*p<<endl;
  p++;
}


return 0;
}
  

