/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
void postOrder(BinaryTreeNode<int> *root) {
	// Base Case :
    if(root==NULL){
        return ; 
    }
    // Post-Order : node  : L : R
    // Recursive call : 
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
