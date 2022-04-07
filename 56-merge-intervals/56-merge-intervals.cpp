class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
       sort(a.begin(),a.end());
        vector<vector<int>> merged;
        for(int i=0;i<a.size();i++){
            if(merged.empty()||merged.back()[1]<a[i][0])
            {
                vector<int> v;
                v={a[i][0],a[i][1]};
                merged.push_back(v);
            }
            else
                merged.back()[1]=max(merged.back()[1],a[i][1]);
        }
        return merged;
    }
};