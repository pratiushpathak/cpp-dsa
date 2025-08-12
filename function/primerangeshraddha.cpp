#include <iostream>
using namespace std;
bool isprime(int n)
{
  if(n==1)
  {
    return false;
  }
  for (int  i = 2; i <=n-1; i++)
  {
    if(n%i==0)
    {
      return false;
      break;
    }
  }
  return true;
  
}
void allprime(int n )
{
  //all primes 2 to n
  for(int i=2;i<=n;i++)
  {
    if(isprime(i))//true
    {
      cout<<i<<endl;
    }
  }
}

int main() {
  allprime(100);
  
    return 0;
}