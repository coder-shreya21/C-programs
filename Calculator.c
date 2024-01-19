#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int clrscr();
	int a=0,b=0,ch,res;
	printf("____________WELCOME______________\n");
	printf("1.Addition /n 2.Subtraction/n 3.Multiplication/n 4.Division\n");
	printf("Enter your choice:\n");
	scanf("%d",&ch);
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	do{
	switch(ch)
	{
		case 1:
		       res=a+b;
		       break;
		case 2:
		       res=a-b;
		       break;
		case 3: 
		       res=a*b; 
		       break;
	    case 4: 
	           res=a/b;
	           break;
	   
	}
}while(ch<0&&ch>5);
printf("The result is:%d\n",res);
printf("**************************************\n");
	getch();
	return 0;
}











