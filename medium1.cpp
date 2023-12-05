#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to insert a node into a BST
TreeNode *insert(TreeNode *root, int value)
{
    if (root == nullptr)
    {
        return new TreeNode(value);
    }

    if (value < root->val)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->val)
    {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to build a binary search tree from user input
TreeNode *buildBST()
{
    TreeNode *root = nullptr;
    int n;
    // Enter the number of nodes in the BST
    cin >> n;

    // Enter the values of the nodes, separated by spaces (use '-1' for null nodes)
    cout<<"Input"<<endl;
    for (int i = 0; i < n; ++i)
    {
        string nodeValue;
        cin >> nodeValue;

        if (nodeValue == "null")
        {
            root = insert(root, numeric_limits<int>::min()); // Use a sentinel value for null
        }
        else
        {
            int value = stoi(nodeValue);
            root = insert(root, value);
        }
    }

    return root;
}

// Function to find the lowest common ancestor (LCA) in a BST
TreeNode * lca(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (!root)
    {
        return nullptr;
    }

    if (p->val < root->val && q->val < root->val)
    {
        return  lca(root->left, p, q);
    }
    else if (p->val > root->val && q->val > root->val)
    {
        return  lca(root->right, p, q);
    }
    else
    {
        return root;
    }
}

int main()
{
    // Build the binary search tree
    TreeNode *root = buildBST();

    // Input the values of nodes to find their lowest common ancestor (LCA)
    int val1, val2;
    cout << "p: ";
    cin >> val1 ;
    cout << "q: ";
    cin >> val2 ;

    TreeNode *p = new TreeNode(val1);
    TreeNode *q = new TreeNode(val2);

    // Find the LCA of nodes
    TreeNode *lca =  lca(root, p, q);

    if (lca)
    {
        cout << "Output: "<< lca->val << endl;
    }
    else
    {
        cout << "No common ancestor found." << endl;
    }

    // Clean up: free the allocated memory
    delete root;

    return 0;
}
