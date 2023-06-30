#include <iostream>
using namespace std;

// return Type??
//--> bool -> yes or no

bool checkPathExsist(int board[][4],int x,int y,int n)
{
	if(x>=n || y>=n)
	{
		return false;
	}

	if(board[x][y]==0)
	return false;

	if(x==n-1 && y==n-1)
	{
		return true;
	}


	 bool op1=checkPathExsist(board,x,y+1,n);

	 if(op1==true)
	 return true;

	return checkPathExsist(board,x+1,y,n);


}



int main()
{

	int board[][4]={{1,0,0,0},
					{1,1,0,0},
					{0,1,0,0},
					{0,1,1,1},
					};

	int n=4;

	if(checkPathExsist(board,0,0,n))
	cout<<"Path exsits!!\n";
	else
	cout<<"Path does'nt exsits!!\n";


}