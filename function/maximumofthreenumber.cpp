#include <iostream>
using namespace std;
int max( int a, int b,int c)

{
  int max=a;
  if(b>max)
  {
    max=b;
  }
  if(c>max)
  {
    max=c;
  }
  return max;



}
int main() {
  
cout<< max(7,18,3);
    return 0;
}