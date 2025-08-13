#include <iostream>
#include<cmath>
using namespace std;
int formula(int a, int b)
{
  int c=pow(a,2)+pow(b,2)+2*a*b;
  return c;
}
int maximum(int a,int b,int c)
{
  int max=a;
  if(b>max)
  {
    max=b;
  }
  if (c>max)
  {
    max=c;
  }
  return max;
  
}
int main() {

 cout<<maximum(9,7,11);
    return 0;
}