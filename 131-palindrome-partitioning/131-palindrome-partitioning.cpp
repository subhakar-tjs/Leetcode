class Solution {
public:
    vector<vector<string>> ans;
    void helper(int ind,string& s,vector<string>& temp)
    {
        if(ind==s.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<s.size();++i)
        {
            if(ispalindrome(s,ind,i))
            {
                temp.push_back(s.substr(ind,i-ind+1));
                helper(i+1,s,temp);
                temp.pop_back();
            }
        }
    }
    bool ispalindrome(string& s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
            {
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        helper(0,s,temp);
        return ans;
    }
};