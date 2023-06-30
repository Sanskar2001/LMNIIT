#include <iostream>
using namespace std;

void permutations(string str,int idx)
{

	if(idx==str.length())
	{
		cout<<str<<"\n";
		return;
	}


	for(int i=idx;i<=str.length()-1;i++)
	{

		swap(str[idx],str[i]);	
		permutations(str,idx+1);
	}
}


// void permutationsCharArr(char* str,int idx)
// {

// 	if(idx==strlen(str))
// 	{
// 		cout<<str<<"\n";
// 		return;
// 	}


// 	for(int i=idx;i<=strlen(str)-1;i++)
// 	{

// 		swap(str[idx],str[i]);	
// 		permutationsCharArr(str,idx+1);
// 	}
// }

void permutationsCharArrBacktracking(char* str,int idx)
{

	if(idx==strlen(str))
	{
		cout<<str<<"\n";
		return;
	}


	for(int i=idx;i<=strlen(str)-1;i++)
	{

		swap(str[idx],str[i]);	
		permutationsCharArrBacktracking(str,idx+1);
		swap(str[idx],str[i]); // backtracking step
		// you will the undo the step performed before 
		// making the function call
	}
}


void mutate(char* str)
{
	str[0]='A';
}


int main()
{
   // string str="abc";
   // // permutations(str,0);

   // char chArr[]="Hello";

   // cout<<chArr<<endl;
   // mutate(chArr);
   // cout<<chArr;

	char ch[]="abc";
	// permutationsCharArr(ch,0);

	// cout<<endl<<"Finally the char arr is: "<<ch<<endl;

	permutationsCharArrBacktracking(ch,0);



}