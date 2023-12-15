char* longestCommonPrefix(char** strs, int strsSize) {
    int size=strlen(strs[0]);
    for(int i=0;i<size;i++){
        for(int j=1;j<strsSize;j++){
            if(strs[0][i] != strs[j][i] ){
            strs[0][i]='\0';
        return strs[0];}
        }
    }
    return strs[0];
}
