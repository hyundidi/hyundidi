#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<int> knum[9];

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int K,N;
    cin >> K >> N;

    int num = K;
    for (int i = 1; i <= 8; i++)
    {
        knum[i].insert(num);
        num = num * 10 + K;
    }

    int a, b, x;
    for(int i = 1; i <= 8; i++)
        for(int j = 1; i + j <= 8; j++){
            for(auto a : knum[i]){
                for(auto b : knum[j]){
                    int x = i + j;
                    knum[x].insert(a+b);
                    knum[x].insert(a*b);
                    if(a > b){
                        knum[x].insert(a-b);
                        knum[x].insert(a/b);
                    }
                    else{
                        if(a!=b) knum[x].insert(b-a);
                        knum[x].insert(b/a);
                    }
                }
            }
        }

    while (N--)
    {
        int n;
        cin >> n;

        int i;
        for(i=1;i<=8;i++){
            if(knum[i].find(n) == knum[i].end()) continue;
            break;
        }
        if (i>8) cout << "NO\n";
        else cout << i << "\n";
    };
    return 0;
}