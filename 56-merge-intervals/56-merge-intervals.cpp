class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>> ans;

sort(arr.begin(),arr.end());
int n=arr.size();
for(int i=0;i<n;i++){
if(ans.empty()){
    ans.push_back(arr[i]);
}
else{
    vector<int> &v=ans.back();
    int y=v[1];
    if(arr[i][0]<=y){
        v[1]=max(y,arr[i][1]);
    }
    else{
        ans.push_back(arr[i]);
    }
}
}
return ans;

    }
};