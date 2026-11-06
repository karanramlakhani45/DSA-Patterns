class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
    int low=*max_element(nums.begin(),nums.end());
    int high=accumulate(nums.begin(),nums.end(),0LL);
    while(low<=high){
    int mid=low+(high-low)/2;
    int parts=countsubarray(nums,mid);
    if(parts>k){
        low=mid+1;
    }else{
        high=mid-1;
    }
    }
    return low;
    }
    int countsubarray(vector<int>& arr,int maxSum){
        int subarray=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]<=maxSum){
                sum+=arr[i];
            }else{
                subarray++;
                sum=arr[i];
            }
        }
        return subarray;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna