class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1){
            return 0;
        }
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int longest=1;

        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int cnt=1;
                int x=it;
                while(s.find(x+1)!=s.end()){
                    cnt++;
                    x=x+1;

                }
                longest=max(longest,cnt);
            }
            
        }
        return longest;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna