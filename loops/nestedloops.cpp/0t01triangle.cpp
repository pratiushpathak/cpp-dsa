#include<iostream>
using namespace std;
int main()
{
 bool val= true;
  int n=5;
  for (int i = 1; i <= n; i++)
  {
   for (int j=1;j<=i; j++)
   {
    // for (int k = 0; k <=1; k++)
    // {
    //   cout<<k;
    // }
    
    if((i+j)%2==0)
    {
      cout<<1;
    }
    else
    cout<<0;


    // cout<<val<< " ";
    // val= !val;
    
   
   }
 cout<<endl;
  }

  // int n=5;
  // for(int i=1;i<=n;i++){
  //   int p=1;
  //   if(i%2==0){
  //     p=0;
  //   }
  //   for(int j=0;j<i;j++){
  //     cout<<p<<" ";
  //     if(p==0){
  //       p=1;
  //     }else{
  //       p=0;
  //     }
  //   }
  //   cout<<endl;
  // }


  
}