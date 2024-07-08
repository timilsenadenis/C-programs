

#include<iostream>

using namespace std;
class complex
{
private:
    int a,b;
public:
    void setData(int x,int y)
    {
        a=x; b=y;

    }
    void showData()
    {
        cout<<"\na="<<a<<"b="<<b;
    }
//Friend Function Declaration
friend complex operator +(complex, complex);
};
//Friend funciton Defination
 complex operator +(complex c,complex d){
    complex temp;
    temp.a=c.a+d.a;
    temp.b=c.b+d.b;
    return (temp);
 }
int main(){
 complex c1,c2,c3;
 c1.setData(3,5);
 c2.setData(2,3);
 c3=c1+c2;
 c3.showData();
 return 0;
}

