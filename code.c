int format_size_str(char *buf,size_t buflen, off_t size)
{
char *units[]={"","K","M","G","T","P"};
register unsigned int i=0;
unsigned int nunits=6;
while(size>1024 && 
i < nunits){
size/=1024;
i++;}
snprintf(buf,buflen,"%.3"PR_LU "%sB",size,units[i]);
return 0;}
