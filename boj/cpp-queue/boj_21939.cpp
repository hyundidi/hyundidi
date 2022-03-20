#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <set>
#define mfor(N) for(int i=0;i<(N);i++)
#define pii pair<int, int>
using namespace std;
int N;

struct comp1{
    bool operator()(const pii a, const pii b){
        if( a.second < b. second) return 1;
        else if (a.second == b.second){
            return a.first < b.first;
        }
        return 0;
    }
};
struct comp2{
    bool operator()(const pii a, const pii b){
        if( a.second > b. second) return 1;
        else if (a.second == b.second){
            return a.first > b.first;
        }
        return 0;
    }
};
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    priority_queue<pii, vector<pii>, comp1> maxheap;
    priority_queue<pii, vector<pii>, comp2> minheap;
    set<int> solvedmin, solvedmax;
    cin >> N;
    mfor(N){
        int l,p;
        cin >> p >> l;
        maxheap.push(make_pair(p,l));
        minheap.push(make_pair(p,l));
    }
    cin >> N;
    mfor(N){
        string s;
        cin >> s;
        if(s=="add"){
            int p, l; cin >> p >> l;
            maxheap.push(make_pair(p,l));
            minheap.push(make_pair(p,l));
        }
        else if (s == "recommend"){
            int f; cin >> f;
            if(f==1) {
                while(solvedmax.find(maxheap.top().first)!=solvedmax.end()) {
                    solvedmax.erase(maxheap.top().first); maxheap.pop(); 
                }
                cout << maxheap.top().first << "\n";
            }
            else{
                while(solvedmin.find(minheap.top().first)!=solvedmin.end()) {
                    solvedmax.erase(minheap.top().first); minheap.pop(); 
                }
                cout << minheap.top().first << "\n";
            } 
        }
        else {
            int p; cin >> p;
            solvedmin.insert(p);
            solvedmax.insert(p);
        }
    }

    

    return 0;
}