#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    unordered_map<string,int> umap;
    int n;
    cin >> n;
    string name;
    for(int i=0;i<n;i++){
        cin >> name;
        umap[name]++;
    }
    
    for(int i=0;i<n-1;i++){
        cin >> name;
        umap[name]-=1;
        if(umap[name]==0) umap.erase(name);
    }

    cout << umap.begin()->first;
    return 0;
}

