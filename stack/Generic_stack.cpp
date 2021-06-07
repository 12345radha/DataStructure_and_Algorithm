// generic stack
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;


// defining structure and union.
 
typedef struct node{
	union un{
	int x;
	char c;
	float f;
}var;
	int tag;
	struct node *next;
}Node;
Node *head;

//functions of stack.
void push()
{
	Node *ptr;
	ptr=(Node*)malloc(sizeof(Node));
	cout<<"Enter the tag number:";
	cin>>ptr->tag;
	cout<<"\n Enter element according to tag :";
	
	switch(ptr->tag)
	{
		case 0:
			cin>>(ptr->var).x;
			break;
		case 1:
			cin>>(ptr->var).c;
			break;
		case 2:
			cin>>(ptr->var).f;
			break;
		default :
			printf(" Invalid tag value\n");
			break;
	}
    ptr->next=head;
    head=ptr;
}
void pop()
{
	Node *ptr;
	ptr=head;
	if(head==NULL)
	{
		cout<<"Stack is empty\n";
		return;
	}
	cout<<"Popped element:";
	switch(ptr->tag)
	{
		case 0:
			cout<<(ptr->var).x;
			break;
		case 1:
			cout<<(ptr->var).c;
			break;
		case 2:
			cout<<(ptr->var).f;
			break;
		default :
			cout<<"\n Invalid tag value";
			break;
	}
	
}
void peek()
{
	Node *ptr;
	ptr=head;
	if(head==NULL)
	{
		cout<<"Stack is empty\n";
		return;
	}
    while(ptr!=NULL)
    {
    	switch(ptr->tag)
	{
		case 0:
			cout<<(ptr->var).x<<" ";
			break;
		case 1:
			cout<<(ptr->var).c<<" ";
			break;
		case 2:
			cout<<(ptr->var).f<<" ";
			break;
		default :
			cout<<"\n Invalid tag value";
			break;
	}
    	ptr=ptr->next;
	}
	cout<<endl;
}
int main()
{
	int op;
	do{
		cout<<"\n...........Menu.........\n";
		cout<<"\n1)push()\n2)pop()\n3)peek) 0 for exit\n";
		cout<<"Enter option:";
		cin>>op;
		switch(op)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
		    break;
			case 0:cout<<"BYE \n";
			break;
			default:
				cout<<"Invalid option\n";
		}
	}while(op!=0);
}
