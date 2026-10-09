class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int n=num;
       while(n>0) {
        int t=n%10;
        if(num%t==0){
            c++;
        }
        n=n/10;
       }
       return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna