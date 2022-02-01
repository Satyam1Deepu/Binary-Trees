/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
void preOrder(BinaryTreeNode<int> *root) {
	// Base Case :
    if(root==NULL){
        return ; 
    }
    // Pre-Order : node  : L : R
    cout<<root->data<<" ";
    // Recursive call : 
    preOrder(root->left);
    preOrder(root->right);
}
