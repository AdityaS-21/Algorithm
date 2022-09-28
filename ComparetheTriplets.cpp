#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a(100);
    vector<int> b(100);
    vector<int>c(3,0);
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int j=0;j<3;j++){
        cin>>b[j];
    }
    for(int k=0;k<3;k++){
        if(a[k]>b[k]){
            c[0]+=1;}
        else if(a[k]<b[k]){
            c[1]+=1;
        }
        else if(a[k]==b[k]){
            c[0]+=0;
            c[1]+=0;
        }
    }
    for(int l=0;l<2;l++){
        cout<<c[l]<<" ";
    }
}
