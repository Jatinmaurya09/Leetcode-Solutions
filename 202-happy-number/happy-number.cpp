class Solution {
public:
    bool isHappy(int n) {
        if(n==1 or n==7) return true;
        else if(n<10) return false;
        else{
        int sum=0;
            while(n>0){
            int digit=n%10;
            digit*=digit;
            sum+=digit;
            n/=10;
        }
        return isHappy(sum);
        }
    }
};