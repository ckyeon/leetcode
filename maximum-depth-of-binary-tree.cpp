class Solution {
public:
    int maxDepth(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        int maxDepth = 1;
        getMaxDepth(root, 1, &maxDepth);
        return maxDepth;
    }

private:
    void getMaxDepth(TreeNode *tree, int depth, int *maxDepth) {
        if (tree->left != nullptr) {
            getMaxDepth(tree->left, depth + 1, maxDepth);
        }

        if (tree->right != nullptr) {
            getMaxDepth(tree->right, depth + 1, maxDepth);
        }

        if (depth > *maxDepth) {
            *maxDepth = depth;
        }
    }
};