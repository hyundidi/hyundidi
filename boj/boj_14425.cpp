#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;
int main(){
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    unordered_set<string> x;
    int n,m;
    cin >> n >> m;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        x.insert(s);
    }
    
    int cnt =0;
    for(int i=0;i<m;i++){
        cin >> s;
        if(x.find(s) != x.end()) cnt++;
    }
    cout << cnt << "\n";


    return 0;
}

