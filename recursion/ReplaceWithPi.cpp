#include<iostream>
using namespace std;
void replaceWithPi(string str,string ans,int idx)
{

    if(idx==str.length())
    {
        cout<<ans;
        return;
    }


    if(idx<str.length()-1 && str[idx]=='p' && str[idx+1]=='i')
    {
        ans+="3.14";
        idx+=2;
    }
    else
    {
        ans+=str[idx];
        idx+=1;
    }

    replaceWithPi(str,ans,idx);

}


int main()
{
    string str="pipppiiip";
    // expected ans-> 3.14pp3.14iip
    // output->     3.14pp3.14iip
   

    string ans="";

    replaceWithPi(str,ans,0);
}