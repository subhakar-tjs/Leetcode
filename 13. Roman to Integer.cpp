class Solution {
public:
    int romanToInt(string s) {
        int l=size(s);
        int sum=0,prev=0;
        for(int i=0;i<l;i++)
        {
        char ch=s[i];
            int pos=0;
            switch(ch)
            {
                case 'I':pos=1; break;
                case 'V':pos=5; break;
                case 'X':pos=10; break;
                case 'L':pos=50; break;
                case 'C':pos=100; break;
                case 'D':pos=500; break;
                case 'M':pos=1000; break;
                default:
                    return 0;
                }
            sum=sum+pos;
            if(prev<pos)
            {
                sum=sum-prev*2;
                    }
            prev=pos;
        }
        return sum;
        
    }
};