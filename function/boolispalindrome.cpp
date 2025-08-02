#include <iostream>
using namespace std;
int ispalindrome(int n)
{
  int rev=0,rem;
   int original =n;
  while(n>0)
  {
   rem=n%10;
   rev=rev*10+rem;
   n=n/10;
  }
  if(rev==original)
  {
    cout<<"palindrome";
  }
  else
  {
    cout<<"not";
  }
 
}
int main() {
   ispalindrome(121);
   ispalindrome(123);
    return 0;
}