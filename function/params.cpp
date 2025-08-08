#include <iostream>
using namespace std;
int sum(int a,int b=1)// a,b are parameters b=1 default param first param cannot be default
{
  int sum=a+b;
  return sum;
}
int diff(int a,int b)// a,b are parameters
{
  int sum=a-b;
  return sum;
}
int main() {
 int s= sum(2,4); // 2,4 are arguments
 cout<<s<<endl;
  int d= diff(2,4); // 2,4 are arguments
 cout<<d<<endl;
    // Your code here
   
  int defaul=sum(2);
  cout<<defaul<<endl;
   return 0;

}