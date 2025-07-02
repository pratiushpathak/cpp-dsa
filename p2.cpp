#include<iostream>
using namespace std;
int main()
{
  float pencil,pen,eraser,totalcost,gst;
  cout<<"enter the price";
  cin>>pencil>>pen>>eraser;
  
  totalcost=pencil+pen+eraser;
  gst=totalcost*18/100;
  cout<<"total cost"<<endl;
  cout<<pencil+pen+eraser<<endl;
  cout<<"total cost after tax"<<endl;
  cout<<totalcost+gst;
}