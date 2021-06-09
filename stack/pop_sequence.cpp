//pop sequence
#include<bits/stdc++.h>
#define max 20
using namespace std;

bool StackSequence(int pushed[], int popped[], int n)
{
	 stack <int> st;
	 int j=0;
for(int i = 0; i < n; i++){
        st.push(pushed[i]);
         
        while (!st.empty() && j < n && st.top() == popped[j]){
            st.pop();
            j++;
        }
    }
     
    return j == n;
}
int main()
{
	int popped[max],pushed[max],n,i;
	cout<<"Number of elements in popped and pushed array:";
	cin>>n;
	cout<<"Elements of pushed array-";
	for(i=0;i<n;i++)
	cin>>pushed[i];
	cout<<"Elements of popped array-";
	for(i=0;i<n;i++)
	cin>>popped[i];
	cout << (StackSequence(pushed, popped, n) ? "True" : "False");
	return 0;
	
}
