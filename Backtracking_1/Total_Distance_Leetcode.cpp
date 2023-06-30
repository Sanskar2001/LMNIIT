class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        
        if(mainTank<5 || additionalTank==0)
        return 10*mainTank;


        mainTank=mainTank-5;

        int dist=5*10+distanceTraveled(mainTank+1,additionalTank-1);
        return dist;


    }
};
