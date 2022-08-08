class Solution {
public:
    void sortColors(vector<int>& nums) {
        multiset<int> s ; 
    vector<int> ans; 
    
    for(auto ch:nums){
    s.insert(ch) ;     
    }
    
    nums.clear() ;

   for(auto  ch:s){
    nums.push_back(ch); 
   }  
    }
};