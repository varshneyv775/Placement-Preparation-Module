class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int line=1;line<=numRows;line++){
        int c=1;
        vector<int> v;
        for (int i=1;i<=line;i++){
            v.push_back(c);
            c*=(line-i);
            c/=i;
        }
        ans.push_back(v);
    }
    return ans; 
    }
};