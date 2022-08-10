class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        string res="";
        int s=0;
        while(i>=0 || j>=0 || s==1)
        {
            if(i>=0)
            {
                s=s+(a[i--]-'0');
            }
            if(j>=0)
            {
                s=s+(b[j--]-'0');
            }
            res=char(s%2+'0')+res;
            s=s/2;
        }
        return res;
    }
};