class Solution {
public:
  /*  vector<int> rotate(vector<int>& nums,int k)
    {
        int n=nums.size();
        int first=nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            nums[i]=nums[i+1];
        }
        nums[n-1]=first;
        return nums;
        
    }*/
    int search(vector<int>& nums, int target) {
//         int id=-1,count=0,flag=0;
//          for(int i=0;i<nums.size();i++)
//          {
//              if(nums[i]!=target)
//              {
//                  flag=1;
//              }
//          }
        
//        /* for(int i=0;i<nums.size();i++)
//         {
//             if(nums[0]==target)
//             {
//                 flag=0;
//             }
//             else
//             {
//              rotate(nums,i);
//                 count++;
//             }
//         }*/
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]==target)
//             {
//                 flag=0;
//                 id=i;
//                 break;
//             }
//         }
        
//         if(flag==1)
//         return -1;
//         else
//         return id;
        int low=0,high=nums.size()-1;
       while (low <= high) { //<--- step 2
    int mid = (low + high) >> 1; //<----step 3
    if (nums[mid] == target)
      return mid; // <---step 4

    if (nums[low] <= nums[mid]) { //<---step 5
      if (nums[low] <= target && nums[mid] >= target)
        high = mid - 1; //<---step 6 
      else
        low = mid + 1; //<---step 7
    } else { //<---step 7
      if (nums[mid] <= target && target <= nums[high])
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
  return -1; //<---step 8
}
    
};