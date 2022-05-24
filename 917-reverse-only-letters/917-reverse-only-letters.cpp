class Solution {
    
public:
    string reverseOnlyLetters(string s) {
        int l=0;
        int h=s.size()-1;
             while(l<=h)
             {
                 if((s[l]>=33 && s[l]<=64) || (s[l]>=91 && s[l]<=96))
                 {
                     l++;
                 }
                else if((s[h]>=33 && s[h]<=64) || (s[h]>=91 && s[h]<=96))
                {
               
                h--;   
             }
                 else
                 {
                     swap(s[l],s[h]);
                     l++;
                     h--;
                 }
             }
        return s;
    }
};