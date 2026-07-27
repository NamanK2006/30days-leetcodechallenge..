class Solution {
public:
    int findMin(vector<int>& nums) {
                int smallest = INT_MAX;
        for(int i =0 ;i< nums.size(); i++){
            if(nums[i]< smallest){
                smallest = nums[i];
            }   
        }
        return smallest ;

    }
};