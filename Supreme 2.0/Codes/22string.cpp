// LeetCode : 917 : Reverse only letter. 

#include<iostream>
#include<algorithm>
using namespace std;

string reverseOnlyLetters(string &s){
    int l = 0;
    int h = s.size()-1;
    while (l<h){
        if(isalpha(s[l]) && isalpha(s[h]))swap(s[l],s[h]),l++,h--;
        else if(!isalpha(s[l])) l++;
        else h--;
    }
    return s;

}
int main(){
    string s = "a-bC-dEf-ghIj";
    cout<<reverseOnlyLetters(s);

return 0;
}