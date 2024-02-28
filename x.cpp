#include <iostream>
using namespace std;
class base1
{   
private:
        int a ,b, c;
          public:
           void input()
    {
        cout<<"ENTER TWO NUMBERS FOR THE SUM :";
        cin>>a>>b;
    }          
void show()
{
    c=a+b;
    cout<<"SUM="<<c<<endl;
}  };
class base2
{   private:
     int a,b,c;
     public:
        void input1()
        {    
             cout<<"ENTER TWO NUMBERS FOR THE DIFFERENCE :";
             cin>>a>>b;
    } 
    void show1()
{
    c=a-b;
    cout<<"DIFFERENCE ="<<c<<endl;
}  };
class derive:public base1,public base2
{
    private:
    int a,b,c;
    public:
          void input2()
        {    
        cout<<"ENTER TWO NUMBERS FOR THE MULTIPLICATION :";
             cin>>a>>b;
}
void show2()
{
    c=a*b;
    cout<<"MULTIPLICATION ="<<c<<endl;
}  };
int main()
{
    derive ob2;
    ob2.input2();
    ob2.show2();
    ob2.input();
    ob2.show();
    ob2.input1();
    ob2.show1();
    return 0; 
}
