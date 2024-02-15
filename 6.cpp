//// programe using array to store city number and fetch data using element//////
#include<iostream>
#include<string>

using namespace std;

int main()
{
 int n;
 string j[n] ={};///create a string
 cout<<"How many cities you want to enter: ";
 cin>>n;
 cout<<"Enter City names: \n";
 for (int i = 0; i < n; i++)
 {
  cin>>j[i];
 }
 int m;
 cout << "Enter the city no you want to enter: ";
 cin>>m;
 cout<<"The city is: "<<j[m];
 return 0;

}