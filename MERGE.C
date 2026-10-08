// Write a program for the Merge sort of array.
#include<stdio.h>
#include<conio.h>
void merge(int[],int,int,int);
void part(int[],int,int);
int main()
{
int arr[30];
int i,size;
clrscr();
printf("\n\t--------Merge sorting method-----\n\n");
printf("Enter totalno. of element:");
scanf("%d",& size);
for(i=0;i<size;i++)
{
printf("Enter %d element :",i+1);
scanf("%d",&arr[i]);
}
part(arr,0,size-1);
printf("\n\t------Merge sorted elements----\n\n");
for(i=0;i<size;i++)
printf("%d",arr[i]);
getch();
return 0;
}
void part(int arr[],int min,int max)
{
int mid;
if(min<max)
{
mid=(min+max)/2;
part(arr,min,mid);
part(arr,mid+1,max);
merge(arr,min,mid,max);
}
}
void merge(int arr[],int min,int mid,int max)
{
int tmp[30];
int i,j,k,m;
j=min;
m=mid+1;
for(i=min;j<=mid && m<=max;i++)
{
if(arr[j]<=arr[m])
{
tmp[i]=arr[j];
j++;
}
else
{
tmp[i]=arr[m];
m++;
}
}
if(j>mid)
{
for(k=m;k<=max;k++)
{
tmp[i]=arr[k];
i++;
}
}
else
{
for(k=j;k<=mid;k++)
{
tmp[i]=arr[k];
i++;
}
}
for(k=min;k<=max;k++)arr[k]=tmp[k];
}


	--------Merge sorting method-----

Enter totalno. of element:6
Enter 1 element :21
Enter 2 element :76
Enter 3 element :45
Enter 4 element :66
Enter 5 element :20
Enter 6 element :77

	------Merge sorted elements----

20 21 45 66 76 77



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
