#include<bits/stdc++.h>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int num;
    cout<<"enter the digit" <<endl;
    cin>> num;
    string s= "";
    while(num>0)
    {
        int r=num%10;
        s+=(r+'0');
        num=num/10;
        
    }
    
    int res=stoi(s);
    cout<<res;
    return 0;
    
}
