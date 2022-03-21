#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    vector<int> v;

    while(N--){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for(auto it:v) cout << it << "\n";
    return 0;
}