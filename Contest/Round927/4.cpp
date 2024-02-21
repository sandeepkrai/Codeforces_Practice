#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char ch; cin>>ch;
        int cnt = 0;
        unordered_map<char,int> um;
        unordered_map<char,vector<int>> ans;
        vector<string> sp;
        for(int i=0; i<2*n; i++){
            string s; cin>>s;
            um[s[1]]++;
            if(s[1]==ch){
                cnt++;
                sp.push_back(s);
            }
            ans[s[1]].push_back((s[0]-'0'));
        }
        int check = 0;
        for(auto i: um){
            if(i.first != ch){
                if(i.second%2!=0){
                    if(cnt == 0){
                        cout<<"IMPOSSIBLE"<<"\n";
                        check = 1;
                        break;
                    }
                    else cnt--;
                }
            }
        }
        if(check)continue;
        if(cnt%2!=0){
            cout << "IMPOSSIBLE\n";
            continue;
        }
        sort(sp.begin(),sp.end());
        for(auto i:ans){
            if(i.first == ch)continue;
            sort(i.second.begin(),i.second.end());
            for(int j=0; j<i.second.size()-1; j+=2){
                string ts1 = "", ts2 = "";
                ts1 += '0'+i.second[j];
                ts1+= i.first;
                ts2 += '0'+i.second[j+1];
                ts2 += i.first;
                cout<<ts1<<" "<<ts2<<"\n";
            }
            if(i.second.size()%2!=0){
                string ts1 = "", ts2 = "";
                ts1 += '0' + i.second[i.second.size()-1];
                ts1 += i.first;
                ts2 += sp[sp.size()-1];
                sp.pop_back();
                cout << ts1 << " " << ts2 << "\n";
            }
        }
        for(int i=0; i<sp.size(); i+=2){
            string a = sp[i];
            string b = sp[i+1];
            cout<<a<<" "<<b<<"\n";
        }
    }
    return 0;
}