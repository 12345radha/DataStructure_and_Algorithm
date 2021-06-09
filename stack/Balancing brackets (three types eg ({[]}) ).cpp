#include<bits/stdc++.h>
#include<string>
#define max 20
using namespace std;
char stk[max];
int top1=-1;
void push1(char c)
{
	top1++;
	stk[top1]=c;
}
void pop1()
{
	top1--;
}
char peek1()
{
	return stk[top1];
}
bool check_balancestring(string s)
{
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		push1(s[i]);
		else
		{
			if(s[i]==')' && peek1()=='(')
			{
				pop1();
			}
			else if(s[i]=='}' && peek1()=='{')
			{
				pop1();
			}
			else if(s[i]==']' && peek1()=='[')
			pop1();
			else
			return 0;
		}
	}
	if(top1<0)
	return 1;
	else
	return 0;
}
int main()
{
	string s;
	cin>>s;
	int x=check_balancestring(s);
	if(x==0)
	cout<<"No"<<endl;
	else
	cout<<"Yes"<<endl;
}
