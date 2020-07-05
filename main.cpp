#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    vector<string> magazine(m);
    vector<string> note(n);
    for (int i = 0; i < m; ++i) {
        cin >> magazine[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> note[i];
    }
    unordered_map<string , int> m1;
    for(int i=0;i<magazine.size();i++){
        m1[magazine[i]]++;
    }
    bool flag=true;;
    for(int i=0;i<note.size();i++){
        m1[note[i]]--;
        if(m1[note[i]]<0){
            flag=false;
            break;
        }
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" <<endl;
}