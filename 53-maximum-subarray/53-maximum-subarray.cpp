class Solution {
public:
    int maxSubArray(vector<int>& arr) {
         int ans = arr[0], sum = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            sum = max(sum + arr[i], arr[i]);
            ans = max(ans, sum);
        }
        return ans;
    }
};