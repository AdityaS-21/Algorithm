#include<iostream>
#include<algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;
int main(){
    unsigned long long a[5];
    unsigned long long sum = 0;
    for(int i = 0;i<5;i++){
        cin>>a[i];
        sum+=a[i];
        
    }
    sort(a,a+5);
    unsigned long long max1=sum - a[0];
    unsigned long long min1=sum - a[4];
    
    cout<<min1<<" "<<max1;
    
}
