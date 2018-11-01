//[STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. 


#include<iostream>


using namespace std;
int main()
{
  char arr[100];
  cout<<"\n Enter Your Name : ";
  cin.getline (arr,100);
  for(int i=0;i!='\0';i++)
{
   cout<<arr[i]; // to stop an character array no need of last size null character is enough
}
cout<<endl<<endl;

char *p;
p=arr;
for(p=arr;*p!='\0';p++)
{
  cout<<*p;  // printing in the form of pointer

}

  

return 0;
} 
