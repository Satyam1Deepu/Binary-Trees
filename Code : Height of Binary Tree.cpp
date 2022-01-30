/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
/*श्री राम जानकी बैठे हैं मेरे सीने में*/
int height(BinaryTreeNode<int>* root ) {
    // Base Case :
    if(root==NULL){
        return 0;
    }
    int ans =0 ;
    
    // Recursive Call :
    int subHeight1 = height(root->left);
    int subHeight2 = height(root->right);

 // small Calculation :
   if (subHeight1 > ans) 
       ans = subHeight1;
    if(subHeight2 > ans)
       ans  = subHeight2;
    return ans+1;
}
