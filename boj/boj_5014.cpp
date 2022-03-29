#include <iostream>

using namespace std;
int f,s,g,u,d;
#define swap(a,b) {int t; t= a; a= b; b= t;}
int v[1000001];
int q[1000010];
int c[1000010];
int solve(){
    if(s==g) return 0;
    int r=0, w=0, n;
    v[s]=1;
    q[w++]=s;

    while (r<w)
    {
        int p = q[r];
        n = p-d; 
        if(n>0 && !v[n]) {
            c[w] = c[r]+1; q[w++]=n; v[n]=1;
            if(n==g) return c[--w];
        }
        n = p+u; 
        if(n<=f && !v[n]) {
            c[w] = c[r]+1; q[w++]=n; v[n]=1;
            if(n==g) return c[--w];
        }
        r++;
    }
    return -1;

}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> f >> s >> g >> u >> d;

    int ret = solve();
    if(ret==-1) cout << "use the stairs";
    else cout << ret;    
    
    return 0;
}