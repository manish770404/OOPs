#include <iostream>
using namespace std;

class student
{

    string name;

public:
    int age;
    char sec;

    student()
    {
        cout << "default constructor" << endl;
    }

    student(string s, int a, char c)
    {
        cout << "parameterized constructor" << endl;

        name = s;
        age = a;
        sec = c;
    }

    student(student &a)
    {
        cout << "copy constructor";
        name = a.name;
        age = a.age;
        sec = a.sec;
    }

    void print()
    {
        cout << "name :" << name << endl;
        cout << "age :" << age << endl;
        cout << "sec :" << sec << endl;
    }

    void setname(string s)
    {
        name = s;
    }
    void getname()
    {
        cout << name;
    }

    ~student()
    {
        cout << "destructor called" << endl;
    }

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && sec == a.sec)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    student s1("manish", 21, 'n');
    s1.print();
    student s2;
    s2.print();
    student s3 = s1;
    s3.print();

    if (s1 == s3 )
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "not same" << endl;
    }

    return 0;
}
