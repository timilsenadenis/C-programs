#include<iostream>
using namespace std;
  class Account{
    private:
        int balance;//instance Member variable
     static float roi;// Static member variable
         //doesnot aquire memory for declaration
     //class variable, Not the part of object
    public:
    
    static void showroivalue(){
     cout<<"Roi value for that instatnce is :"<<roi;
    }
   static void setroi(float f){
      roi=f;
    }

  };

 float Account::roi;
  int main()
  {
    float a;
    cout<<"Enter the value of roi:";
    cin>>a;
    Account::setroi(a);
   Account:: showroivalue();  //scope resolution operator 
    return 0;
  }