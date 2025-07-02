#include<iostream>
using namespace  std;
int main()
{
  //implicit type conversion
//  cout<<(10/3)<<endl;//3
//  cout<<(10/3.0)<<endl;//3.33
//  cout<<('A'+1)<<endl;


 //explicit type conversion
 float PI=3.14;


 cout<<(int)(PI)<<endl;
 cout<<((float)10/3)<<endl;
 cout<<(char)('A'+1)<<endl;
 //practice qs
 cout<<((bool)3+2)<<endl;//3
 cout<<(23.5+2+'A')<<endl;//90.5
}