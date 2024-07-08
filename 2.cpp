//FUNCTION OVERLOADING 
//POLYMORFISM
#include<iostream>
int area(int, int);
float area(int);
using namespace std;
int main(){

    int r;
    cout<<"Enter radius of circle";
    cin>>r;
    float A=area(r);
    cout<<"\n Ther area of circle is :"<<A;
    int l,b,a;
    
    cout<<"\nEnter the length and breadth of the rectangle ";
    cin>>l>>b;
    a=area(l,b);
    cout<<"\n The area of rectangle is :"<<a;
    return 0;

}
float area (int R)
{
    return(3.14*R*R);

}
int area(int l, int b)
 {
    return(l*b);
 }