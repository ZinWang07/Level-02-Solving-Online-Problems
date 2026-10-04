#include <iostream>
using namespace std;
void process()
{
	int n; cin>>n;
	int A[n],dem=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<4;j++)
		{
			char c; cin>>c;
			if(c=='#') A[dem++]=j;
		}
	for(int i=dem-1;i>=0;i--) cout<<A[i]+1<<" ";
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		process();
		cout<<'\n';
	}
	return 0;
}
