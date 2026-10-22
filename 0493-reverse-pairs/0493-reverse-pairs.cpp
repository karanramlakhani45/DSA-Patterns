class Solution {

    void merge(vector<int>& arr,int l,int m,int r){
        int i=l;
        int j=m+1;
        vector<int> temp;
        while(i<=m && j<=r){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i++]);
            }else{
                temp.push_back(arr[j++]);
            }
        }
        while(i<=m){
            temp.push_back(arr[i++]);
        }
        while(j<=r){
            temp.push_back(arr[j++]);
        }
        for(int k=0;k<temp.size();k++){
            arr[l+k]=temp[k];
        }
    }
    long long mergesort(vector<int>& arr,int l,int r){
        if(l>=r){
            return 0;
        }
        int mid=l+(r-l)/2;
        int j=mid+1;
        long long pairs=0;
        pairs+=mergesort(arr,l,mid);
        pairs+=mergesort(arr,mid+1,r);
        for(int i=l;i<=mid;i++){
            while(j<=r && (long  long)arr[i]> 2LL*arr[j]){
                j++;
            }
            pairs+=j-(mid+1);
        }
        merge(arr, l, mid,r);
        return pairs;
    }
public:
    int reversePairs(vector<int>& nums) {
        vector<int> arr=nums;
        return (int)mergesort(arr,0,arr.size()-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna