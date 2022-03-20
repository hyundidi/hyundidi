#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
unordered_map<string, int> M1;
string ss[100002];
string s;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n,m;
    scanf("%d %d", &n, &m);

    for(int i=1;i<=n;i++)
    {
        cin >> s;
        M1.insert(make_pair(s,i));
        ss[i] = s;
    }

    for(int i=0; i<m; i++)
    {
        cin >> s;
        if(s[0] >='0' && s[0] <='9') cout << ss[stoi(s)] << endl;
        else cout << M1[s] << endl;
    }
}
