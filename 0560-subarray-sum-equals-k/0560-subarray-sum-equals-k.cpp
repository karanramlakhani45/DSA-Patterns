class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        m[0]=1;
        int pfxsum=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            pfxsum+=nums[i];
            if(m.find(pfxsum-k)!=m.end()){
                c+=m[pfxsum-k];
            }
            m[pfxsum]++;
        }
        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna