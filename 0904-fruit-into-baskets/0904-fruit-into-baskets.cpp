class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0, high = 0;
        int res = 0;
        int n = fruits.size();

        unordered_map<int, int> f;

        for (high = 0; high < n; high++) {
            f[fruits[high]]++;

            while (f.size() > 2) {
                f[fruits[low]]--;

                if (f[fruits[low]] == 0) {
                    f.erase(fruits[low]);
                }

                low++;
            }

            // f.size() <= 2 automatically here
            res = max(res, high - low + 1);
        }

        return res;
    }
};