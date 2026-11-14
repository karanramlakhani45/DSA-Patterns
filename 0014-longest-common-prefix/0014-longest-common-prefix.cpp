class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        string demo=*min_element(strs.begin(),strs.end());
        
        int n=strs.size();
        if(n==1){
            return strs[0];
        }
        
            int l=0;
            int c=0;
            int r=demo.size()-1;
            while(l<=r){
                if(strs[0][l]==strs[n-1][l]){
                    ans.push_back(strs[0][l]);
                    l++;
                }else{
                     break;
                }
                
            }
            
            
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna