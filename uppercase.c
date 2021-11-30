void stringUpr(char *s){
    int len,i;
    len=strlen(s);
     
    for(i=0;i<len;i++)
        s[i]=toupper(s[i]);
}
