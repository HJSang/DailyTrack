/* Given a Binary Search Tree, find the second largest element.*/
/*The second largest element is second last element in inorder traversal
second element in reverse inorder traversal
traverse given Binary Search Tree in reverse inorder
keep track of counts of nodes visited.
Once the count becomes 2, we print the node.
*/

#include<iostream>
using namespace std;

// define BST
struct Node 
{
	int key;
	Node *left, *right;
};

// New Node
Node *newNode(int data)
{
	Node *temp = new Node;
	temp->key = data;
	temp->left = temp->right = NULL;
	return temp;
}

// search 2nd largest number
void second_largest(Node *root, int &c)
{
	if(root == NULL || c>=2)
	{
		return;
	}
	second_largest(root->right, c);
	c++;
	if(c==2)
	{
		cout<< "2nd largest element is " << root->key <<endl;
		return;
	}
	second_largest(root->right,c);
}

void second_lagest_node(Node * root)
{
	int c =0;
	second_largest(root,c);
}


Node * insert(Node* node, int key)
{
	if(node == NULL)
	{
		return newNode(key);
	}
	if(key < node->key)
	{
		node->left = insert(node->left, key);
	}
	else if(key > node->key)
	{
		node->right = insert(node->right,key);
	}
	return node;
}



// Driver Program to test above functions 
int main() 
{ 
    /* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */
    Node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
  
    second_lagest_node(root); 
  
    return 0; 
} 