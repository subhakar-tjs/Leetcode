class Solution {
public:
     bool canConstruct(string ransomNote, string magazine) {
        int a[26]={0};
         for(int i=0;i<magazine.size();i++)
         {
             a[magazine[i]-'a']++;
         }
         for(auto it:ransomNote)
         {
             if(--a[it-'a'] < 0)
             {
                 return false;
                 break;
             }
         }
          return true;   
             
    }
};