#include <iostream>
using namespace std;
int sumdigit(int n)
{
  int rem,sum=0;
  while (n>0)
  {
    rem=n%10;
    sum=sum+rem;

    n=n/10;
  }
  return sum;
  

}
int main() {
    cout<<sumdigit(123);
    return 0;
}