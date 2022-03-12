#include <iostream>
#include <map>
#include <string>

using namespace std;

map <string, int> list;
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    int cnt = 0;
#if 0 
    while(getline(cin,s)){
        list[s] += 1;
        cnt++;
    }
#endif

#if 1
    while(1)
    {
        getline(cin, s);
        if(cin.eof())break;
        list[s]++;
        cnt++;        
    }
 #endif   

    for(auto it : list){
        cout << it.first << " ";
        double r = (double)it.second/cnt*100;
        cout << fixed; cout.precision(4);
        cout << r << "\n";
    }
    return 0;
}
