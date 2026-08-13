class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        
        int maximum=0;
        unordered_map<int,int> m;
        for(int r=0;r<n;r++){
            m[nums[r]]++;
            
            while(m.size()>2){
                m[nums[l]]--;
                if(m[nums[l]]==0){
                    m.erase(nums[l]);
                }
                l++;
               
            }
            maximum=max(r-l+1,maximum);
        }
        
        return maximum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna