#include<stdio.h>
#include<process.h>
#include<string.h>
void read();
void display();
int i;
int id[10];
char name[20][20];
int phone_no[10];
char email[20][20];
void main()
{
int ch;
int n,p,r,q;
char address[40][40];
int acc_no[20];
char un[10]="BCA";
char pw[10]= "bca123";
char str3[10];
char str4[10];
char design[40][40];
int sal[10];
printf("Enter the user name\n");
scanf("%s",str3);
printf("Enter the password\n");
scanf("%s",str4);
if((strcmp(un,str3)==0)&&(strcmp(pw,str4)==0))
{
printf("Login successfull\n");
}
else
{
printf("Login unsuccessful,try again\n");
}
printf("-----------------------------------------------------------------------------------------------------------\n");
printf("\t\t\t\t***WELCOME TO BANK MANAGEMENT***\n");
printf("-----------------------------------------------------------------------------------------------------------\n");
printf("\t\t\t\t\tMENU\n");
printf("1.Insert customer details\n");
printf("2.Insert a new customer details\n");
printf("3.Display customer details\n");
printf("4.Insert employee details\n");
printf("5.Display employee details\n");
printf("6.Exit\n");
printf("______________________________________________________________________________________________________________\n");
while(1)
{
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the no of customers\n");
scanf("%d",&n);
printf("\t\t\tCustomer details \n");
for(i=0;i<n;i++)
{
read();
printf("Enter the address \n");
scanf("%s",address[i]);
printf("Enter your account number\n");
scanf("%d",&acc_no[i]);
}
break;
case 2:
printf("\t\t\tInsert a new customer details\n");
printf("Insert the no of customers\n");
scanf("%d",&p);
q=n;
n=n+p;
for(i=q;i<n;i++)
{
read();
printf("Enter the address \n");
scanf("%s",address[i]);
printf("Enter your account number\n");
scanf("%d",&acc_no[i]);
}
break;
case 3:
printf("\t\t\t customer details are\n");
printf("---------------------------------------------------------------------------------------------------\n");
printf("Id\t Name\t\t\t Phone_no\t\t Email\t\t Address\tAcc_no\n");
printf("----------------------------------------------------------------------------------------------------\n");
for(i=0;i<n;i++)
{
display();
printf("%s\t",address[i]);
printf("%d\n",acc_no[i]);
}
break;
case 4:
printf("\t\t\tEmployee details\n");
printf("Enter the no of employee\n");
scanf("%d",&r);
for(i=0;i<r;i++)
{
read();
printf("Enter the employee salary\n");
scanf("%d",&sal[i]);
printf("Enter the employee designation\n");
scanf("%s",design[i]);
}
break;
case 5:
printf("\t\t\t employee details are\n");
printf("-------------------------------------------------------------------------------------------------\n");
printf("Id\t Name\t\t\t Phone_no\t\t Email\t\t Salary\t\tDesignation\n");
printf("--------------------------------------------------------------------------------------------------\n");
for(i=0;i<r;i++)
{
display();
printf("%d\t\t",sal[i]);
printf("%s\n",design[i]);
}
break;
case 6:
exit(0);
}
}
}
void read()
{
printf("Enter the id\n");
scanf("%d",&id[i]);
printf("Enter the name\n");
scanf("%s",name[i]);
printf("Enter the phone no\n");
scanf("%d",&phone_no[i]);
printf("Enter the email\n");
scanf("%s",email[i]);
}
void display()
{
printf("%d\t",id[i]);
printf("%s\t\t",name[i]);
printf("%d\t",phone_no[i]);
printf("%s\t",email[i]);
}