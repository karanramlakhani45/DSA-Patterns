class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int r=n-1;
        int l=0;
        if(n<2){
            return nums[0];
        }
        while(l<r){
            if(nums[l]!=nums[l+1]){
                return nums[l];
            }
            l=l+2;
           
        }
      
        return nums[l];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna