//Write a program for the Quick sort of array.
#include<iostream.h>
#include<conio.h>
void quick(int a[10],int lb,int n);
void main()
{
int n,i,a[10];
clrscr();
cout<<"Enter how many element:\n"<<endl;
cin>>n;
cout<<"Enter the element:\n";
for(i=0;i<n;i++)
cin>>a[i];
quick(a,0,n-1);
cout<<"The sorted elements are:\n"<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<"";
getch();
}
void quick(int a[],int lb,int ub)
{
int i,j,t,key;
if(lb>ub) return;
i=lb;
j=ub;
key=lb;
while(i<j)
{
while(a[key]>a[i])
i++;
while(a[key]<a[j])j--;
if(i<j)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
t=a[j];
a[j]=a[key];
a[key]=t;
quick(a,0,j-1);
quick(a,j+1,ub);
}
Enter how many element:

5
Enter the element:
11 31 65 99 87
The sorted elements are:

11 31 65 87 99
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
