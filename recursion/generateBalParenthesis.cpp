#include<iostream>
using namespace std;
// total no of pairs 
// no of opening brackets
// no of closing brackets
// string ans for storing ans
void printBalParenthesis(int n,int op,int cl,string ans)
{
    if(op==n && cl==n)
    {
        cout<<ans<<endl;
        return;
    }


    // Place an opening bracket
    if(op<n)
    {
        printBalParenthesis(n,op+1,cl,ans+'(');
    }

    if(cl<op)
    {
        printBalParenthesis(n,op,cl+1,ans+')');
    }

    

}
int main()
{
    int n=3;

    printBalParenthesis(n,0,0,"");
}