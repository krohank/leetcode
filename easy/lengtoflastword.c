int lengthOfLastWord(char* s) {
    int length = strlen(s);
    int i,a=-1;
    int len=0;

    for (i=length-1;i>=0;i--){
        if (s[i]!=' '){
            a=i;
            break;
        }
    }
    for (i=a;i>=0;i--){
        if(s[i]!=' '){
            len++;
        }
        else {
            break;
        }
    }
    return len;
}
