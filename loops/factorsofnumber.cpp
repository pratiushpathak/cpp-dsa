#include<iostream>
using namespace std;
 int main()

 {

  //factors of number
  //n=8 factors=1,2,4,8 factors means perfectly divisible without remainder
  int num=8;
  
  for (int i = 1; i <=num; i++)
  {
   if(num%i==0)
   {
    cout<<i<<endl;
    
   }
  }
  

 }