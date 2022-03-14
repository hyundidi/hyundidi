#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<int> knum[9];
void insert(int x, int num){
    if(1 <= num && num <=32000) knum[x].insert(num);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int K, N;
    cin >> K >> N;

    int num = K;
    for (int i = 1; i <= 8; i++)
    {
        knum[i].insert(num);
        num = num * 10 + K;
    }

    for(int i = 1; i <= 7; i++)
        for(int j = 1; i + j <= 8; j++)
            for(auto a : knum[i])
                for(auto b : knum[j])
                {
                    int x = i + j;
                    insert(x, a * b);
                    insert(x, a + b);
                    if(a > b)
                    {
                        insert(x, a - b);
                        insert(x, a / b);
                    }
                    else
                    {
                        if(b != a) insert(x, b - a);
                        insert(x, b / a);
                    }
                }

    while (N--)
    {
        int n;
        cin >> n;

        int i;
        for(i = 1; i <= 8;i++){
            if(knum[i].find(n) == knum[i].end()) continue;
            break;
        }
        if (i > 8) cout << "NO\n";
        else cout << i << "\n";
    };
    return 0;
}