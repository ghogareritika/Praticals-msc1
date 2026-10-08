//10) Implement a C/C++ program to perform AND,OR,NOT and operation on binary number.
#include<stdio.h>
#include<conio.h>
void main()
{
long long bin1,bin2;
int bit1,bit2;
int andResult[32],orResult[32],xorResult[32],not1Result[32];
int count=0;
int i;
clrscr();
printf("Enterfirst binary number:");
scanf("%lld",&bin1);
printf("Enter second binary number:");
scanf("%lld",&bin2);
while(bin1>0||bin2>0)
{
bit1=bin1%10;
bit2=bin2%10;
andResult[count]=bit1 && bit2;
orResult[count]=bit1||bit2;
xorResult[count]=bit1^bit2;
not1Result[count]=!bit1;
bin1=bin1/10;
bin2=bin2/10;
count++;
}
printf("\n--Result--\n");
printf("AND:");
for( i=count-1;i>=0;i--)
printf("%d",andResult[i]);
printf("\nNOR:");
for(i=count-1;i>=0;i--)
printf("%d",orResult[i]);
printf("\nXOR:");
for(i=count-1;i>=0;i--)
printf("%d",xorResult[i]);
printf("\nNOT1:");
for(i=count-1;i>=0;i--)
printf("%d",not1Result[i]);
printf("\n");
getch();
}
Enterfirst binary number:1100
Enter second binary number:1010                                                 
                                                                                
--Result--                                                                      
AND:1000                                                                        
NOR:1110                                                                        
XOR:0110                                                                        
NOT1:0011                                                                       
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
