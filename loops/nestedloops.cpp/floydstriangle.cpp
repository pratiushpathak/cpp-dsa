#include<iostream>
using namespace std;
int main()
{
  int n=4,count=0;
  for (int i = 1; i <=n; i++)
  {
    // int count=i;
   for(int j=1; j<=i;j++)
   {
     count++;
    cout<<count;
   
   }
   cout<<endl;
  }
  
}