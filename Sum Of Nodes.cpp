/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
/*श्री राम जानकी बैठे हैं मेरे सीने में*/
int getSum(BinaryTreeNode<int>* root) {
    // Base Case :
    if(root==NULL){
        return 0;
    }
    // Induction Hypothesis :
    int ans = getSum(root->left) + getSum(root->right);
    return ans + root->data;
}
