/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
/*श्री राम जानकी बैठे हैं मेरे सीने में*/
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
       //Base Case :
    if(root==NULL){
        return false;
    }
    // Small Calculation :
    if(root->data  ==x){
        return true;
}
    // Recursive Call :
        bool ans1 ;
      ans1 =  isNodePresent(root->left , x );
      bool ans2;
    ans2 =  isNodePresent(root->right , x );
    return (ans1|| ans2);
}
