class Solution {
public:
    vector<vector<int>> ans;
    void helper(int ind,int t,vector<int>& a,vector<int> temp)
    {
        if(ind==a.size())
        {
            if(t==0)
                ans.push_back(temp);
            return;
        }
       if(a[ind]<=t)
       {
           temp.push_back(a[ind]);
           helper(ind,t-a[ind],a,temp);
           temp.pop_back();
       }
        helper(ind+1,t,a,temp);       
    }
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
//         vector<vector<int>> v;
//         sort(a.begin(),a.end());
//         int a1,a2,a3,flag=0;
//         for(int i=0;i<a.size()-1;i++)
//         {
//             vector<int>temp;
//             flag=0;
//             int l=i+1,h=a.size()-1;
//             while(l<h)
//             {
//                 if(a[l]+a[i]+a[h]==t)
//                 {
//                     flag=1;
//                     a1=a[l];
//                     a2=a[i];
//                     a3=a[h];
//                     }
//                  if(flag==1)
//                     {
//                       temp.push_back(a1);
//                          temp.push_back(a2); 
//                          temp.push_back(a3); 
//                     }
//                 else if(a[l]+a[i]+a[h]<t)
//                 {
//                     l++;
//                 }
//                 else if(a[l]+a[i]+a[h]>t)
//                 {
//                     h++;
//                 }
               
//             }
//             v.push_back(temp);
            
//         }
//         return v;
        vector<int> temp;
        helper(0,t,a,temp);
        return ans;
        
    }
};