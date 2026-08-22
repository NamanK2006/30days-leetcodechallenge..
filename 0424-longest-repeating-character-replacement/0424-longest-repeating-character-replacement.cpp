class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0, high = 0;
        int res = 0;
        int maxFreq = 0;

        unordered_map<char, int> f;

        for (high = 0; high < s.size(); high++) {

            f[s[high]]++;

            maxFreq = max(maxFreq, f[s[high]]);

            while ((high - low + 1) - maxFreq > k) {

                f[s[low]]--;

                low++;
            }

            res = max(res, high - low + 1);
        }

        return res;
    }
};