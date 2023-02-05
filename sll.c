#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* link;
};
typedef struct node* NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("Memory not available");
        exit(0);
    }
    return x;
}
NODE insert_front(NODE first,int elem)
{
    NODE temp;
    temp=getnode();
    temp->info=elem;
    temp->link=first;
    return temp;
}
NODE insert_rear(NODE first,int elem)
{
    NODE temp,cur,prev;
    temp=getnode();
    temp->info=elem;
    temp->link=NULL;
    if(first==NULL)
      return temp;
    cur=first;
    prev=NULL;
    while(cur!=NULL)
    {
        prev=cur;
        cur=cur->link;  
    }
    prev->link=temp;
    return first;
}
NODE delete_front(NODE first)
{
    int elem;
    NODE next;
    if(first==NULL)
    {
        printf("Deletion not possibe");
        return first;
    }
    elem=first->info;
    elem=first->link;
    printf("Deleted element is %d",elem);
    free(first);
    return next;
}
NODE delete_rear(NODE first)
{
    int elem;
    NODE cur,prev;
    if(first==NULL)
    {
        printf("Deletion not possibe");
        return NULL;
    }
    if(first->link==NULL)
    {
        printf("%d",first->info);
        elem=first->info;
        free(first);
        return NULL;
    }
    cur=first;
    prev=NULL;
    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    elem=cur->info;
    free(cur);
    prev->link=NULL;
    return first;

}
void display(NODE first)
{
    NODE cur;
    cur=first;
    if(cur==NULL)
    {
        printf("SLL is empty");
        return;
    }
    while(cur!=NULL)
    {
        printf("%d",cur->info);
        cur=cur->link;
    }
}
int main()
{
    NODE first=NULL;
    int ch,elem;
    while(1)
    {
        printf("Enter the choice 1:Insert Front\n2:Insert Rear\n3:Delete Front\n4:Delete Rear\n5: Display\n6:Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the element\n");
                   scanf("%d",&elem);
                   first=insert_front(first,elem);
                   break;
            case 2:printf("Enter the element\n");
                   scanf("%d",&elem);
                   first=insert_rear(first,elem);
                   break;
            case 3:
                   first=delete_front(first);
                   break;
            case 4:
                   first=delete_rear(first);
                   break;
            case 5:
                  display(first);
                  break;
            default:exit(0);

        }
    }
}
