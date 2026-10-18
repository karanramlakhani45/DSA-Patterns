class Solution {
public:
    int reverse(int x) {
        long long n=0;
        while(x!=0){
            int r=x%10;
            n=(n*10)+r;
            x=x/10;
            if(n<INT_MIN || n>INT_MAX){
                return 0;
            }
        }
        return int(n);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna