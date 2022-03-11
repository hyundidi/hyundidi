#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map <string, bool> list;
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s,e,q;
    cin >> s >> e >> q;
    string t, name;
    int cnt = 0;

    while(!cin.eof()){
        cin >> t >> name;
        if(s.compare(t) >= 0 ) list[name] = true;
        else if(e.compare(t) <= 0 && q.compare(t) >= 0 && list[name]==true) {
            cnt++; list[name] = false;
        }
    }
    cout << cnt;
    return 0;
}
