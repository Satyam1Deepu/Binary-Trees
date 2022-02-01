/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
/*
Time Complexity : N*Height
Height for balanced B Tree is logN
Height for balanced One sided B Tree is N

*/
int height(BinaryTreeNode<int>* root) {
// Base Case :
	if (root == NULL) {
		return 0;
	}
	return 1 + max(height(root->left), height(root->right));
}

int diameter(BinaryTreeNode<int>* root) {
// Base Case :
	if (root == NULL) {
		return 0;
	}

	int option1 = height(root->left) + height(root->right);
	int option2 = diameter(root->left);
	int option3 = diameter(root->right);
	return max(option1, max(option2, option3));
}
