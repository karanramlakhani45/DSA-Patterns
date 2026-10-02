class Solution {
public:
    int search(vector<int>& nums, int target) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
                c++;
            }
            
        }
        if(c!=1){
            return -1;
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna