class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int low = 0;
        int high = 0;
        int res = 0;

        unordered_map<int, int> mp;

        for (high = 0; high < nums.size(); high++) {
            // add current element
            mp[nums[high]]++;

            // if zeros are more than k
            while (mp[0] > k) {
                mp[nums[low]]--;

                if (mp[nums[low]] == 0)
                    mp.erase(nums[low]);

                low++;
            }

            // current window size
            int size = high - low + 1;

            res = max(res, size);
        }

        return res;
    }
};