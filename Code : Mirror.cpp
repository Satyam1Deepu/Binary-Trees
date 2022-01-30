/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
/*श्री राम जानकी बैठे हैं मेरे सीने में*/
void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Base Case :
    if(root==NULL)
        return ;
    //
    BinaryTreeNode<int> *temp = root->left;
    root->left = root->right;
    root->right = temp;
    //
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
    
}
