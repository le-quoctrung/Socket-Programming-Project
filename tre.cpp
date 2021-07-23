#include<iostream>

using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};
node *insert(node *t, int x){
	if (t == nullptr){
		node *temp = new node;
		temp->data =x;
		temp->left = nullptr;
		temp->right = nullptr;
		return temp;
	} else{
		if (x < t->data){
			t->left = insert(t->left, x);
		} else{
			t->right = insert(t->right, x);
		}
	}	
}
void printTree(node *t){
	if (t != nullptr){
		printTree(t->left);
		cout << t->data << " " ;
		printTree(t->right);
	}
}
int main(){
	int n, x;
	cin >> n;
	node * t = nullptr;
    cout<< NULL;
    /*
	for (int i = 0; i < n; i++){
		cin >> x;
		t = insert(t, x);
	}
    */
	printTree(t);
}
