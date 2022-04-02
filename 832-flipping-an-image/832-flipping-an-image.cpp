class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& a) {
        vector<vector<int>> v;
        int m=a.size();
        int n=a[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
              if(a[i][j]==0)
              {
                  a[i][j]=1;
                    }
                else if(a[i][j]==1)
                {
                     a[i][j]=0;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            vector<int> temp;
            for(int j=n-1;j>=0;j--)
            {
             temp.push_back(a[i][j]);  
            }
            v.push_back(temp);
        }
        
        return v;
        
    }
};