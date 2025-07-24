#include<iostream>
using namespace std;
int main()
{

//it is based on factors of a number
  int num ,n;

cout<<" enter a number";
cin>>n;
for ( num = 2; num <=n; num++)
{
 int count=0;
  for(int i=1;i<=num;i++)
  {
   if(num%i==0)
   {
    count++;
  
   }
  }
  if(count>2)
  {
    cout<<"";
  }
  else
  {
    cout<<num<<endl;
  }
  

}

  
 
  
  
}