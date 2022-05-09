#include<Stdio.h>
#include<Stdlib.h>
struct node{
	int data;
	struct node* lchild;
	struct node* rchild;
};
struct node* root=NULL;

struct node* create(struct node* p,int key){
	struct node* newnode;
	if( p==NULL ){
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=key;
		newnode->lchild=newnode->rchild=NULL;
		return newnode;
	}
	else if( key < p->data ){
		p->lchild=create( p->lchild,key);
	}
	else if( key > p->data ){
		p->rchild=create( p->rchild ,key);
	}
	return p;
}
struct node* search( struct node* p, int key){
	if( p== NULL ){
		return 0;
	}
	else if( key == p->data ){
		return p;
	}
	else if( key < p->data ){
		return  search( p->lchild,key );
	}
	else if( key > p->data ){
		return search( p->rchild,key );
	}
}
void preorder( struct node* p ){
	if( p==NULL ){
		return;
	}
		printf("-------->%d,",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	
}
void inorder( struct node* p ){
	if( p==NULL ){
         return ;
	}
	else{
		inorder(p->lchild);
		printf("-------->%d,",p->data);
		inorder(p->rchild);
	}
}
void postorder( struct node* p ){
	if( p==NULL ){
		return;
	}
	else{
		postorder(p->lchild);
		postorder(p->rchild);
		printf("-------->%d,",p->data);
	}
	
}
struct node* findmin(struct node* root){
	if( root==NULL ){
		printf("\nBST IS EMPTY\n");
	}
	else{
		while( root->lchild!=NULL ){
			root=root->lchild;
		}
		return root;
	}
}
//.............................................................................................................
struct node*deleteval( struct node* root , int val )
{
	struct node* temp;
	if( root ==NULL ){
		return root;
	}
	else if( val < root->data ){
		root->lchild=deleteval( root->lchild,val);
	}
	else if( val > root->data ){
		root->rchild=deleteval( root->rchild,val);
	}
	else{
		if( root->lchild==NULL && root->rchild==NULL ){
			root=NULL;
			free(root);
		}
		else if( root->lchild==NULL ){
			temp=root;
			root=root->rchild;
			free(temp);
			return root; //  return function uses to delete root value in skew tree
		}
		else if( root->rchild==NULL ){
			temp=root;
			root=root->lchild;
			free(temp);
			return root;
		}
		else if( root->lchild!=NULL && root->rchild!=NULL ){
			temp=findmin( root->rchild);
			root->data=temp->data;
			root->rchild=deleteval( root->rchild,temp->data );
			return root;
		}
	}
	return root;
}
int main(){
	printf("   ----------------------------------Binary Tree Implementation------------------------------\n\n");
	int ch;
    struct node* root=NULL;
	while(1){
		printf("\n\t1.Create\t2.Search Element\t3.Pre-Order\t4.In-order\t5.Post-Order\t6.Delete Element\t7.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
			       	int key;
                 	printf("\nEnter the Element to insert:");
	                scanf("%d",&key);
	                root=create(root,key);
			break;
			case 2: int k;
	                printf("Enter Element to search:");
	                scanf("%d",&k);
			        struct node *p;
			        p=search(root,k);
			        printf("%d found ",p->data);
					break;
			case 3: preorder(root);
			break;
			case 4: inorder(root);
			break;
			case 5: postorder(root);
			break;
			case 6: int val;
			        printf("Enter the element to delete:");
			        scanf("%d",&val);
			        root=deleteval(root,val);
			        break;
			case 7:exit(1);
			        break;        
			default:
				    printf("Invalid choice\n");
		}
	}
	
}