////addition using friend class////
#include<iostream>
using namespace std;

class base{
    int a ;
    int b;
    public:
    void set(void)
    {
        a= 10;
        b= 20;
    }
    friend int sum(base m);
};
int sum(base m)
{
    return m.a+ m.b;
}

int main()
{
    base t;
    t.set();
    cout<<"The Sum is: "<< sum(t)<<"\n";
    return 0;
}