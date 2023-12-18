int climbStairs(int n) {
    int step1=1,step2=2,total;
    if (n==1 || n==2){
        return n;
    }
    for(int i=3; i<=n;i++){
        total=step1+step2;
        step1=step2;
        step2=total;
    }
    return total;
}
