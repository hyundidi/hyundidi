#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    unordered_map<int,bool> umap;
    int n,m;
    cin >> n >> m;
    int cnt= n + m;
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        umap.insert(make_pair(x, true));
    }
    for(int i=0;i<m;i++){
        cin >> x;
        if(umap.find(x) != umap.end()) cnt-=2;
    }

    cout << cnt;
    return 0;
}

