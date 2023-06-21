#include<iostream>
using namespace std;

void moveDisk(int n ,char src,char helper,char dest)
{

    if(n==0)
    return;


    // n-1 disks from src to helper using dest as helper
    moveDisk(n-1,src,dest,helper);
    cout<<"Moving disk "<<n<<" from "<<src<<" to "<<dest<<" using "<<helper<<endl;
    // n-1 disks from helper to dest using src
    moveDisk(n-1,helper,src,dest);

}

int main()
{
    int n=3;


    // A -src rod
    // B - helper rod
    // C - rod

    char src='A',helper='B',dest='C';
    moveDisk(n,src,helper,dest);






}