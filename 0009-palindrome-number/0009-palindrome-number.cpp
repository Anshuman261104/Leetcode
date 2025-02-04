class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long revNum = 0;
        long n = x;

        while (n > 0) {
            int d = n%10;
            revNum = revNum*10+d;
            n = n/10;
        }
        if(revNum == x){
            return true;
        }else{
            return false;
        }         
    }
};