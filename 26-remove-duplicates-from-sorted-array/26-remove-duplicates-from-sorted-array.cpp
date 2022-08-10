class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res=1;
        // vector<int> v;
        // v.push_back(nums[0]);
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(nums[i]!=nums[i-1])
        //     {
        //         v.push_back(nums[i]);
        //     }
        //     }
        // nums=v;
        // return nums.size();
        // int j=0;
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(nums[j]!=nums[i])
        //     {
        //         j++;
        //         nums[j]=nums[i];
        //     }
        // }
        // return j+1;
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        vector<int> v(s.begin(),s.end());
        nums=v;
        return nums.size();
    }
};