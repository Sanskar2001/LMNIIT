#include <iostream>
using namespace std;

string keypad[10]={""," ","abc","def","ghi","jkl",
"mno","pqrs","tuv","wxyz"};

void getCombinations(string str,string ans,int idx)
{

	if(idx==str.length())
	{
		cout<<ans<<endl;
		return;
	}

	// "23"
	//  01

	char currkey=str[idx];

	int keyNo=currkey-'0';

	// keypad[keyNo]

	//  let's pick a char from this string that we have found on the keypad
	for(int i=0;i<keypad[keyNo].length();i++)
	{

		char curr=keypad[keyNo][i];
		getCombinations(str,ans+curr,idx+1);
	}



}

int main()
{

	string str="23";
	getCombinations(str,"",0);


}