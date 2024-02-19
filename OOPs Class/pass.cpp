#include<iostream>
using namespace std;

class pass{
    int a;
    static int count;
    
    public:
    void gen(int a)
    {
        cout<<"Your Pass no is : "<< a<<"\n";
        count++;
    }
    static void show(void)
    {
        cout<<"Count: "<< count << "\n";

    }
};

int pass::count;

int main()
{

    pass student,student1;

    student.gen(4577);
    student.show();
    student1.gen(6789);
    student1.show();

    return 0;
}