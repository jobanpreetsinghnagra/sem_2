#include<iostream>
using namespace std;
class base
{
    int a;
    int b;
    public:
    base()
    {
        a=10;
        b=20;
        cout<<"Constructor called"<<endl;

    }
    void get()
    {
        cout<<" The value of A is "<<a<<endl;
        cout<<" The value of B is "<<b<<endl;
        
    }


    ~base()
    {
        cout<<"Destructor Called";
        
    }
};

int main()
{
    base a;
    a.get();

    return 0;

 
}