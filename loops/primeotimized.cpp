#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int num ;
  bool isprime=true;
  cout<<"enter a number";
  cin>>num;
  for (int  i = 2; i <=sqrt(num); i++)
  {
    if(num%i==0)// i is a factor of n or i comp;eteley divedes n or n is non prime
    {
     isprime=false;
     break;
    }
    
  }
  if(isprime==true)
  {
    cout<<"number is prime";
  }
  else
  {
    cout<<"not prime";
  }
  

}