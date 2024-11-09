#include<iostream>

using namespace std;

class father
{
    public:

    void fathername()
    {
        cout<<"my father name is ram shankar jaiswal";
    }
};


class manish: public father
{
    public:

    void myname()
    {
        cout<<" my name is manish jaiswal"<<endl;
    }
   
};
class mohit: public father
{
    public:

    void myname()
    {
        cout<<" my name is mohit jaiswal"<<endl;
    }
};

int main()
{
    manish m;
    m.myname();
    m.fathername();
return 0;
}