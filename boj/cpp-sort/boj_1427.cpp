#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;

    sort(s.begin(), s.end(),greater<char>());

    cout << s << endl;
    return 0;
}