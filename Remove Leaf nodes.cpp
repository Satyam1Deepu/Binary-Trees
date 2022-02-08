/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
/*श्री राम जानकी बैठे हैं मेरे सीने में*/
BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    // Base Case :
    if(root==NULL){
        return root;
    }
   // Induction Step : Pre- Order Mode 
    if(root->left ==NULL && root->right ==NULL){
    	delete root;
        return NULL;
    }
   
    
    // Induction Hypothesis : (Calling On both sides of b tree for removing leaf node)
    BinaryTreeNode<int>* lroot= removeLeafNodes(root->left);
    BinaryTreeNode<int>* rroot= removeLeafNodes(root->right);
     // Induction Step :(Connecting Both Sub-Trees ) :
    root->left = lroot;
    root->right = rroot;
    return root;
    /*
    
    	1
       / \
	  N    N

    */
    
        
    
}
