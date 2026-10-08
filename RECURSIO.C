6) Write a program in C++ to find factorial of number using recursion.

#include<iostream.h>
#include<conio.h>
int factorial(int);
void main()
{
clrscr();
int num,fact;
cout<<"Enter number to find factorial:";
cin>>num;
fact=factorial(num);
cout<<"Factorial of"<<num<<"is:"<<fact;
getch();
}
int factorial(int num)
{
if(num==0||num==1)
return 1;
return(num *factorial(num-1));
}

Enter number to find factorial:6
Factorial of6is:720                                                             
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
