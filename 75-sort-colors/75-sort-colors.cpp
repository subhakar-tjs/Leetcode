class Solution {
public:
    void sortColors(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
        int c1=0,c2=0,c3=0;
        for(int i=0;i<nums.size();i++)
        {
            switch(nums[i])
            {
                case 0:c1++; break;
                case 1:c2++;break;
                case 2:c3++;break;
            }
        }
        int i=0;
        while(c1!=0)
        {
            nums[i++]=0;
            c1--;
        }
        while(c2!=0)
        {
            nums[i++]=1;
            c2--;
        }
        while(c3!=0)
        {
            nums[i++]=2;
            c3--;
        }
    }
};