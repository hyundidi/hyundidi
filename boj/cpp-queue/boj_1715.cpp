#include <iostream>
#include <queue>
using namespace std;


/*
4
3 3 4 5
(3+3) (4+5)
   (6+9)
*/


int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    priority_queue<int, vector<int>, greater<int>> pq;
    int N; cin >> N;
    for(int i = 0; i < N; i++){
        int n; cin >> n;
        pq.push(n);
    }
    if(N == 1) {cout << "0"; return 0;}
    
    int sol = 0;
    while(pq.size()!=1)
    {
        int a, b;
        a = pq.top(); pq.pop();
        b = pq.top(); pq.pop();
        int sum = a + b;
        sol += sum;
        if(pq.empty()) break;
        
        pq.push(sum);
    }
    cout << sol ;

    return 0;
}
