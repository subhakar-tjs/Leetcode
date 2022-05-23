class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26]={0};
        int flag=1;
        for(auto it:s)
            a[it-'a']++;
              
        for(auto it:t)
              {
                  --a[it-'a'];  
                }
              
              for(int i=0;i<26;i++)
              {
                  if(a[i]==0)
                      flag=1;
                  else
                  {
                      flag=0;
                      break;
                  }
              }
              if(flag)
                  return true;
        else
            return false;
    }
};