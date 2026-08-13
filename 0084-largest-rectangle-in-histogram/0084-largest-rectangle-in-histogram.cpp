class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();

        vector<int> left(n);
        vector<int> right(n);

        stack<int> s;

        // Right Smaller
        for (int i = n - 1; i >= 0; i--) {

            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }

            if (s.empty()) {
                right[i] = n;
            }
            else {
                right[i] = s.top();
            }

            s.push(i);
        }

        // Clear stack
        while (!s.empty()) {
            s.pop();
        }

        // Left Smaller
        for (int i = 0; i < n; i++) {

            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }

            if (s.empty()) {
                left[i] = -1;
            }
            else {
                left[i] = s.top();
            }

            s.push(i);
        }

        // Calculate maximum area
        int ans = 0;

        for (int i = 0; i < n; i++) {

            int width = right[i] - left[i] - 1;

            int area = heights[i] * width;

            ans = max(ans, area);
        }

        return ans;
    }
};