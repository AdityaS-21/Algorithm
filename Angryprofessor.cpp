#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n,k,count;
        cin>>n>>k;
        vector<int>a(n);
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(a[j]<=0){
                count++;
            }
        }
        if(count>=k){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        } 
        count=0;                       
    }
    
    return 0;  
}

