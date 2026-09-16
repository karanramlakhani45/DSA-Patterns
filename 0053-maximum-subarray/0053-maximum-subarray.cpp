class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int m=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            m= max(m,sum);
            if(sum<0){
                sum=0;
            }
           
        }
        return m;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna