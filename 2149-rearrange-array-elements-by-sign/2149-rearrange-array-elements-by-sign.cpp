class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        int poss=0;
        int neg=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                v[poss]=nums[i];
                poss+=2;
            }else{
                v[neg]=nums[i];
                neg+=2;
            }
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna