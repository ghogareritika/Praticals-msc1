//write a program for the Selection sort of arry.
#include<stdio.h>
#include<conio.h>
void main()
{
int a[30];
int n,i,j,min,t=0;
clrscr();
printf("Enter how many element\n");
scanf("%d",&n);
printf("Enter the element\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
	if(a[min]>a[j])
		min=j;
}
t=a[i];
a[i]=a[min];
a[min]=t;
}
printf("The sorted element are \n");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
getch();
}

Enter how many element
6                                                                               
Enter the element                                                               
4                                                                               
7                                                                               
2                                                                               
99                                                                              
6                                                                               
0                                                                               
The sorted element are                                                          
0       2       4       6       7       99                                      
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


