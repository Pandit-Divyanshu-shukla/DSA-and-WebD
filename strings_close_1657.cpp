#include <bits/stdc++.h>
using namespace std;
bool closeStrings(string s1, string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    vector<int> count1(26,0);
    vector<int> count2(26,0);
    for(char ch:s1){
        count1[ch-'a']++;
    }
    for(char ch:s2){
        if(count1[ch-'a']==0){
            return false;
        }
        count2[ch-'a']++;
    }
    
    sort(count1.begin(), count1.end());
    sort(count2.begin(), count2.end());
    
    for(int i=0; i<26; i++){
        if(count1[i]!=count2[i]){
            return false;
        }
    }
    
    return true;
    
}
int main()
{
    string str1="bca";
    string str2="abc";
    cout<<closeStrings(str1, str2);
    return 0;
}