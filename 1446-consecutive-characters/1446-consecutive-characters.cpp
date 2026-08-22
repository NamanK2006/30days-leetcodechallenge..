class Solution {
public:
    int maxPower(string s) {
        int low = 0, high = 0;
        int res = 0;

        unordered_map<char, int> f;

        for (high = 0; high < s.size(); high++) {

            f[s[high]]++;

            while (f.size() > 1) {

                f[s[low]]--;

                if (f[s[low]] == 0) {
                    f.erase(s[low]);
                }

                low++;
            }

            res = max(res, high - low + 1);
        }

        return res;
    }
};