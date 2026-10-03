class Solution {
public:

    int check(vector<int>& a, int speed) {
        int hours = 0;

        for (int i = 0; i < a.size(); i++) {
            hours = hours + a[i] / speed;

            if (a[i] % speed != 0) {
                hours++;
            }
        }

        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = INT_MAX;
        int result = -1;

        while (low <= high) {

            int guess = low + (high - low) / 2;

            int r = check(piles, guess);

            if (r > h) {
                low = guess + 1;
            }
            else {
                result = guess;
                high = guess - 1;
            }
        }

        return result;
    }
};