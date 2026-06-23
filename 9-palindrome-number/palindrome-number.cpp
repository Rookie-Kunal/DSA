class Solution {
public:
    bool isPalindrome(long x) {
        int ld;
        long original = x;
        long rev =0;
        while(x>0){
            ld = x%10;
            rev = ((rev*10)+ld);
            x = x/10;
        }
        if(original!=rev){
            return false;
        }else{
            return true;
        }
    }
};