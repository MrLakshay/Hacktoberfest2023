#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
    queue<string> q;
    string help;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ') {
            q.push(help);
            help="";
        }
        else help+=s[i];
    }
    q.push(help);
    string ans;
    while(!q.empty()){
        string tp=q.front();
        q.pop();
        reverse(tp.begin(),tp.end());
        ans+=tp+" ";
    }
    ans.pop_back();
    return ans;
}
int main(){
  string s="Let's take LeetCode contest";
  cout<<reverseWords(s);
  return 0;
}
