#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k,sum=0;
    cin>>n>>k;
    vector<int> bill(n);
    for(int i=0;i<n;i++){
        cin>>bill[i];
        sum+=bill[i];
    }
    int b;
    cin>>b;
    if(b==(sum - bill[k])/2){
        cout<<"Bon Appetit";
    }
    else{
    cout<<b-(sum - bill[k])/2;
    }
    
    
}
