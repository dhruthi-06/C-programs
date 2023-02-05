#include <stdio.h>
#include<stdlib.h>
struct node
{ 
     int info;
     struct node*link;
};
typedef struct node* NODE;
NODE getnode()
{ 
      NODE x;
      x=(NODE)malloc(sizeof(struct node));
  if(x==NULL)
{
    printf("Memory not available\n");
     exit(0);
}
return x;
}
int count(NODE last)
{
     int count1=1;
     if(last==NULL)
     {
         return 0;
     }
     NODE cur;
     cur=last->link;
     while(cur!=last)
     {
         count1++;
         cur=cur->link;
     }
     count1++;
     return count1;
}
NODE insert_info(NODE last,int item)
{
    NODE temp;
    temp=getnode();
    temp->info=item;
    if(last==NULL)
       last=temp;
    else
     {   temp->link=last->link;
     }
         last->link=temp;
       return last;
}
int main()
{    int item,t=0,ch;
     NODE last;
     last=NULL;
     while(1)
     {

         printf("Enter the choice\n");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1:printf("Enter the element\n");
                    scanf("%d",&item);
                    last=insert_info(last,item);
                    break;
            case 2:t=count(last); 
                       printf("The number of nodes are %d\n",t);
                        break;
            default:exit(0);
                    
         }
     }
     
     
      
}
