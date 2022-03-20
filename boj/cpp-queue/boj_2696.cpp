#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n; cin >> n;
        priority_queue<int, vector<int>, less<int>> left;   //max
        priority_queue<int, vector<int>, greater<int>> right;   //min
        vector <int> sol;
        int median;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if( i == 0 ) median = x;
            else{
                if(x > median) right.push(x);
                else left.push(x); 
            }
            if(i % 2 == 0){
                if(left.size() > right.size()){
                    right.push(median);
                    median = left.top(); left.pop();
                } else if( left.size() < right.size() ){
                    left.push(median);
                    median = right.top(); right.pop();
                }
                sol.push_back(median);
            }
        }   
        cout << sol.size() << "\n";
        for(auto it : sol) cout << it << " ";
        cout << "\n";
    }

    return 0;    
}