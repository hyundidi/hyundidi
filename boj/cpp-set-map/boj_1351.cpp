#include <iostream>
#include <unordered_map>
using namespace std;

typedef long long ll;
int p, q;

unordered_map<ll, ll> umap;

ll dfs(ll n){
    if (umap.find(n) != umap.end()) return umap[n];
    return umap[n] = dfs(n/p) + dfs(n/q);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n >> p >> q;
    umap[0]=1;
    cout << dfs(n) << "\n";

    return 0;
}