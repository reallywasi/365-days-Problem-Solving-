
#include <iostream>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isComplete(TreeNode* root) {
    if (root == nullptr) return true;

    queue<TreeNode*> q;
    q.push(root);

    bool flag = false; // to track if we've encountered a non-full node
    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();

        if (curr == nullptr) {
            flag = true;
            continue;
        }

        if (flag) return false; // if we've already encountered a non-full node

        q.push(curr->left);
        q.push(curr->right);
    }

    return true;
}

// Example usage:
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    cout << "Is the binary tree complete? " << (isComplete(root) ? "Yes" : "No") << endl;

    return 0;
}

