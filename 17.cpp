#include<iostream>
using namespace std;
class base
{
    int a;
    float b;
    public:
    base()
    {
        cout<<"Default Construcutor Ran"<<endl;
        a = 10;
        b=20.1;
    }
    void getA(){cout<<"A is ;"<<a<<endl;}
    void getB(){cout<<"b is ;"<<b<<endl;}
};

int main()
{
    base m;
    m.getA();
    m.getB();

    return 0;

}