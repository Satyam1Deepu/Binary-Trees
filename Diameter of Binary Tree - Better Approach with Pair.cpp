/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/

int height(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + max(height(root->left), height(root->right));
}
// 
pair<int, int> heightDiameter(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		pair<int, int> p;
		p.first = 0;
		p.second = 0;
		return p;
	}
	pair<int, int> leftAns = heightDiameter(root->left);
	pair<int,int> rightAns = heightDiameter(root->right);
	int ld = leftAns.second;
	int lh = leftAns.first;
	int rd = rightAns.second;
	int rh = rightAns.first;

	int height = 1 + max(lh, rh);
	int diameter = max(lh + rh, max(ld, rd));
	pair<int, int> p;
	p.first = height;
	p.second = diameter;
	return p;
}
