 /*
Student Name:Diwakar kandel
Subject:programming fundamental
Roll No:
Lab No:01
Program:WAP to print simple interest.
Date:Nov18,2016
*/
#include<stdio.h>
int main()
{
int p,t,r,si;
printf("Enter the principle:\n");
scanf("%d",& p);
printf("Enter the time:\n");
scanf("%d",& t);
printf("Enter the rate:\n");
scanf("%d",& r);
si=(p*t*r)/100;
printf("print simple interest of %d",si);
return 0;
}
