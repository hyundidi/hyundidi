#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    while(N--){
        unordered_map<string, int> umap;
        int ans = 1;
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            string a, b;
            cin >> a >> b;
            umap[b]++;
        }
        
        for(auto x : umap){
            ans *= (x.second+1);
        }
        cout << ans-1 << "\n";
        
    }
}

