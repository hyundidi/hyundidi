#include <iostream>
#include <deque>

using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    deque<int> v;
    for(int i=1;i<=N;i++) v.push_back(i);

    while(v.size()!=1){
        v.pop_front();
        int x = v.front(); v.pop_front();
        v.push_back(x);
    }

    cout << v.front();

    return 0;
}