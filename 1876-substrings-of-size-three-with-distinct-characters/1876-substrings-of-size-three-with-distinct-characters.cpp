class Solution {
public:
    int countGoodSubstrings(string s) {

        int low = 0;
        int high = 3;
        int ans = 0;

        unordered_map<char, int> mp;

        // Initial window
        for (int i = low; i < high; i++) {
            mp[s[i]]++;
        }

        if (mp.size() == 3) {
            ans++;
        }

        // Remaining windows
        while (high < s.size()) {

            // Remove
            mp[s[low]]--;
            if (mp[s[low]] == 0) {
                mp.erase(s[low]);
            }
            low++;

            // Add
            mp[s[high]]++;
            high++;

            // Check
            if (mp.size() == 3) {
                ans++;
            }
        }

        return ans;
    }
};