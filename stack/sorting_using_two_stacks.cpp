//sorting using two stack
#include<bits/stdc++.h>
#define max 20
using namespace std;

int stk1[max],stk2[max],top1=-1,top2=-1;
int pop1();
int pop2();
void push1(int x);
void push2(int x);
void display();
void sort_function(int *b,int n);

int main()
{
	int a[max],i,n;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	cout<<"Enter the Elements"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort_function(a,n);
}
void push1(int x)
{
	top1++;
	stk1[top1]=x;
	//cout<<"Push 1 element"<<x<<endl;
}
void push2(int x)
{
	top2++;
	stk2[top2]=x;
	//cout<<"Push 2 element"<<x<<endl;
}
int pop1()
{
	int y;
	y=stk1[top1];
	top1--;
	//	cout<<"Pop 1 element"<<y<<endl;
	return y;
}
int pop2()
{
	int y;
	y=stk2[top2];
	top2--;
	//cout<<"Pop 2 element"<<y<<endl;
	return y;
}
void display()
{
	cout<<"After Sorting"<<endl;
	int i;
while(top1!=-1)
{
	cout<<stk1[top1--]<<" ";
}
	cout<<endl;
}
void sort_function(int *b,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(top1==-1)
		push1(*(b+i));
		else
		{
			while(1)
			{
				if(stk1[top1]>b[i])
				{
				//	cout<<"if part executed"<<endl;
					push2(pop1());
				}
				else{
				//	cout<<"else part executed"<<endl;
					push1(b[i]);
					while(top2!=-1)
					{
						push1(pop2());
					}
					break;
				}
			}
		}
	}
	display();
}
