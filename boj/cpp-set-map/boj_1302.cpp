#include <iostream>
#include <map>
#include <string>

using namespace std;
int main(){
    map<string, int> x;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        x[s]++;
    }
    
    int max = 0;
    string maxName;
    for(auto i : x){
        if (i.second > max){
            max= i.second;
            maxName = i.first;
        }
    }
    
    cout << maxName;


    return 0;
}

