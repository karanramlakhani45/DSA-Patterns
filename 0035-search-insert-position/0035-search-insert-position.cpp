class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        while(l<=r){
            if(nums[0]>target){
                    return 0;
                }
             if(target>nums[r]){
                return r+1;
            }
            
            if(nums[l]>target){
                if(nums[l-1]<target && l>=0){
                    return l;
                }
                
            }
            else{
                l++;
            }
           
            
        }
        return-1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna