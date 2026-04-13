class Solution {
public:
    bool searchInRow(vector<vector<int>>& matrix, int target, int row){
        int n = matrix[0].size();

        int st = 0;
        int end = n-1;

        while(st <= end){
            int mid = st + (end - st) / 2;

            if(matrix[row][mid] == target){
                return true;
            }
            else if(matrix[row][mid] > target){
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int sr = 0;
        int er = m-1;

        while(sr <= er){
            int mid = sr + (er - sr) / 2;

            if(target >= matrix[mid][0] && target <= matrix[mid][n-1]){
                // found the row => BS on this row
                return searchInRow(matrix, target, mid);
            }
            else if(target <= matrix[mid][0]){
                // go up => left in term of BS
                er = mid - 1;
            }
            else {
                // go down => right in term of BS
                sr = mid + 1;
            }
        }
        return 0;
    }
};
