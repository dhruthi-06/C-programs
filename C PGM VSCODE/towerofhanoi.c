#include<stdio.h>
void towerofhanoi(int n,char s,char t,char d)
{
     if(n==0)
        return;
    towerofhanoi(n-1,s,d,t);
    //move n-1 discs from source to temp
    printf("Move disc %d from %c to %c\n",n,s,d);
    //move n disc from source to destination
    towerofhanoi(n-1,t,s,d);
    //move n-1 disc from temp to destination
}
int main()
{
    int n;
    char a,b,c;
    printf("Enter the number of discs\n");
    scanf("%d",&n);
    towerofhanoi(n,'A','B','C');
}