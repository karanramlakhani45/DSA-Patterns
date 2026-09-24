class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int n=s.size();
        set<int> st;
        int c=0;
        int m=0;
        for(int r=0;r<n ;r++){

            while(st.contains(s[r])){
                c--;
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            c++;
            m=max(m,c);
        }
        return m;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna