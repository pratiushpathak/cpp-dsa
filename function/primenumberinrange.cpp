#include <iostream>
using namespace std;

int primerange(int n )
{

    
    for (int i = 1; i <=n; i++)
    {
      bool isprime=true;
     for (int j = 2; j<=i-1; j++)
  {
    if(i%j==0)
    {
      isprime=false;
      break;
    }
    
  }
  if (isprime==true)

  {
  cout<<i<<" ";
  }
  
    }
    
  
  
}
int main() {
    // Your code here
  
   primerange(100);
   
    return 0;
}