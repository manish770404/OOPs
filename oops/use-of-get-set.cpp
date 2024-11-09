#include<iostream>
using namespace std;

class student
{


   string name;
    public:
int age;
char sec;


void print()
{
    cout<<"name :"<<name<<endl;
    cout<<"age :"<<age<<endl;
    cout<<"sec :"<<sec<<endl;
} 

void setname(string s)
{
    name=s;
}



};

int main()
{
  student s1;
 // s1.name= "manish";
  s1.age=21;
  s1.sec='n';
  //
  s1.print();
  

  student arr[3];

  for(int i=0;i<3;i++)
  {
    string s;
    cout<<"name ="<<endl;
    cin>>s;
    arr[i].setname(s);
     cout<<"age ="<<endl;
    cin>>arr[i].age;
     cout<<"sec ="<<endl;
    cin>>arr[i].sec;
  }
  for(int i=0;i<3;i++)
  {
    arr[i].print();

  }

  return 0;
}