#include <iostream>
using namespace std;


// Return type??
// void

int cnt=0;

void cntPaths(int maze[][4],int x,int y,int n)
{

	if(x>=n || y>=n)
		return;

	if(maze[x][y]==0)
		return;

	if(x==n-1 && y==n-1)
	{	cnt++;
		return;
	}

	cntPaths(maze,x,y+1,n); // cnt the paths in rt dirn
	cntPaths(maze,x+1,y,n); // cnt the paths in down dirn

}

// int cntPaths2(int maze[][4],int x,int y,int n)
// {

// 	if(x>=n || y>=n)
// 		return 0;

// 	if(maze[x][y]==0)
// 		return 0;

// 	if(x==n-1 && y==n-1)
// 	{
// 		return 1;
// 	}
	

// 	int left=cntPaths2(maze,x,y+1,n); // cnt the paths in rt dirn
// 	int right=cntPaths2(maze,x+1,y,n); // cnt the paths in down dirn


// 	return left+right;

// }


int main()
{

	int board[][4]={{1,1,1,1},
					{1,1,0,1},
					{0,1,0,1},
					{0,1,1,1},
					};

	int n=4;

	cntPaths(board,0,0,n);
	cout<<"Total ways="<<cnt;

	// cout<<cntPaths2(board,0,0,n)<<endl;
}