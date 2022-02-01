/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
// We can make tree only when node data is different in entire Binary Tree :
BinaryTreeNode<int>* buildTreeHelper(int * pre  , int * in, int preS , int preE , int inS ,int inE){
    // Edge Case :
      if(inS > inE){
          return NULL;
      }
    // Make root data generic so that it will work for all instance of recursive call :
    int rootData = pre[preS];
    int rootIndex = -1;
    // To find RootIndex :
    for(int i = inS ; i <= inE;i++){
        if(in[i]==rootData)
        rootIndex =  i;
        break;
    }
    // Main Catch Of Problem :
    int lPreS = preS + 1;
    int lInE = rootIndex - 1;
    int lInS = inS;
    int lPreE = lInE - lInS + lPreS ;
   
  
    int rPreS = lPreE + 1 ;
    int rPreE = preE;
    int rInS = rootIndex + 1;
    int rInE = inE;
    
    // Create Node & initialized data :
    BinaryTreeNode<int> * root = new BinaryTreeNode<int>(rootData);
    // Recursive Call : for making left & right node then it will bind both node with root node :
    // Begin with left Node :
    root->left = buildTreeHelper( pre, in , lPreS , lPreE , lInS , lInE );
    // Begin with left Node :
    root->right = buildTreeHelper( pre, in , rPreS , rPreE , rInS , rInE );
    // At the End return root to bind with parent node :
    return root;
}
BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    
    return buildTreeHelper(preorder, inorder , 0 , preLength - 1 , 0 , inLength - 1);
}
