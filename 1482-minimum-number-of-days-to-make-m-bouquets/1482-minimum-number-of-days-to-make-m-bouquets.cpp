class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()<(1LL*m*k)) return -1;
        
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                ans=mid;
                high =mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
    bool possible(vector<int>& arr,int day,int m,int k){
        int c=0;
        int bn=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day){
                c++;
            }else{
                bn+=(c/k);
                c=0;
            }
        }
        bn+=(c/k);
        return bn>=m;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna