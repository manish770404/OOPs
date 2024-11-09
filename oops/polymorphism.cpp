#include <iostream>
using namespace std;

class manish
{
    public:

    //this is function overloading

    void fun()
    {
        cout<<"function with no srgument"<<endl;
    }

    void fun(int n)
    {
        cout<<"function with int argument"<<endl;
    }
      void fun(double n)
      {
        cout<<"function with double arguement";
      }
};

int main()
{

    //function overloading;                                                                                                                              
    manish kabetaravi;
    kabetaravi.fun();
    kabetaravi.fun(2);
    kabetaravi.fun(2.5);

    return 0;

}