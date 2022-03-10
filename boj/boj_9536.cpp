#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

unordered_set <string> cry;
vector<string> input;
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    while (N--){
        cry.clear(); input.clear();
        string s;
        while(true){
            cin >> s;
            if(s == "goes") {
                input.pop_back();
                cin >> s;
                cry.insert(s);
                break;
            }
            input.push_back(s);
        }

        string a,b,c;
        while(true){
            cin >> a >> b >> c;
            if(b=="does"){
                cin >> a >> b;
                break;
            }
            cry.insert(c)
        }
        vector<string> ans;
        for(auto it : input){
            if(cry.find(it) != cry.end()) continue;
            ans.push_back(it);
        }
        for(auto it: ans) cout << it << " ";
        cout << "\n";
    }

    return 0;
};
