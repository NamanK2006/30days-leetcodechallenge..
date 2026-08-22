class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    // this is the pattern for fixed size subarray ...
        int low = 0;
        int high = k;

        // 1. Calculate initial window
        int sum = 0;

        for (int i = low; i < high; i++) {
            sum += nums[i];
        }

        int maxSum = sum;

        // 2. Slide the fixed-size window
        while (high < nums.size()) {

            sum -= nums[low]; // remove old element
            low++;

            sum += nums[high]; // add new element
            high++;

            maxSum = max(maxSum, sum);
        }

        // 3. Maximum average
        return (double)maxSum / k;
    }
};