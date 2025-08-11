#include <iostream>
using namespace std;
int evenodd(int num)
{
  if(num%2==0)
  {
    cout<<"even";
  }
  else
  {
    cout<<"odd";
  }
}
int main() {
  evenodd(2);
  evenodd(7);
  evenodd(4);

   
    return 0;
}