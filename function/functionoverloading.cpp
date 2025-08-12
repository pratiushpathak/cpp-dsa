#include <iostream>
using namespace std;
int sum( int a,int b)
{
  cout<<(a+b)<<endl;
  return a+b;
}
double sum(double a,double b)
{
  cout<<(a+b)<<endl;
  return a+b;

}
int sum( int a,int b,int c)
{
  cout<<(a+b+c)<<endl;
}
int main() {
  sum(2,3);
  sum(1.5,2.5);
  sum(2,3,2);
    
    return 0;
}