class Solution {
public:
    int maximumLengthSubstring(string s) {

        int low = 0;
        int ans = 0;

        unordered_map<char, int> mp;

        for (int high = 0; high < s.size(); high++) {

            // Add
            mp[s[high]]++;

            // Shrink
            while (mp[s[high]] > 2) {

                mp[s[low]]--;

                if (mp[s[low]] == 0) {
                    mp.erase(s[low]);
                }

                low++;
            }

            // Valid window
            ans = max(ans, high - low + 1);
        }

        return ans;
    }
};