#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;

    while(getline(cin, s)){
        stringstream ss(s);

        vector<string> v;
    
        string word;
        while(ss >> word){
            v.push_back(word);
        }
    
        for(auto &val : v){
            reverse(val.begin(), val.end());
        }
    
        for(int i=v.size()-1; i>=0; i--){
            cout << v[i] << " ";
        }
        cout << endl;
    }

    


    return 0;
}
