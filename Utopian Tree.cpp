#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int height=0;
        for(int j=0;j<=x;j++){
            if(j%2==0){
                height+=1;
            }
            else{
                height=height*2;
            }
        }
        cout<<height<<endl;
    }
    return 0;
}
