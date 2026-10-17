class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0;
        int c2=0;
        int e1,e2;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(c1==0 && nums[i]!=e2){
                c1=1;
                e1=nums[i];
            }else if(c2==0 && nums[i]!=e1){
                c2=1;
                e2=nums[i];
            }else if(nums[i]==e1){
                c1++;
            }else if(nums[i]==e2){
                c2++;
            }else{
                c1--;
                c2--;
            }
        }
        int cnt1=0;
        int cnt2=0;
        int mini=(nums.size()/3)+1;
        for(int i=0;i<nums.size();i++){
            if(e1==nums[i]){
                cnt1++;
            }
            if(e2==nums[i]){
                cnt2++;
            }
            
        }
        if(cnt1>=mini) v.push_back(e1);
        if(cnt2>=mini && e1!=e2) v.push_back(e2);
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna