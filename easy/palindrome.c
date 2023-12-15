bool isPalindrome(int x) {

    int rem=0;
   int num=x;
    
    for(;num>0;num=num/10){
        rem=rem*10+num%10;
    }
    
    if (x == rem){
    return true;
    }
return false;


}
