bool isValid(char* s) {
    int length = strlen(s);
    char stack[length];
    int top=-1;
    for (int i=0;i<length;i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
        stack[++top] = s[i];
        }
        else if ((s[i]==')' && stack[top]=='(')||
                 (s[i]==']' && stack[top]=='[')||
                 (s[i]=='}' && stack[top]=='{'))
        {
            top--;
        }
        else{
    return false; }}
    return top==-1;
    
}
