class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int h = *max_element(nums.begin(),nums.end());
        int ans=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(sumofD(nums,mid)<=threshold){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
    int sumofD(vector<int>& arr,int div){
        
        int s=0;
        for(int i=0;i<arr.size();i++){
            s+=ceil((double)(arr[i])/(double)(div));
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna