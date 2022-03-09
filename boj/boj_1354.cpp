#include <iostream>
#include <unordered_map>
using namespace std;
long long  N,P,Q,X,Y;
unordered_map<long long, long long> umap;
long long  getNum(long long  n){
    if(n<=0) {
        umap[n] = 1;
        return 1;
    }
    if(umap.find(n)!=umap.end()) return umap[n];
    else umap[n] = getNum((n/P)-X) + getNum((n/Q)-Y);
    return umap[n];
}


int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>N>>P>>Q>>X>>Y;
    if(N==0){cout << 1;}
    else
    cout << getNum(N);
}

