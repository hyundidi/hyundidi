#include <iostream>
#include <string>
#include <map>
using namespace std;
 
void solve(){
    string s; cin >> s;
    map<char, int> mp;
    for(auto i: s) {
        mp[i]++;
    }
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]--;
        if (!mp[s[i]]){
            cout << s.substr(i) << "\n"; break;
        }
    }
}
 
int main(){
    int t; cin >> t;
    while(t--) solve();
    return 0;
}



/*
Input
10000
r
oetoexgythctjjxslmcm
tcfcfccfccfcccfcffcc
jctvirynngpfvokfbsds
kkikkkitvikpihqgemjb
o
fhysvovirgqqvkevearq
ggswwehttewywggwjtgo
ppcppxccdlbngouuxlig
nigirbkbtitegtturiip
bkexkzvivbmfysmvssvi
wwsjnawswrjhvlswjdyr
soktdjlphiudirbpelnm
eichgmhrtfxqcruxnkcx
yeyochwpprcgrlavjnfg
sgzswhzvrpurogckkons
lyebinwhbqzclvdmwqis
zvzzvzzlxpemplflkmpk
mvaraauqhwsfptsziwbp
uvkewepwksppppveyzyv
zjlgacitnsjykdyyopok
nffkmgvgpcloxlasctas
fdaossppvvvftuzzyjnj
eluhlweahvujmdddkkft
beuitzujlwaoet...


Output
r
oexgythctjjxslmcm
tcfcfccfccfcccfcffcc
jctvirynngpfvokfbsds
tvikpihqgemjb
o
fhysvovirgqqvkevearq
swwehttewywggwjtgo
pxccdlbngouuxlig
nigirbkbtitegtturiip
exkzvivbmfysmvssvi
nawswrjhvlswjdyr
soktdjlphiudirbpelnm
eichgmhrtfxqcruxnkcx
eyochwpprcgrlavjnfg
whzvrpurogckkons
yebinwhbqzclvdmwqis
vzzlxpemplflkmpk
mvaraauqhwsfptsziwbp
uvkewepwksppppveyzyv
zjlgacitnsjykdyyopok
nffkmgvgpcloxlasctas
daossppvvvftuzzyjnj
lweahvujmdddkkft
beuitzujlwaoetnhrpyp
bduduajw
qsgjdvovgpanvcvmamh
xiitq...
*/