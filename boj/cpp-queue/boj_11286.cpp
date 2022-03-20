#include <iostream>
#include <queue>
#include <math.h>
using namespace std;

struct comp{
    bool operator()(const int a, const int b){
        if(abs(a) > abs(b)) return 1;
        else if (abs(a) == abs(b)) return a > b;
        return 0;
    }
};

priority_queue<int, vector<int>, comp> pq;
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    while(N--){
        int x;
        cin >> x;
        if(x == 0){
            if(pq.empty()) cout << "0\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else {
            pq.push(x);
        }
    }
    return 0;
}