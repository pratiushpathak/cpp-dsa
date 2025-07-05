#include<iostream>
using namespace std;
int main()
{
  int n,num;
  cout<<"enter a three digit number";
  cin>>n;
  num=n;
  int a= num%10;
  num=num/10;
  int b= num%10;
  num=num/10;
  int c=num;

  int cubesum= a*a*a+b*b*b+c*c*c;

  if(cubesum==n)
  {
    cout<<"armtrong";
  }
  else
  {
    cout<<"not armstrong";
  }


}