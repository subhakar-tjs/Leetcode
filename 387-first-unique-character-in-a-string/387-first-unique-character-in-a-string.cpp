class Solution {
public:
    int firstUniqChar(string s) {
      int a[26]={0};
        
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'a']++;
        }
        int ind=0;
        int flag=0;
        
        char res;
        for(int i=0;i<s.size();i++)
        {
            if(a[s[i]-'a']==1)
            {
                flag=1;
                ind=i;
                break;
            }
        }
            if(flag==1)
                return ind;
            else
                return -1;
    }
};