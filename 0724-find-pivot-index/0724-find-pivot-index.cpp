class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int i;
        int sum = 0;

        for(i = 0; i < n; i++) {
            sum += nums[i];
        }

        int left = 0;

        // Check index 0
        if(left == sum - nums[0])
            return 0;

        for(int i = 1; i < n; i++) {
            left = left + nums[i - 1];

            int right = sum - left - nums[i];

            if(left == right)
                return i;
        }

        return -1;
    }
};