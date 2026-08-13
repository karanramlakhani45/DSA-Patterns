class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<char,int> m;
        
        int l=0;
        int maxf=0;
        int maxl=0;
        for(int r=0;r<n;r++){

            m[s[r]-'A']++;
            maxf=max(maxf,m[s[r]-'A']);
            while((r-l+1)-maxf>k){

            m[s[l]-'A']--;
            
            l++;
            }
            if((r-l+1)-maxf<=k){
                maxl=max(maxl,r-l+1);
            }
            }
            return maxl;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna