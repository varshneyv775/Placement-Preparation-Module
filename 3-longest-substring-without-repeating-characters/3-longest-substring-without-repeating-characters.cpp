class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int ans =0;
    unordered_map<char, int> umap;
    int start =0;
    for(int i =0; i<s.size(); i++){
        if(umap.find(s[i]) == umap.end()){
            umap[s[i]] = i;
        }
        else{
            start = max(start,umap[s[i]]+1);
            umap[s[i]] = i;
        }
        
        ans = max(ans, i-start+1);
    }
    
   return ans;   
    }
};