class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int beste = nums[0];       // maximum sum ending here
        int mine = nums[0];      // minimum sum ending here

        int ans = abs(nums[0]);

        for(int i = 1; i < nums.size(); i++)
        {
            // Maximum subarray sum ending here
            int v1 = beste + nums[i];
            int v2 = nums[i];

            beste = max(v1, v2);

            // Minimum subarray sum ending here
            int v3 = mine + nums[i];
            int v4 = nums[i];

            mine = min(v3, v4);

            // Compare positive maximum
            // with absolute value of negative minimum
            ans = max(ans, max(beste, abs(mine)));
        }

        return ans;
    }
};