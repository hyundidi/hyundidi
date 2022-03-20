#include <iostream>
#include <queue>
using namespace std;


int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    priority_queue<int, vector<int>, greater<int>> pq;

    int N, n; cin >> N;
    n  = N*(N-1);
    for(int i = 0; i < N*N; i++){
        int x; cin >> x;
        pq.push(x);
        if(pq.size()>N) pq.pop();
    }
    cout << pq.top()<<"\n";
    return 0;
}