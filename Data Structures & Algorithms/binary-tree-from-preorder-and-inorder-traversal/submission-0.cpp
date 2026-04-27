class Solution {
public:
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int st, int end, int& idx){
        
        if(st > end) return NULL;

        int val = preorder[idx];   
        int i;
        for(i = st; i <= end; i++){
            if(inorder[i] == val) break;
        }
        idx++;
        
        TreeNode* root = new TreeNode(val);  // correct usage

        root->left  = solve(preorder, inorder, st, i - 1, idx);  
        root->right = solve(preorder, inorder, i + 1, end, idx);

        return root; 
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int idx = 0;

        return solve(preorder, inorder, 0, n - 1, idx);  // fixed typo
    }
};