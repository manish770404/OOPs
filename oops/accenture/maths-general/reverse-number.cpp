#include<bits/stdc++.h>
//#include<string>
using namespace std;

int main()
{
 long long num;
cout<<"enter the number"<<endl;
cin>>num;

string s=to_string(num);

long long n=s.length();

for(long long i=0;i<n/2;i++)
{
    swap(s[i],s[n-i-1]);
}
long long  ans=stoi(s);

cout<<ans;
   
    
    return 0;
    
     
    
    
}