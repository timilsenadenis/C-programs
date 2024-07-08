#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b,c;
    public:
    complex(int x=2, int y=3,int z=4)
    {
        a=x;
        b=y;
        c=z;
        cout<<"The sum of two number is : "<<a+b+c;
    }
 
};

int main()
{
    complex c1;
    return 0;
}