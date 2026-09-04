class Solution {
public:
    bool isPalindrome(int x) {
        int duplicate=x;
        long ans=0;
        while(x>0){
            int last_digit=x%10;
            ans=ans*10+last_digit;
            x/=10;
        }
        if(ans==duplicate) return true;
        return false;
    }
};