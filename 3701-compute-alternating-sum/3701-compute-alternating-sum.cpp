class Solution {
public:
    int alternatingSum(vector<int>& nums) {
      int sum=0;
      for(int i =0 ; i<nums.size(); i++){
        if(i%2==0){
            sum= sum+ nums[i];
        }
      }

        int sum2 =0;
        for(int i =0 ; i<nums.size(); i++){
        if(i%2!=0){
            sum2 =sum2- nums[i];
        }
        }

        int ans = sum+sum2;
        return ans;

 
    }
    
};