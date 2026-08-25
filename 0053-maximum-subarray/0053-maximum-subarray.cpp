class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int beste = nums[0];
        int ans = nums[0];
        for( int i =1 ; i< nums.size() ; i++){
            int v1 = beste + nums[i];
            int v2 = nums[i];
            beste = max(v1 , v2);
            ans = max(ans , beste );
        }
        return ans ;
    }
};