#include <iostream>
using namespace std;
// https://github.com/Sanskar2001/LMNIIT

// return type ?
// just printing some stuff
// return type should be void

void generateSubseq(string str,string ans,int idx)
{
	// base 
	if(idx==str.length())
	{
		//print ans
		//return

		cout<<ans<<endl;
		return;
	}

	// current char
	char ch=str[idx];


	// either include this or exclude this

	generateSubseq(str,ans,idx+1); //op1
	generateSubseq(str,ans+ch,idx+1); //op2



}


int main()
{
	string str="abc";
	string ans="";
	generateSubseq(str,ans,0);

}