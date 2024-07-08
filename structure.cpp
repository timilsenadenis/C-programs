#include<iostream>
using namespace std;
 struct book{
private:
    int bookid;
    char title[30];
    float price;

public:
    void input()
    {
     cout<<"Enter the Bookid,title and price of the book!";
    cin>>bookid>>title>>price;
    if (bookid<0)
    bookid=-bookid;
    }
    void display()
    {
        cout<<"\n"<<bookid<<" "<<title<<"  "<<price;
    }
};

int main()
{
    book b1; 
    b1.input();
    b1.display();
   return 0;
}
