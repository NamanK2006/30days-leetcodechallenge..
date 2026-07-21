class Solution {
public:
    string reverseStr(string s, int k) {

        int n = s.size();

        for (int i = 0; i < n; i += 2 * k) {

            int l = i;
            // r is  derived by observation 
            int r = min(i + k - 1, n - 1);
            // reverse first k characters
            while (l < r) {

                swap(s[l], s[r]);
                l++;
                r--;
            }
        }

        return s;
    }
};