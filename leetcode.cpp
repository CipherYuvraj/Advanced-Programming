#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
void inorder(TreeNode* root, vector<int> &vals) {
    if (!root) return;
    inorder(root->left, vals);
    vals.push_back(root->val);
    inorder(root->right, vals);
}



int getPredecessor(stack<TreeNode*>&pre){
    TreeNode*node = pre.top();
    pre.pop();
    int value = node->val;

    node = node->left;
    while(node){
        pre.push(node);
        node=node->right;
    }
    return value;

}
int getSuccessor(stack<TreeNode*>&suc){
    TreeNode*node = suc.top();
    suc.pop();
    int value = node->val;

    node = node->right;
    while(node){
        suc.push(node);
        node=node->left;
    }
    return value;

}
vector<int> closestKValues(TreeNode* node, double target, int k) {
    stack<TreeNode*>pre,suc;
    TreeNode*root= node;
    while(root){
        if(root->val<=target){
            pre.push(root);
            root = root->right;
        }else{
            suc.push(root);
            root = root->left;
        }
    }
    vector<int>result;
    for(int i = 0;i<k;i++){
        if(suc.empty()){
            result.push_back(getPredecessor(pre));
        }else if(pre.empty()){
            result.push_back(getSuccessor(suc));
        }else{
            double pre_diff = fabs(double(pre.top()->val-target));
            double suc_diff = fabs(double(suc.top()->val-target));
            if(pre_diff<suc_diff){
                result.push_back(getPredecessor(pre));

            }else{
                result.push_back(getSuccessor(suc));
            }



        }
    }
    return result;

}






TreeNode* insertLevelOrder(vector<int> arr, int i) {
    if (i >= arr.size() || arr[i] == -1) return nullptr;
    TreeNode* root = new TreeNode(arr[i]);
    root->left = insertLevelOrder(arr, 2 * i + 1);
    root->right = insertLevelOrder(arr, 2 * i + 2);
    return root;
}

int main() {
    vector<int> arr = {5,3,6,2,4};
    double target = 3.714286;
    int k = 2;

    // Create BST
    TreeNode* root = insertLevelOrder(arr, 0);

    // Get closest K values
    vector<int> result = closestKValues(root, target, k);

    // Output
    cout << "Closest " << k << " values to " << target << ": ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
