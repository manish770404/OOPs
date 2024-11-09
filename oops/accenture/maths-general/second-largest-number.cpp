#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter the number of element "<<endl;
    int n;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    set<int> st(arr.begin(),arr.end());
    vector<int> temp;

    if(st.size()<2)
    {
        cout<< -1;
        return 0;
    }
   // sort(st.begin(),st.end());
    for(auto x:st)
    {
        temp.push_back(x);
    }
    int n1=temp.size();
    int sl=temp[n1-2];
    int count =0;
    cout<<"second largest element is "<<sl<< endl;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==sl)
        {
            count++;
        }
    }
    
    cout<< count;
    
    
}