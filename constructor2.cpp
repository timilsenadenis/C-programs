


#include<iostream>

using namespace std;
class complex{
    private: 
    int a,b;
    public:
    complex(int x, int y){
        a=x,b=y;
    }
    complex(int k){
    a=k;
    }
    complex(complex &c){
a=c.a;
b=c.b;
cout<<"the refrence variable are; "<<a<<"\nkasldf ; "<<b;

    }
};
int main()
{
    complex c1(23,32);
    complex c4=c1;
    return 0;
}