#include<iostream>

using namespace std;
class integer{
    private:
    int x;
  public:
  void setData(int a){
    x=a;
  }
  void showData(){
    cout<<"\n\nThe Output is ::"<<x;
  }
  void operator ++(){
    ++x;
  }
  integer operator ++( int ) {
    integer i;
    i.x=x++;
    return (i);
  }
};

int main()
{
   integer i,i2;
   i.setData(3);
  
   ++i;

  // i.operator++();
   i.showData();// The output is 4

   i2 = i++;
   i.showData();//The output is 5
   i2.showData();//The output is 4
}

