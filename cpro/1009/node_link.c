/*************************************************************************
	> File Name: node_link.c
	> Author: 
	> Mail: 
	> Created Time: 日 10/ 9 15:50:51 2016
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define ERROR 0
#define OK 1

struct Node
{
    int data;
    struct Node * PNext;
};
typedef struct Node * LinkList; 


int initStruct(LinkList *L){
    *L = (LinkList) malloc(sizeof (struct Node));
    if(!(*L)){
        return ERROR;
    }
    (*L)->PNext=NULL;
    return OK;
}
 
int ListLength(LinkList L){
   int i=0;
   LinkList p = L->PNext;
   while(p){
       i++;
       p=p->PNext;
   }
   return i;
}

int main()
{
    LinkList L;
    initStruct(&L);
    int num;
    num = ListLength(L);
    printf("初始化完毕，链表个数是%d", num);
    return 0;
}
