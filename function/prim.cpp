#include <iostream>
using namespace std;
bool isprime(int n)
{
  for (int i = 2; i <=n; i++)
  {
    if(n%i==0)
    {
      return false;
      break;
    }
    else
    {
      return true;
    }
  }
  
}
int main() {
    // Your code here
    cout<<isprime(4);
    return 0;
}