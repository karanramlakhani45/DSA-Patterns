class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int m=0;
        for(int i=0;i<nums.size();i++){
            long long prod=1;
            int g=0;
            int lc=1;
            int l=i;
            while(l<n){
                prod*=nums[l];
                if(prod>25200) break;
                g=gcd(g,(long long )nums[l]);
                lc=(lc/gcd(lc,(long long)nums[l]))*nums[l];
                if(prod==g*lc){
                    m=max(m,l-i+1);
                }
                l++;
            }

        }
        return m;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna