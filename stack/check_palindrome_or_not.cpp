//Check for a palindrome of a string using stack
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
char pop1()
{
	char c;
	c=stk[top1];
	top1--;
	return c;
	
}
char peek1()
{
	return stk[top1];
}
int check_palindromestring(string s)
{
	for(int i=0;i<s.size();i++)
	push1(s[i]);
	string p;
	for(int i=0;i<s.size();i++)
	p+=pop1();
	cout<<p<<endl;
	if((s.compare(p)) == 0)
	return 1;
	else
	return 0;
	
}
int main()
{
	string s;
	cin>>s;
	int x=check_palindromestring(s);
	if(x==0)
	cout<<"No"<<endl;
	else
	cout<<"Yes"<<endl;
}
