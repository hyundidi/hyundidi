#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
typedef unsigned long long ull;
int T, N;
int n, m, k;



int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> T;
    vector<bool> sol;
    while(T--)
    {
        priority_queue<ull,vector<ull>, less<ull>> num;
        priority_queue<ull,vector<ull>, less<ull>> div;
        cin >> N;
        ull sum= 0;
        for(int i=0;i<N;i++){
            cin >> n;
            sum += n;
            num.push(n);
        }

        bool ans = true;
        if(N == 1) {cout << "\nYES"; continue;}
        div.push(sum);
        
        while(!div.empty() && !num.empty()){
            ull a, b;
            ull x = div.top(); div.pop();

            if(num.top() == x) {num.pop();}
            else {
                if(x < num.top()) { ans = false; break;}
                div.push(x/2);
                div.push((x+1)/2);
            }
            if(num.empty()) break;
        }
        if(!num.empty() || !div.empty() ) cout <<"\nNO";
        else cout << "\nYES";
    }
    
}