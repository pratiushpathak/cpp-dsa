#include <iostream>
using namespace std;
char val(char a)
{
  cout<<"enter";
  cin>>a;

 
  cout<<char(a+1);
}
int main() {
  val('a');
    return 0;
}