#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    a= 5;
    b= 10;
    c= 20;
    int largest;
    if(a >= b && a >= c)
    {
        largest = a;
    }
    else if (b>= a && b>=c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    cout<<"The largest of three is "<<largest;

}