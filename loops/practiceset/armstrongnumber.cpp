#include<iostream>
using namespace std;
 int main()
 {
  int num=173,sum=0,temp;
temp=num;


  while (temp!=0)
  {
  int digit=temp%10;
  sum=sum+digit*digit*digit;
  //  cout<<digit;
    
   temp=temp/10;


  }
  if(sum==num)
  {
    cout<<"armstrong";
  }
  else
  {
    cout<<"not an armstrong number";
  }
 
  
 



 }