class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<pair<int,int>> p;

		for(int i = 0;i<nums.size();i++) p.push_back({nums[i][0],nums[i][1]});
		sort(p.begin(),p.end());
		vector<vector<int>> ans = {{p[0].first,p[0].second}};
		int j = 0;
		for(int i = 1;i<p.size();i++){
			if(ans[j][1]>=p[i].first) {
				ans[j][1] = max(ans[j][1],p[i].second);
			}
			else{
				ans.push_back({p[i].first,p[i].second});
				j++;
			}
		}
		return ans;
    }
};