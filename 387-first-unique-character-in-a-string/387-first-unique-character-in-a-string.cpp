class Solution {
public:
    int firstUniqChar(string s) {
      int n=s.length();
        vector<int> freq(26,0);
        for(int i=0;s[i]!='\0';i++)
            freq[s[i]-'a']+=1;
        
        for(int i=0;s[i]!='\0';i++)
            if(freq[s[i]-'a']==1)return i;
        
        
        return -1;
        
    }
};