class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int total = nums[0];

        int beste = nums[0]; // maximum sum ending here
        int mine = nums[0];  // minimum sum ending here

        int maxSum = nums[0]; // maximum normal subarray
        int minSum = nums[0]; // minimum subarray

        for (int i = 1; i < nums.size(); i++) {
            total += nums[i];

            // Maximum subarray sum ending here
            int v1 = beste + nums[i];
            int v2 = nums[i];

            beste = max(v1, v2);

            maxSum = max(maxSum, beste);

            // Minimum subarray sum ending here
            int v3 = mine + nums[i];
            int v4 = nums[i];

            mine = min(v3, v4);

            minSum = min(minSum, mine);
        }

        // If all elements are negative
        if (maxSum < 0)
            return maxSum;

        // Circular subarray sum
        int circularSum = total - minSum;

        // Compare normal maximum with circular maximum
        return max(maxSum, circularSum);
    }
};