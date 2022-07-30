class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     int n= nums.size();
    int n1 =-1;
    int n2 = n-1;
    
    
    for(int i=n-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            n1 = i;
            break;
        }
    }
    if(n1!=-1)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]>nums[n1])
            {
                n2 = i;
                break;
            }
        }
        swap(nums[n1],nums[n2]);
    }
    
    reverse(nums.begin()+n1+1,nums.end());
    cout<<n1<<n2<<endl;   
    }
};