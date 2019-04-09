#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
struct proc // create a structure of Process
{
int pid; 
int at,bt,wt,tat,rbt;
int flag,flag1;
};
struct proc p1[10]; // create array of structure
int i,j,k,n,no,m;
float atat=0.0,awt=0.0;
int tbt=0;
int minimum1();
int main ()
{
  printf("**********Welcome to My Project**********");
  int minv,locv,mins,locs;
clrscr();
printf("Enter the number of processes:");
scanf("%d",&n);
printf("\n*************************************************");
printf("\nEnter the process information:");
printf("\n*************************************************");
for(i=0;i<n;i++)
{
printf("\nEnter Process id,Arrival Time and Burst time of Process %d : ",i+1);
p1[i].wt=0;
p1[i].tat=0;
p1[i].flag=0;
p1[i].flag1=0;
scanf("%d%d%d",&p1[i].pid,&p1[i].at,&p1[i].bt);
tbt+=p1[i].bt;
p1[i].rbt=p1[i].bt;
}
printf("\nThe Process Information:");
printf("\nPid\tAt\tBt");
for(i=0;i<n;i++)
{
printf("\n%d\t%d\t%d",p1[i].pid,p1[i].at,p1[i].bt);
}
}
