#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int num ,n;
 
  cout<<"enter a number";
  cin>>n;
  for ( num = 2; num<=n; num++)
  {
    bool isprime=true;
  
  
  for (int  i = 2; i <=num-1; i++)
  {
    if(num%i==0)// i is a factor of n or i comp;eteley divedes n or n is non prime
    {
     isprime=false;
     break;
    }
  }
  if(isprime)
  {
    cout<<num;
  }
  }
  
  
  

}