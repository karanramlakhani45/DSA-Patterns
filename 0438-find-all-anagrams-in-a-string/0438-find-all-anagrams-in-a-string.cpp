class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        vector<int> v;
        for(int i=0;i<p.size();i++){
            m1[p[i]]++;
        }
        int k=p.size();
        for(int i=0;i<s.size();i++){
            m2[s[i]]++;
           if(i>=k){
            m2[s[i-k]]--;
            if(m2[s[i-k]]==0){
                m2.erase(s[i-k]);
            }
           }

           if(i>=k-1){
            if(m1==m2){
                v.push_back(i-k+1);
            }
           }
        
        }
        return v;
        }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna