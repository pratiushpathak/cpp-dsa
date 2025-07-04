#include<iostream>
using namespace std;

int main() {
  int a,b;
   char symbol;
   cout<<"enter two number"<<endl;
   cin>>a>>b;
    cout<<"enter operation"<<endl;
    cin>>symbol;
   switch(symbol)
   {
    case ('+'): cout<<a+b<<endl;
     break;
     case ('-'): cout<<a-b<<endl;
     break;
     case ('*'): cout<<a*b<<endl;
     break;
     case ('/'): cout<<a/b<<endl;
     break;
    
     

   }


}
