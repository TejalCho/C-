/*	LinkedList Operations implemented
	# insertNode() - Inserts Node at the end of the LinkedList
	# insertfirst() - Inserts Node at the first position of the LinkedList
	# deletefirst() - Deletes the first Node
	# deletelast() - Deletes the last node
	# lenghthofListIterative() - Uses Iterative method to counts the number of nodes
	# lenghthofListRecursive() - Uses Recursive method to counts the number of nodes
*/
#include<iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

Node *root = NULL;

Node* createNode(int data){
	Node *newnode = new Node;
	newnode -> data = data;
	newnode->next=NULL;

	return newnode;
}

void insertNode(int data){
	if(root == NULL){
		root=createNode(data);	
	}
	else{
		Node *temp = root;
		while(temp->next!=NULL)	{
			temp = temp->next;
		} 
		temp->next = createNode(data);
	}
}

void insertfirst(int data){
	if(root == NULL)
	{
		root = createNode(data);
	}	
	else{
		Node* temp = root;
		root = createNode(data);
		root -> next = temp;
	}
}

void deletelast(){
	Node* curr = root;
	Node* prev = NULL;
	while(curr->next != NULL){
		prev = curr;
		curr = curr->next;
	}
	prev->next = NULL;
	delete(curr);
}

void deletefirst(){
	Node* temp = root;
	root = temp->next;
	delete(temp);
}

void printNode(){
	Node *temp = root;
	while(temp != NULL){
		cout << temp->data << "---->";
		temp=temp->next;
	}
	cout << endl;
}

int lenghthofListRecursive(Node* temp){
	if(temp == NULL)	
		return 0;

	else
		return 1 + lenghthofListRecursive(temp -> next);
}

int lenghthofListIterative(Node *temp){
	int count = 0;
	while(temp!=NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

int main(){
	
	int count, countItr;
	int i=10;
	for(i=10;i<=100;i=i+10){
	insertNode(i);
	}
	cout << "The Linked List after inserting all nodes - "<<endl;
	count  = lenghthofListRecursive(root); 
	printNode();
	cout << "The list contains "<<count << " nodes"<<endl;
	insertfirst(110);
	cout << endl<< "The Linked List after inserting 110 as the first node- "<<endl;
	printNode();
	countItr  = lenghthofListIterative(root);
	cout << "The list contains "<<countItr << " nodes"<<endl;
	deletelast();
	cout <<endl <<"The Linked List after deleting last node- "<<endl;
	printNode();
	deletefirst();
	cout << endl<< "The Linked List after deleting first node- "<<endl;
	printNode();
	return 0;
}
