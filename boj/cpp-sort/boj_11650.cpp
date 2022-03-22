#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct comp{
    bool operator()(const pair<int, int>a, const pair<int ,int> b){
        if(a.first < b.first) return true;
        else if(a.first == b.first) return a.second < b.second;
        else return false;
    }
};


int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int N; cin >> N;
    vector<pair<int, int>> v;
    int a,b;
    for(int i=0;i<N;i++) {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end(), comp());

    for(auto it : v) cout << it.first << " " << it.second << "\n";
    return 0;
}