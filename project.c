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
minv=p1[0].at;
locv=0;
for(i=1;i<n;i++)
{
if(p1[i].at<minv)
{
locv=i; //tells min at process in locv
minv=p1[i].at;
}
}
for(i=0;i<n;i++)
{
if(p1[i].at==minv)
{
p1[i].flag1=1; //processes having same minimum at
}
}
mins=p1[0].bt;
locs=0;
for(i=0;i<n;i++)
{
if(p1[i].flag1==1&&p1[i].bt<mins)
{
mins=p1[i].bt; //gives process with minimum burst time
locs=i;
}
}
printf("\nGantt Chart:");
for(i=minv;i<tbt+minv;i++)
{

for(j=0;j<n;j++)
{
if(p1[j].rbt>0&&p1[j].at<=i)
{
p1[j].flag=1;
}
}
no=minimum1();
printf("%d p[%d]",i,p1[no].pid);
p1[no].rbt=p1[no].rbt-1;

for(k=0;k<n;k++)
{
if(p1[k].rbt>0&&p1[k].at<=i&&k!=no)
{
p1[k].wt++;
}
}
}
printf("%d",tbt+minv);
for(i=0;i<n;i++)
{
awt+=p1[i].wt;
}
awt=awt/n;
for(i=0;i<n;i++)
{
p1[i].tat=p1[i].wt+p1[i].bt;
atat+=p1[i].tat;
}
