class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool a=false;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]<=target && matrix[i][matrix[i].size()-1]>=target){
                for(int j=0;j<matrix[i].size();j++){
                    if(matrix[i][j]==target){
                        a=true;
                        break;
                    }
                }
            }
        }
        return a;
    }
};