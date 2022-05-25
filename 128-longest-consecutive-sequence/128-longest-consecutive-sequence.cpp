class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
       /* if(nums.size() == 0 ){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int maxi=1,c=1,prev=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==prev+1)
            {
                c++;
                 
            }
            else if(nums[i]!=prev)
            {
                c=1;
            }
            prev=nums[i];
            maxi=max(maxi,c);
            
           
        }
        return maxi;*/
        if(nums.size() == 0 ){
            return 0;
        }
        set<int> s;
        for(int i:nums)
            s.insert(i);
        int currentnum,currentstreak=1,maxi=0;
        
        for(int i:s)
        {
            if(!s.count(i-1))
            {
                currentnum=i;
                currentstreak=1;
                while(s.count(currentnum+1))
                {
                    currentnum+=1;
                    currentstreak+=1;
                }
                
                maxi=max(maxi,currentstreak);
            }
        }
        return maxi;
        
        
    }
};