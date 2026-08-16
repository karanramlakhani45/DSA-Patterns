class Solution {
public:
    bool isPalindrome(int x) {
        int r=0;
        long t=x;
        long p=0;
        if(x<0){
            return false;
        }

        while(x>0){
            r=x%10;
            x=x/10;
            p=p*10 + r;
        }
        if(p==t){
            return true;
        }else{
            return false;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna