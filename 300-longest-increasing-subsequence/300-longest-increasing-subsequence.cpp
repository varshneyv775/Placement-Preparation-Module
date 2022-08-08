class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int list[n];
        list[0]=1;
        for(int i=0;i<n;i++){
            list[i]=1;
            for(int j=0;j<i;j++)
                if(nums[i]>nums[j]&& list[i]<list[j]+1)
                    list[i]=list[j]+1;
        }
        return *max_element(list,list+n);
        
    }
};