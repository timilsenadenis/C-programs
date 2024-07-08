
#include<iostream>

using namespace std;
//Forward Declaration
class B;
class A
{
    int a;
    public:
   void SetData( int x){
      a=x;
   }
   //Friend function Decleration
    friend void fun(A,B);

};
class B{
    int b;
    public:
    void SetData(int y){
        b=y;
    }
    //Frend function Decleration 
    friend void fun(A,B);
};

//Friend Functioin Defination
void fun(A a1,B b1){
    cout<<"Sum is :"<<a1.a+b1.b;
}
int main()
{
    A boj1;
    B boj2;
    boj1.SetData(65);
    boj2.SetData(34);
    fun(boj1,boj2);
}