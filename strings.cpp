#include <bits\stdc++.h>
#include <string.h>
#include <stack>
using namespace std;
int getVowelscount(string str){
    int vowcount=0;
    for(char ch: str){
        if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ){
            vowcount++;
        }
    }
    return vowcount;
}
bool isAnagram(string str1, string str2){
    if(str1.length()!=str2.length()){
        cout<<"Not Valid Anagram"<<endl;
        return false;
    }
    int count[26]={0};
    for(char ch: str1){
        int pos=ch-'a';
        count[pos]++;
    }
    for(char ch: str2){
        count[ch-'a']--;
        if(count[ch-'a']<0){
            cout<<"Not Valid Anagram"<<endl;
            return false;
        }
    }
    cout<<"Valid Anagram"<<endl;

    return true;
}
bool areAlmostEqual1(string s1, string s2) {
    if(s1.length() != s2.length()) {
        return false;
    }
    char diffChar1, diffChar2;
    int diff = 0;
    for(int i=0; i<s1.length(); i++) {
        if(s1[i] != s2[i]) {
            if(!diff) {
                diffChar1 = s1[i];
                diffChar2 = s2[i];
            } 
            else{
                if(diffChar1 != s2[i] || diffChar2 != s1[i]){
                    return false;
                }
            }
            diff++;
        }
        if(diff>2){
            return false;
        }
    }
    if(diff==1){
        return false;
    }
    return true;
}

bool isValid(string s){
    stack<char> s1;
    for(char ch: s){
        if(ch=='(' || ch=='{' || ch=='['){
            s1.push(ch);
        }
        else{
            if(s1.empty()){
                return false;
            }
            if((s1.top()=='(' && ch==')') || (s1.top()=='{' && ch=='}') || (s1.top()=='[' && ch==']')){
                s1.pop();
            }
            else{
                return false;
            }
        }
    }
    if(s1.empty()){
        return true;
    }
    return false;
}

int main()
{
    // string str="mississippi";
    string str1="gram";
    string str2="arm";
    string str="({{{{}}}))";
    cout<<isValid(str);
    //cout<<isAnagram(str1,str2);
    // cout<<areAlmostEqual1("arman","raman");
    //cout<<"No of times lowercase vowels occurs in the given string "<<str<<" is "<<getVowelscount(str)<<endl;
    // string str;
    // // Input
    // getline(cin,str);
    // // Output
    // cout<<str[0]<<endl;
    // cout<<str<<endl;
    return 0;
}