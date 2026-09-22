class Solution {
public:
    string longestPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            int l=i;
            int r=i;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if((r-l+1)>ans.size()){
                    ans=s.substr(l,r-l+1);
                }
                l--;
                r++;
            }

            l=i;
            r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if((r-l+1)>ans.size()){
                    ans=s.substr(l,r-l+1);
                }
                l--;
                r++;
            }
        }
        return ans;
    }
    
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna