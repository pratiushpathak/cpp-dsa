#include<iostream>
using namespace std;
int main()
{

//it is based on factors of a number
  int num ,count=0;

cout<<" enter a number";
cin>>num;
  for(int i=1;i<=num;i++)
  {
   if(num%i==0)
   {
    count++;
  
   }
  }
  if(count>2)
  {
    cout<<"not prime";
  }
  else
  {
    cout<<"prime";
  }
 
  
  
}