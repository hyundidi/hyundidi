#include <iostream>
#include <vector>
using namespace std;

vector<int> v[9];
int N;
int order[9];
int visit[9]={1,0,};
int sol = 0;

void cal(){

    int out = 0;
    int idx = 0;
    int s[4] = {0,0,0,0};
    int score = 0;
    for(int n=0; n < N; n++){
        out =0; s[0]=s[1]=s[2]=s[3]=0;
        while(out < 3){
            int x = v[order[idx]][n];
            if(x==0) {out++;}
            if(x==1) {
                s[3] += s[2];
                s[2] = s[1];
                s[1] = s[0];
                s[0] = 1;
            }
            if(x==2){
                s[3] += (s[2]+s[1]);
                s[2] = s[0];
                s[1] = 1;
                s[0] = 0;
            }
            if(x==3){
                s[3] += (s[2]+s[1]+s[0]);
                s[2] = 1;
                s[0] = s[1] = 0;
            }
            if(x==4){
                s[3] += (s[2]+s[1]+s[0]);
                s[3] +=1;
                s[0] = s[1] = s[2] = 0;
            }
            if(++idx>8) idx =0;
        }
        score += s[3];
    }

    if (score > sol) sol = score;
    
}

void dfs(int n, int r){
    if(n==3) {dfs(n+1, r); return;}

    order[n] = r;
    if(n==8) {cal(); return;}

    for(int i=0;i<9;i++){
        if(visit[i]) continue;
        visit[i] = 1;
        dfs(n+1, i);
        visit[i] = 0;
    }
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> N;

    int ans = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<9;j++){
        int x; cin >> x;
            v[j].push_back(x);
        }
    }
    
    for(int i=1;i<9;i++){
        visit[i]=1;
        dfs(0,i);
        visit[i]=0;
    }
    cout << sol;
    return 0;
}