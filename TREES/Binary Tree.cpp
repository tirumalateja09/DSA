#include<Stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* create(){   // returning newnode address 
	int x;
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Element to Node or -1 to (no Node):");
	scanf("%d",&x);
	if(x==-1){
		return 0;
	}
	else{
		newnode->data=x;
		printf("Enter data for...%d->Left Node\n");
		newnode->left=create();
		printf("Enter data for ...%d->Right Node\n");
		newnode->right=create();
		return newnode;
	}
}
void inorder( struct node* root ){   // left root right
	if( root==0 ){
		return ;
	}
	else{
		inorder( root->left );
		printf("------>%d,",root->data);
		inorder( root->right );
	}
}
void preorder( struct node* root ){   // root left right 
	if( root==0 ){
		return ;
	}
	else{
		printf("------->%d,",root->data);
		preorder( root->left );
		preorder( root->right );
	}
}
void postorder( struct node* root ){    // left right root
	if( root==0 ){
		return ;
	}
	else{
		postorder( root->left );
		postorder( root->right );
		printf("--------->%d",root->data);
	}
}
int main(){
	printf("\t\t----------------------Binary Tree Implementation-----------------------\n");
	int ch;
	struct node* root;
	while(1){
		printf("\n\t\t1.Create\t2.Inorder\t3.Preorder\t4.Postorder\t5.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:root=create();
			break;
			case 2:printf("Inorder Series is\n");
			       inorder(root);
			break;
			case 3:printf("Preorder Series is\n");
			       preorder(root);
			break;
			case 4: printf("Post order Series is\n");
			        postorder(root);
			break;
			case 5:exit(1);
			break;
			default:
				printf("Invalid choice!");
			
		}
		
	}
}
