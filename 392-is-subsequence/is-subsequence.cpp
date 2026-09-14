class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool sub=false;
        int left=0;
        int right=0;
        while(left<s.size() and right<t.size()){
            if(s[left]==t[right]){
                left++;
                right++;
            }
            else{
                right++;
            }
        }
        if(left==s.size()) {
                sub= true;
        }
        return sub;
    }
};