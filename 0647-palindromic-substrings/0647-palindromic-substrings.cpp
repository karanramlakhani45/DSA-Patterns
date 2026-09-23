class Solution {
public:
    int countSubstrings(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            int l=i;
            int r=i;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                c++;
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                c++;
                l--;
                r++;
            }
        }
        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna