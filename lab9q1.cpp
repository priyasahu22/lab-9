
// Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. 
#include<iostream>
using namespace std;
int main()
{
  char a; // DEclaring all the predefined variables
  int b;
  float c;
  double d;
cout<<"\n THE SIZE OF int VARIABLE "<<sizeof(int);
cout<<"\n THE SIZE OF char VARIABLE "<<sizeof(char);
cout<<"\n THE SIZE OF float VARIABLE "<<sizeof(float);
cout<<"\n THE SIZE OF double VARIABLE "<<sizeof(double);
  char *a1; // DEclaring all the pointers
  int *b1;
  float *c1;
  double *d1;
cout<<"\n THE SIZE OF int pointer "<<sizeof(b1);
cout<<"\n THE SIZE OF char VARIABLE "<<sizeof(a1);
cout<<"\n THE SIZE OF float VARIABLE "<<sizeof(c1);
cout<<"\n THE SIZE OF double VARIABLE "<<sizeof(d1);
return 0;
}
