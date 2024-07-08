
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
friend complex operator ++(complex);
};

complex operator ++(complex c){
    complex temp;
    temp.a=1+c.a;
    temp.b=1+c.b;
    return (temp);
}
int main()
{
    complex c1,c2;
    c1.setData(2,4);
    c1.showData();
    c2=++c1;
    c2.showData();
}