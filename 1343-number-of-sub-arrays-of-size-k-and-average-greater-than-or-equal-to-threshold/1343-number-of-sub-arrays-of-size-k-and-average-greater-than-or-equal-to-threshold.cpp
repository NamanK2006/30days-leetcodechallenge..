class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low = 0;
        int sum = 0;
        int ans = 0;
        int high = k;

        // First window
        for (int i = low; i < high; i++) {
            sum += arr[i];
        }

        if (sum >= k * threshold)
            ans++;

        // Remaining windows

        while (high < arr.size()) {
            sum -= arr[low];
            low++;

            sum += arr[high];

            if (sum >= k * threshold)
                ans++;

            high++;
        }

        return ans;
    }
};