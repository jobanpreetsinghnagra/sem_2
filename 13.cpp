/////static/////
#include<iostream>
using namespace std;


class passes {

static int count;
long int n;

public:

void passgen ()
{
cout<<" Enter your roll no:";
cin>>n;
cout<<"Fresher party pass for: "<<n<<" \n";
cout<<"Enjoy your fresher's party !!\n"; 
count++;
}

static void total () 
{
cout<<" Total passes for freshers  party:"<<count;
}

};

int passes::count;

int main(){
    passes t;
    t.passgen();
    t.total();

return 0;
}