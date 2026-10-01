class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int l=1;
        int r=x/2;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long sq=mid*mid;
            if(sq==x){
                return mid;
            }else if(sq<x){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return r;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna