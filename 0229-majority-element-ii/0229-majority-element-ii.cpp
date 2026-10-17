class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> v;
        int n=nums.size();
        int mini=(n/3)+1;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]]==mini){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna