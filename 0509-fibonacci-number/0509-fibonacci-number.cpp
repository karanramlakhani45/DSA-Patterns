class Solution {
public:
    int fib(int n) {
        int first=0;
        int second=1;
        int temp=0;
        vector<int> v;
        int s=0;
        if(n==1){
            return 1;
        }
        for(int i=0;i<n-1;i++){
            
            s=first+second;
            temp=first;
            first=second;
            second=temp+second;

        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna