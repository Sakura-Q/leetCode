#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,m;//n个物品，体积为m的背包
    cin>>n>>m;
    int f[1000]={0};
    int w[300];
    int d[300];
    for (int i = 1; i <=n ; ++i) {
        cin>>w[i]>>d[i];

    }
    for (int j = 1; j <=m; ++j) {
        if(w[1]<=j)
            f[j]=d[1];
        else
            f[j]=0;
        cout<<f[j]<<endl;
    }
    for (int k =2; k <=n ; ++k) {
        for (int i = m; i >=0 ; --i) {
            if(i-w[k]>=0)
                f[i]=max(f[i],f[i-w[k]]+d[k]);
            cout<<i<<" "<<f[i]<<endl;
        }
    }
    for (int l = 1; l<=m; ++l) {
        cout<<f[l]<<endl;
    }

    return 0;
}