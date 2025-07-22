#include<iostream>
using namespace std;
 int main()

 {
  

  //sum of factors



  int num=6,sum=0;
  
  for (int i = 1; i <=num; i++)
  {
   if(num%i==0)
   {
    cout<<i<<endl;
    sum=sum+i;
    
   }
   

  }
  if(2*num==sum)
   {
   cout<<"perfect num";
   }
   else
   {
    cout<<"not a perfect number";
   }
  //  cout<<sum;

 }