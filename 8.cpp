////Double Pointer///
#include<iostream>
using namespace std;

int main()
{
    int var = 10;
    int *pt;
    int **ptr;

    pt = &var;
    ptr = &pt;



    cout<<"The value is : "<< **ptr;


}