#include <iostream>
#include <queue>
#include <map>
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    string s;
    queue<string>qu;
    map<string, string>mp;
    string cur = "", lst = "";
    while(cin >> s){
        if(qu.size() >= q)
            qu.pop();
        qu.push(s);
        if(s[0] == '<'){
            if(s[1] == '/'){
                while(!cur.empty() && cur.back() != '.'){
                    cur.pop_back();
                }
                if(!cur.empty())
                    cur.pop_back();
            }
            else{
                s.erase(0, 1);
                if(s.back() == '>') 
                   s.pop_back();
                if(!cur.empty())
                    cur += "." + s;
                else
                    cur += s;
            }
        }
        else if(s[0] == '='){
            cin >> s;
            s.erase(0, 1);
            while(s.back() == '"' || s.back() == '>'){
                s.pop_back();
            }
            string q = cur + '~' + lst;
            mp[q] = s;
            // cout << q << ' ' << mp[q] << endl;  
        }
        lst = s;
    }
    while(!qu.empty()){
        if(mp.find(qu.front()) == mp.end())
            cout << "Not Found!\n";
        else 
            cout << mp[qu.front()] << endl;
        qu.pop();
    }
    return 0;
}