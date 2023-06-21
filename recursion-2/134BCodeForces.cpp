#include<iostream>
using namespace std;

// int minSteps(int a,int b,int n)
// {
// 	if(a==n || b==n)
// 	{
// 		return 0;
// 	}

// 	if(a>n || b>n )
// 	{
// 		return INT_MAX;
// 	}


// 	int op1=INT_MAX,op2=INT_MAX;

	
// 	int leftans=minSteps(a+b,b,n);
// 	int rightans=minSteps(a,a+b,n);

// 	if(leftans!=INT_MAX)
// 		op1=1+leftans;

// 	if(rightans!=INT_MAX)
// 		op2=1+rightans;

// 	// int op1=1+minSteps(a+b,b,n);
// 	// int op2=1+minSteps(a,a+b,n);


// 	return min(op1,op2);


// }


int ans=INT_MAX;
void moves(int a,int b,int cnt)
{
	if(a<b)
	{
		swap(a,b);
		
	}

	if(b<=0)
	return;

	if(b==1)
	{
		ans=min(ans,cnt+a-1);
		return;
	}


	moves(a%b,b,cnt+a/b);

}


int main()
{
	int n;
	cin>>n;
	// cout<<minSteps(1,1,n)<<endl;


	for(int i=1;i<=n;i++)
	{
		moves(n,i,0);
		// 5 1
		// 5 2
		// 5 3 
		// 5 4
		// 5 5
	}

	cout<<ans;




}