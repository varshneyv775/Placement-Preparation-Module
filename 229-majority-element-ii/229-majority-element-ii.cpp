class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
           vector<int> ans;
        int num1=-1;
        int num2=-2;
        
        int c1=0;
        int c2=0;
        
        for(auto el: nums){
            if(el==num1) c1++;
            else if(el==num2) c2++;
            else if(c1==0){
                num1=el;
                c1++;
            }else if(c2==0){
                num2=el;
                c2++;
            }else{
                c1--;
                c2--;
            }
        }
        
        c1=c2=0;
        for(auto el: nums){
            if(num1==el) c1++;
            if(num2==el) c2++;
        }
        if(c1>nums.size()/3)
            ans.push_back(num1);
        if(c2>nums.size()/3)
            ans.push_back(num2);
        
        return ans;
    }
};