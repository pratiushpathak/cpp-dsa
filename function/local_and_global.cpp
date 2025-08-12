#include <iostream>
using namespace std;
int num=25;// global scope variable
void sum( int a,int b)
{
  cout<<num<<endl;
  int s=a+b;
  cout<<s<<endl;

}
int main() {
  sum(5,5);
  
cout<<num<<endl;
    return 0;
}