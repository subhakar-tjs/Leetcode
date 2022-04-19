class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int target) {
       vector<vector<int> > res;
        set<vector<int>> s;
        
       sort(num.begin(),num.end());
        /* for(int i=0;i<num.size();i++)
        {
            for(int j=i+1;i<num.size();i++)
            {
                int left=j+1,right=num.size()-1;
                
                while(left<right)
                {
                    vector<int> temp(4,0);
                    int tg2=target-num[i]-num[j];
                    if(num[left]+num[right]==tg2)
                    {
                      temp.push_back(num[i]);
                        temp.push_back(num[j]);
                            temp.push_back(num[left]);
                        temp.push_back(num[right]);
                       res.push_back(temp); 
                         while(left<right && num[left]==temp[0])
                    {
                        left++;
                    }
                     while(left<right && num[right]==temp[1])
                    {
                        right--;
                    }
                    }
                    else if(num[left]+num[right]<tg2)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    } 
                }
                while(j+1<num.size() && num[j]==num[j+1])
                    j++;
            }
             while(i+1<num.size() && num[i]==num[i+1])
                    i++;
            }
        return res;*/
        for(int i=0;i<num.size();i++)
        {
            for(int j=i+1;j<num.size();j++)
            {
                int left=j+1,right=num.size()-1;
                int tg2=target-num[i]-num[j];
                
                while(left<right)
                {
                    vector<int> temp(4,0);
                    
                    if(num[left]+num[right]>tg2)
                    {
                     right-- ;
                    }
                    else if(num[left]+num[right]<tg2)
                    {
                        left++;
                    }
                    else
                    {
                        s.insert({num[i],num[j],num[left],num[right]}); 
                        left++;
                        right--;
                    } 
                }
            }
            }
        for(auto it:s)
        {
            res.push_back(it);
        }
        return res;
        
    }
};