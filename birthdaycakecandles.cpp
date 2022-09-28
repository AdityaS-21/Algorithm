
#include<iostream> 
#include <vector>
using namespace std;
int main(){
    int n,count = 0,c=0;
    cin>>n;
    vector<int> arr(n);
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(c<arr[i]){
            c=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==c){
            count++;
        }
    }
    
    cout<<count;
}
