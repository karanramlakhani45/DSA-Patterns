class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();

        int i=0;
        int j=0;
        int total=m+n;
        int prev=0;
        int curr=0;
        for(int c=0;c<=total/2;c++){
            prev=curr;
            if(i<m && j<n){
                if(nums1[i]<=nums2[j]){
                    curr=nums1[i];
                    i++;
                }
                else{
                    curr=nums2[j];
                    j++;
                }
            }else{
                if(j<n){
                    curr=nums2[j];
                    j++;
                }else{
                    curr=nums1[i];
                    i++;
                }
            }
        }
        if(total%2==1){
            return curr;
        }else{
            return (prev+curr)/2.0;
        }

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna