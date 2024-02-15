///// make address book using structure////
#include<iostream>
using namespace std;

struct adr
{
    int houseno[50];
    char owner[50];
}ad1,ad2;

int main()
{
    cout<<"Enter the House No:";
    cin>>ad1.houseno[0];
    cin>>ad2.houseno[1];


    cout<<"Enter the House Name";
    cin>>ad1.owner[0];
    cin>>ad2.owner[1];

    cout<<"The house is:"<<ad1.houseno[0]<<"-"<<ad1.owner[0]<<" \n";
    
    cout<<"The house is:"<<ad2.houseno[1]<<"-"<<ad2.owner[1];



}
