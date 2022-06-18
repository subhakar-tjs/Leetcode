class Solution {
public:
    /*vector<int> NGR(vector<int> height)
    {
        vector<int> v1;
        stack<int> s1;
        for(int i=height.size()-1;i>=0;i--)
        {
            if(s1.size()==0)
            {
                v1.push_back(0);
            }
            else if(s1.size()>0 && s1.top()>height[i])
            {
                v1.push_back(s1.top());
            }
            else if(s1.size()>0 && s1.top()<=height[i])
            {
                while(s1.size()>0 && s1.top()<=height[i])
                {
                    s1.pop();
                }
                if(s1.size()==0)
                {
                    v1.push_back(0);
                }
                else
                {
                    v1.push_back(s1.top());
                }
            }
            s1.push(height[i]);
        }
        reverse(v1.begin(),v1.end());
        return v1;
    }
     vector<int> NGL(vector<int> height)
    {
        vector<int> v2;
        stack<int> s2;
        for(int i=0;i<height.size();i++)
        {
            if(s2.size()==0)
            {
                v2.push_back(0);
            }
            else if(s2.size()>0 && s2.top()>height[i])
            {
                v2.push_back(s2.top());
            }
            else if(s2.size()>0 && s2.top()<=height[i])
            {
                while(s2.size()>0 && s2.top()<=height[i])
                {
                    s2.pop();
                }
                if(s2.size()==0)
                {
                    v2.push_back(0);
                }
                else
                {
                    v2.push_back(s2.top());
                }
            }
            s2.push(height[i]);
        }
         return v2;
    }*/
    int trap(vector<int>& height) {
        int trap=0,mini=INT_MAX;
        vector<int> v1(height.size());
        vector<int> v2(height.size());
        v1[0]=height[0];
        v2[height.size()-1]=height[height.size()-1];
        for(int i=1;i<height.size();i++)
            v1[i]=max(v1[i-1],height[i]);
        for(int i=height.size()-2;i>=0;i--)
            v2[i]=max(height[i],v2[i+1]);
        for(int i=0;i<height.size();i++)
        {
            mini=min(v1[i],v2[i])-height[i];
            trap+=mini;
        }
        return abs(trap);
    }
};