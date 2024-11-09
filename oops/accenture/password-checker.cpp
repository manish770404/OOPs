
#include<iostream>
using namespace std;

bool checkpassword(char arr[],int n)
{
    if(n<4)
    {
        return 0;
    }
    if(arr[0] >= '0' && arr[0] <= '9')
     {
        return 0;
     }
    int countn=0;
     int countA=0;
    
       


    for(int i=0;i<n;i++)
    { 
        char c=arr[i];
        if(c>='0' && c<=9)
        {
            countn++;
        }
        if(c=='/'|| c==' ')
        {
            return 0;
        }
        if(c>='A' && c<='A')
        {
            countA++;
        }

    }

    if(countn<1)
    {
        return 0;
    }

    if(countA<1)
    {
        return 0;
    }



    return 1;
}


int main()
{
    cout<<"enter the size of charecter aray"<<endl;
    int n;
    cin>>n;

    char arr[n];
    cout<<"enter the elemenets in the array"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }


    bool x =checkpassword(arr,n);


    cout<<x<<endl;
    return 0;

}