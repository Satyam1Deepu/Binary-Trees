/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
/*श्री राम जानकी बैठे हैं मेरे सीने में*/
#include<queue>
void printLevelWise(BinaryTreeNode<int> *root) {
	// Base case :
    if(root==NULL){
        return;
    }
     // Created Queue Which stores address of Pending Nodes to be printed LevelWise :
    queue<BinaryTreeNode<int>*> pendingNodes;
  // Pushed Address of nodes in Queue :
    
    pendingNodes.push(root);
    
    while(pendingNodes.size() != 0){
        // Created Front pointer to pick node for Level Wise printing :
     BinaryTreeNode<int>* front = pendingNodes.front();
        cout<<front->data<<":";
        // After storing in Front : pop out from Queue
     pendingNodes.pop() ;
        // Check If there is left node or not & if it is , Push in Queue
    if(front->left != NULL){
        cout<<"L:"<<front->left->data;
        pendingNodes.push(front->left);
    }else{
        cout<<"L:-1";
    }
       // Check If there is right node or not & if it is , Push in Queue
    if(front->right != NULL){
        cout<<",R:"<<front->right->data;
        pendingNodes.push(front->right);
    }else{
       cout<<",R:-1";
    }
        cout<<endl;
    } 
}
