class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pre=1;
        int post=1;
        vector<int> answer(n);
        for(int i=0;i<n;i++){
            answer[i]=pre;
            pre=pre*nums[i];
        }
        for(int i=n-1;i>=0;i--){
            answer[i]=answer[i]*post;
            post=post*nums[i];
        }
        return answer;
    }
};