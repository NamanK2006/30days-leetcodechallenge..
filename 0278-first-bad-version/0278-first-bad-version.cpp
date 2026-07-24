// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// The API is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int ans = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isBadVersion(mid)) {
                ans = mid;        // possible first bad version
                high = mid - 1;   // search on the left
            } else {
                low = mid + 1;    // search on the right
            }
        }

        return ans;
    }
};