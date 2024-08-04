bool deadEnd(Node* root, int min=1, int max=INT_MAX)
{

    if (!root)
        return false;

    if (min == max)
        return true;
 
    return deadEnd(root->left, min, root->data - 1) ||
           deadEnd(root->right, root->data + 1, max);
}
