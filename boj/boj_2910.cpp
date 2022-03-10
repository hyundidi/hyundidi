#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;
unordered_map<int, int> umap;
vector<pair<int, int>> sorted;
unordered_map<int, int> order;
int comp(pair<int, int>a, pair<int, int> b){
    if(a.second== b.second){
        return order[a.first] < order[b.first];
    } 
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N,M;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        umap[x]++;
        if(order.find(x)== order.end()) order[x] = i;
    }

    for(auto it : umap){
        sorted.push_back(make_pair(it.first, it.second));
    }
    
    sort(sorted.begin(),sorted.end(),comp);

    for(int i=0;isorted.size();i++)//-1;i>=0;i--)
    {
        for(int j=0;j<sorted[i].second;j++)
        {
            cout << sorted[i].first << " ";
        }   
    }
}<
