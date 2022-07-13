#include <iostream>

using namespace std;
class a{
    static int count;
    public:
    a()
    {
        count++;
        cout<<"Inside constructor"<<"\n";
        cout<<"count is :: "<<count<<"\n";
    }
    ~a()
    {
        cout<<"Inside destructor"<<"\n";
        count--;
        cout<<"Now count is ::"<<count<<"\n";
    }
    
};
int a::count=0;
int main()
{
    a ob1;
    a ob2;
    return 0;
}

// OUTPUT
/*
Inside constructor
count is :: 1
Inside constructor
count is :: 2
Inside destructor
Now count is :: 1
Inside destructor
Now count is :: 0
*/
