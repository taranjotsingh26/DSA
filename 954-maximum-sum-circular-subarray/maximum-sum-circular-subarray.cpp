class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        int currMax = 0 , currMin = 0;
        int maxSum = nums[0] , minSum = nums[0];

        for(int i=0; i<n; i++){
            currMax = max(nums[i],nums[i]+currMax);
            maxSum = max(currMax,maxSum);
            currMin = min(nums[i],nums[i]+currMin);
            minSum = min(minSum,currMin);

            totalSum += nums[i];
        }

        int normalSum = maxSum;
        if(minSum == totalSum){
            return normalSum;
        }
        
        int circularSum = totalSum - minSum;

        return max(normalSum,circularSum);
    }
};