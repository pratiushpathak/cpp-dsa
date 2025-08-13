#include <iostream>
using namespace std;
int palindrome(int n)
{
  int rem,rev=0,orig;
  orig=n;
  while (n>0)
  {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
  }
 
  if(rev==orig)
  {
    cout<<"palindrome";
  }
  else
  {
    cout<<"not";
  }
  
}
int main() {
   palindrome(111);
    return 0;
}