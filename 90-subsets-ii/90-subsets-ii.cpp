class Solution {
public:
    vector<vector<int>> ans;
    void recursion(int ind,vector<int>& nums,vector<int> temp)
    {
        ans.push_back(temp);
        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind && nums[i]==nums[i-1])
                continue;
            temp.push_back(nums[i]);
            recursion(i+1,nums,temp);
            temp.pop_back();
        }
       
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        
        recursion(0,nums,temp);
        
        
        return ans;
        
        
    }
};