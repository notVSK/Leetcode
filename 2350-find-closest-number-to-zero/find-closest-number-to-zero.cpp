class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int currentNum = nums[0];
        for(int i = 0; i<=nums.size() - 1; i++){
            if (abs(nums[i]) < abs(currentNum) || 
                (abs(nums[i]) == abs(currentNum) && nums[i] >(currentNum))){
                currentNum =  nums[i];
            }
        }
        return currentNum;
    }
};