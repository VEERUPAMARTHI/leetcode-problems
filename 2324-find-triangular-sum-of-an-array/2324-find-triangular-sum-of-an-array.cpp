class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size()>1){
            vector<int> finals(nums.size()-1);
            for(int i=0;i<nums.size()-1;i++){
                finals[i] = (nums[i] + nums[i+1])%10;
            }
            nums = finals;
        }
        return nums[0];
    }
};