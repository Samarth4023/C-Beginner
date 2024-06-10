/*
A Dictionary stores keywords & its meanings. Provide facility for adding new keywords. 
Provide facility to display whole data sorted in ascending/ Descending order 	 
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Tree
  {
     typedef struct node
	{
		char key[10];
		char meaning[10];
		struct node *left;
		struct node * right;
	}btree;
    public:
      btree *New,*root;
      Tree();
      void create();
      void insert(btree *root,btree *New);
	 void inorder();
	 void inorder_rec(btree *root);
	 void postorder();
	 void postorder_rec(btree *root);
  };
Tree::Tree()
  {
    root=NULL;
  }
void Tree::inorder()
  {
	inorder_rec(root);
  }
void Tree::inorder_rec(btree *root)
  {
	if(root!=NULL)
	{
		inorder_rec(root->left);
		cout<<"\n\t"<<root->key<<"\t"<<root->meaning;
		inorder_rec(root->right);
     }
  }
void Tree::postorder()
  {
	postorder_rec(root);
  }
void Tree::postorder_rec(btree *root)
  {
	if(root!=NULL)
	{
		
		postorder_rec(root->right);
		cout<<"\n\t"<<root->key<<"\t"<<root->meaning;
		postorder_rec(root->left);
     }
  }
void Tree::create()
  {
     New=new btree;
     New->left=New->right=NULL;
     cout<<"\n\tEnter the Keyword: ";
     cin>>New->key;
     cout<<"\n\tEnter the Meaning of "<<New->key<<" : ";
     cin>>New->meaning;
     if(root==NULL)
     	{
		root=New;
	}
     else
        {
		insert(root,New);
        }
   }
void Tree::insert(btree *root,btree *New)
  {
    
     if(strcmp(root->key,New->key)>0)
        {
	    if(root->left==NULL)
		root->left=New;
         else
          insert(root->left,New);
	   }
     else
        {
	    if(root->right==NULL)
		 root->right=New;
          else 
           insert(root->right,New);
	   }	
  }
 
 main()
  {
     Tree tr;
     int ch;
	char ans;
     do
       {
	   cout<<"\n\t***** BST Operations *****";
	   cout<<"\n\t1. Create\n\t2. Display\n\t3. Exit";
	    cout<<"\n\t.....Enter Your Choice: ";
	    cin>>ch;
	    switch(ch)
 		{
			case 1:
				
				do
				{
						tr.create();
						cout<<"......Do You Want To Continue: ";
						cin>>ans;
				}while(ans=='y'||ans=='Y');
				break;
			case 2: cout<<"\n\t\t1. Ascending\n\t\t2. Descending\n\t\t.....Enter Your Choice: ";
				cin>>ch;
				cout<<"\n\tKeyword\tMeaning";

				switch(ch)
				{
					case 1:
						tr.inorder();
						break;
					case 2:
						tr.postorder();
						break;
				}
				break;
			case 3:
				break;
  		}	
	cout<<"\n\t\t..... Do You Want to Continue: ";
	cin>>ans;
	}while(ans=='y'||ans=='Y');
  }
	