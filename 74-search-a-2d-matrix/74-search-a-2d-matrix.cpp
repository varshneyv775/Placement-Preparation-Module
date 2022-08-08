class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
         int j=m[0].size()-1 ;
        int i=0 ;
        
      while(j>=0  && i<m.size())
      {
           
            if(m[i][j]==target)
            {
                return true ;
            }
            else if(m[i][j]>target)
            {
               j-- ;
            }
           else{
               i++ ;
           }
           
        }
        return false ;
    }
};