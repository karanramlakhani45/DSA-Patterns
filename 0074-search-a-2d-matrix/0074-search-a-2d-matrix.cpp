class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
    
        int top=0;
        int bottom=r-1;
        int row=-1;
        while(top<=bottom){
            int mid=top+(bottom-top)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][c-1]){
                row=mid;
                break;
            }else if(target<matrix[mid][0]){
                bottom =mid-1;
            }else{
                top=mid+1;
            }
        }
        if(row==-1){
            return false;
        }
        int l=0;
        int right=c-1;
        while(l<=right){
            int mid=l+(right-l)/2;
            if(matrix[row][mid]==target){
                return true;
            }else if(matrix[row][mid]<target){
                l=mid+1;
            }else{
                right=mid-1;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna