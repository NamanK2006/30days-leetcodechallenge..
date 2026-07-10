class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 3; i++) {
            // Skip karo first duplicate elemntt ko 
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < n - 2; j++) {

                // Skip karo second duplicate  element ko 
            if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
            }
            int left = j + 1;
            int right = n - 1;
            while (left < right) {
             long long  sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[left] + (long long)nums[right];
                if (sum == target) {
                ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                    left++;
                    right--;
             // Skip duplicate left wali  values ko ; 
                while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                        }
                // Skip duplicate right wali  values ko ;
                        while (left < right && nums[right] == nums[right + 1]) {
                            right--;
                        }
                    }
                    else if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};