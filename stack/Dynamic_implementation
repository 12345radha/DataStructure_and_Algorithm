//2)Implement stack in Linked List with following functions (with return node structure):
//i. Top()   ii.Push() 		iii. Pop()  iv.Size()
#include<bits/stdc++.h>
using namespace std;
struct node{
	int x;
	struct node *next;
}*head,*temp;
void push()
{
  struct node *ptr=NULL;
  ptr=(struct node*)malloc(sizeof(struct node));
  cout<<"Enter the Element:\n";
  cin>>ptr->x;
  ptr->next=head;
  head=ptr;
}
void pop()
{
	struct node *tmp;
	tmp=head;
	if(head==NULL)
    {
    	cout<<"Stack is empty"<<endl;
    	return;
	}
	cout<<"Pop Element:"<<head->x;
	head=head->next;
	free(tmp);
  cout<<endl;
}
void peep()
{
	struct node *ptr;
	ptr=head;
	if(head==NULL)
	{
		cout<<"Stack is empty\n";
		return;
	}
    while(ptr!=NULL)
    {
    	cout<<ptr->x<<" ";
    	ptr=ptr->next;
	}
	cout<<endl;
}
void size()
{
	struct node *tmp;
	int count=0;
	if(head==NULL)
	{
		cout<<"Stack is empty\n";
		return;
	}
	tmp=head;
	while(tmp!=NULL)
	{
		cout<<tmp->x<<" ";
		tmp=tmp->next;
		count++;
	}
	cout<<endl;
	cout<<"size of stack is "<<count<<endl;
}
int main()
{
	int op;
	do{
		cout<<"...........Menu.........\n";
		cout<<"\n1)push()\n 2)pop()\n 3)top() \n4)size()\n5) 0 for exit\n";
		cout<<"Enter option:";
		cin>>op;
		switch(op)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peep();
			break;
			case 4:size();
			break;
			case 0:cout<<"BYE \n";
			break;
			default:
				cout<<"Invalid option\n";
		}
	}while(op!=0);
}
