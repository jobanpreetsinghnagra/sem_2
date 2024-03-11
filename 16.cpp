#include<iostream>
using namespace std;
class base
{
    int a;
    float b;
    public:
    base(int m ,float n)
    {
        a = m;
        b = n;

    }
    int getA(){return a;}
    float getB(){return b;}
};

int main()
{
    base t1(10,15.1);

    cout<<" "<<t1.getA();
    cout<< "  " <<t1.getB();

    return 0;

}