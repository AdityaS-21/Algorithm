#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    int a=ar[0],result=0;
    int count =0,sum=0;
    for(int i=0;i<n;i++){
        if(a==ar[i]){
            count++;
        }
        else{
            a=ar[i];
            result=count/2;
            sum+=result;
            count = 1;
        }
    }
    result=count/2;
    sum=sum+result;
    cout<<sum;
    return 0;
}
