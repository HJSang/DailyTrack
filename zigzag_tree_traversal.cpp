/* ZigZag Tree Traversal */
/* This problem can be solved using two stacks.
Assume the stacks are current: currentlevel and nextlevel.
Also need a variable to keep track of the current level order.
Pop from the current level stack and print the nodes value.
Whenever the current level order is from left to right,
push the nodes left child,
then its right child to the stack nextlevel.
Since a stack is a LIFO(Last-In-First_out) structure,
next time when nodes are popped off nextlevel,
it will be in the reverse order.
*/
#include<iostream>
#include<stack>
using namespace std;

// define binary tree
struct Node {
	int data;
	struct Node *left, *right;
};

// define new node
struct Node* newNode(int data)
{
	struct Node *node = new struct Node;
	node->data = data;
	node->left = node->right = NULL;
	return node;
};

// zigzag traversal 
void zizagtraversal(struct Node *root)
{
	// if null then return 
	if(!root)
		return;
	// declare two stacks
	stack<struct Node*> currentlevel;
	stack<struct Node*> nextlevel;
	//push the root
	currentlevel.push(root);

	//check if stack is empty
	bool lefttoright =true;
	while(!currentlevel.empty())
	{
		//pop out of stack
		struct Node *temp = currentlevel.top();
		currentlevel.pop();
		if(temp)
		{
			cout<< temp->data <<" ";
			//store the data according to current order
			if(lefttoright)
			{
				if(temp->left)
					nextlevel.push(temp->left);
				if(temp->right)
					nextlevel.push(temp->right);
			}
			else
			{
				if(temp->right)
					nextlevel.push(temp->right);
				if(temp->left)
					nextlevel.push(temp->left);
			}
		}
		if(currentlevel.empty())
		{
			lefttoright = !lefttoright;
			swap(currentlevel, nextlevel);
		}
	}
}


int main() 
{ 
	// create tree 
	struct Node* root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(7); 
	root->left->right = newNode(6); 
	root->right->left = newNode(5); 
	root->right->right = newNode(4); 
	cout << "ZigZag Order traversal of binary tree is \n"; 

	zizagtraversal(root); 

	return 0; 
} 









