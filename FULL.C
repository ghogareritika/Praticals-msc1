//9) Design a full adder using gates.
#include<stdio.h>
#include<conio.h>
#include<string.h>
char*addBinary(char*a,char*b)
{
int la=strlen(a);
int lb=strlen(b);
int lr=la>lb?la:lb;
int carry=0;
char*res=(char*)calloc(lr+2,sizeof(char));
res[lr+1]='\0';
la--;
lb--;
while(la>=0||lb>=0)
{
int ba=la>=0?a[la--]-'0':0;
int bb=lb>=0?b[lb--]-'0':0;
int br=ba^bb^carry;
carry=(ba&bb)|(carry &(ba^bb));
res[lr--]=br+'0';
}
if(!carry)return res+1;
res[0]='1';
return res;
}
void main()
{
clrscr();
printf("%s",addBinary("1011","1100"));
getch();
}
10111
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
