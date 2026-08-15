class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> st;
        for (auto x : operations) {

            // Cancel last score
            if (x == "C") {
                st.pop();
            }

            // Double last score
            else if (x == "D") {
                int lastScore = st.top();
                st.push(lastScore * 2);
            }

            // Add last two scores
            else if (x == "+") {

                int first = st.top();
                st.pop();

                int second = st.top();

                st.push(first);

                int newScore = first + second;
                st.push(newScore);
            }

            // Normal number
            else {
                int score = stoi(x); // stoi cover string into the integer ..
                st.push(score);
            }
        }

        // Calculate total
        int total = 0;
        while (!st.empty()) {
            total += st.top();
            st.pop();
        }

        return total;
    }
};