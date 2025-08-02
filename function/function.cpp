#include <iostream>
using namespace std;
void sayhello()
{
  cout<<"hello"<<endl;
}
void assistant()
{
  sayhello();
  cout<<"workdone"<<endl;
}
int main() {
  assistant();
    return 0;
}