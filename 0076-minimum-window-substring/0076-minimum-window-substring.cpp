class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0;
        int c = t.size();
        int mini = INT_MAX;
        int start = 0;

        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        for (int i = 0; i < t.size(); i++) {
            m1[t[i]]++;
        }

        for (int r = 0; r < s.size(); r++) {
            char ch = s[r];
            m2[ch]++;

            if (m1.count(ch) && m2[ch] <= m1[ch]) {
                c--;
            }

            while (c == 0) {
                if (r - l + 1 < mini) {
                    mini = r - l + 1;
                    start = l;
                }

                char lch = s[l];
                m2[lch]--;

                if (m1.count(lch) && m2[lch] < m1[lch]) {
                    c++;
                }

                l++;
            }
        }

        if (mini == INT_MAX)
            return "";

        return s.substr(start, mini);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna