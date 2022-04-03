class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,res=0;
        int cur_max=nums[0],max_far=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            //sum=sum+nums[i];
            cur_max=max(nums[i],cur_max+nums[i]);
            max_far=max(max_far,cur_max);
           /* if(sum<0)
            {
                sum=0;
            }*/
           // res=max(res,sum);
        }
        return max_far;
    }
};