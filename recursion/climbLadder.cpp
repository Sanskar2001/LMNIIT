#include<iostream>
using namespace std;
// ways -> should return total no of ways to reach the nth step
int ways(int n)
{
    // base condition
    if(n==0)
    {
        return 1;
    }

    // we cannot beyond ground level i.e. n=0
    if(n<0)
    {
        return 0;
    }


    // recursive case
    return ways(n-1)+ways(n-2)+ways(n-3);


}

int main()
{
    int n=4;
    cout<<ways(n);
}