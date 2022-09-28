
#include <cmath>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>


using namespace std;


int main(){
    int s,n,m;
    cin>>s>>n>>m;
    vector<int> keyboard(n);
    for(int i =0;i<n;i++){
        cin>>keyboard[i];
    }
    vector<int> drive(m);
    for(int i =0;i<m;i++){
        cin>>drive[i];
    }
    int ans=-1;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(keyboard[i]+drive[j]<=s){
                ans=max(ans,keyboard[i] + drive[j]);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
    
}
