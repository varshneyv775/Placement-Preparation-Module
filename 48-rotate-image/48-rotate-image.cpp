class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    int left,right;
    for(int i=0;i<n;i++){
        left=0;
        right=n-1;
        while(left < right){
            swap(matrix[i][left],matrix[i][right]);
            left++;
            right--;
        }
    }
    }
};