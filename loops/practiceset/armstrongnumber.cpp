#include<iostream>
using namespace std;
 int main()
 {
  int num=173,rem=1,rev=0;



  while (num!=0)
  {
   rem=num%10;
  //  cout<<rem;
    rev=rev*10+rem;
    cout<<rev<<endl;
   num=num/10;


  }
  cout<<rev;
  
 



 }