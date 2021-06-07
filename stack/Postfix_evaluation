//Postfix expression’s Evaluation
#include<bits/stdc++.h>
#include<string>
using namespace std;
int post_eval(string s)
{
	int i,x,a,b,d;
	stack<int> st;
	char c;
	for(i=0;i<s.size();i++)
	{
		if(s[i]>='0' && s[i]<='9' )
		{
			x=s[i]-'0';
			st.push(x);
		}
		else
		{
			if(st.size()>=2)
			{
				a=st.top();
			st.pop();
			b=st.top();
			st.pop();
			c=s[i];
			switch(c)
			{
				case ',':
					break;
				case '+':
					d=a+b;
				//	cout<<d<<endl;
					st.push(d);
					break;
				case '-':
					d=b-a;
				//	cout<<d<<endl;
					st.push(d);
					break;
				case '*':
					d=a*b;
				//	cout<<d<<endl;
					st.push(d);
					break;
				case '/':
					d=a/b;
				//	cout<<d<<endl;
					st.push(d);
					break;
				case '^':
					d=pow(a,b);
				//	cout<<d<<endl;
					st.push(d);
					break;
				default:
					cout<<"Invalid char"<<endl;
					
			}
			
			}
			else
			return st.top();
		}
	}
	return st.top();
}
int main()
{
	string s;
	cin>>s;
	cout<<post_eval(s)<<endl;
}
