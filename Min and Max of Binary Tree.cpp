/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
/*श्री राम जानकी बैठे हैं मेरे सीने में*/
/*
	The first value of the pair must be the minimum value in the tree and 
	the second value of the pair must be the maximum value in the tree
*/
#include<bits/stdc++.h>
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	// Base Case :
    if(root==NULL){
    pair<int,int> p(INT_MAX,INT_MIN);
        return p;
    }
    // Induction Hypothesis :
 	pair<int , int > answer1 = getMinAndMax(root->left);
    pair<int , int > answer2 = getMinAndMax(root->right);
    // Induction Step :
    pair<int , int > ans;
    ans.first = min(root->data, min(answer1.first, answer2.first));
    ans.second = max(root->data, max(answer1.second, answer2.second));
    
    return ans;
        
}
