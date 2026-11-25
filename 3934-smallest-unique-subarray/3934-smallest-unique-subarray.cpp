class Solution {
public:
    using ll =long long;
    const ll base=100002;
    const ll mod=1e9+7;
    vector<ll> power;
    
    bool check(int len,vector<int>& nums){
        
        ll hash=0;
        unordered_map<ll,int> m;
        for(int i=0;i<len;i++){
            hash=(hash*base+nums[i])%mod;
        }
        m[hash]++;
        ll highest=power[len-1];
        for(int i=len;i<nums.size();i++){
            hash=(hash-nums[i-len]*highest%mod+mod)%mod;
            hash=(hash*base+nums[i])%mod;
            m[hash]++;
        }
        for(auto it:m){
            if(it.second==1){
                return true;
            }
        }
        return false;

    }
    int smallestUniqueSubarray(vector<int>& nums) {
       
       int n=nums.size();
       power.resize(n+1,1);
       for(int i=1;i<n;i++){
        power[i]=(power[i-1]*base)%mod;
       }
       int l=1;
       int r=n;
       int ans=n;
       while(l<=r){
        int mid=l+(r-l)/2;
        if(check(mid,nums)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
       }
       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna