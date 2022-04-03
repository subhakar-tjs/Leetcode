class Solution {
public:
    int maxProfit(vector<int>& a) {
        int min=a[0],maxi=0;
       for(int i=0;i<a.size();i++)
       {
           if(a[i]<=min)
           {
               min=a[i];
           }
               maxi=max(maxi,(a[i]-min));
           
       }
        return maxi;
        
    }
};