////addition using friend class////
#include<iostream>
using namespace std;

class base{
    int a ;         /////a  and B are Private members////
    int b;
    public:
    void set(void)
    {
        a= 10;
        b= 20;
    }
    friend int sum(base m); //////a function is declare named sum to which will take an object from class base as input parameter///
};
int sum(base m)
{
    return m.a+ m.b;
}

int main()
{
    base t;                 /////t is an object of class Base/////
    t.set();                //////set function is invoked //////
    cout<<"The Sum is: "<< sum(t)<<"\n"; //////using object T /////
    return 0;
}