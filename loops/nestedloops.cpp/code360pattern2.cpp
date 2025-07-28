#include<iostream>
using namespace std;
int main()
{
  int n=4,s=1;
  cin>>n;
  for (int i = 1; i <=n; i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<s;
    }
    cout<<endl;
  }
  
}