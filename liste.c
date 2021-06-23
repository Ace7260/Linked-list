//
// Created by 33768 on 22/06/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
static Cell *createCell(int data  ) {
    Cell *cell= malloc(sizeof(Cell));
    if (!cell)
        return NULL;
    cell->data=data;
    cell->next=NULL;
    return cell;
}
List *emptyList(void)
{
    return NULL;
}
int isEmptyList(List *L)
{
    return L==NULL;
}
long lenList(List *L)
{
long len=0;
    while (L){
        len++;
        L=L->next;
    }
    return len;
}
List *addAt(List *L,int data,int pos)
{
    List *prec =L;
    List *cur=L;
    int i=0;

    Cell *cell=createCell(data);
    if (isEmptyList(L))
    {
        return cell;
    }
    if (pos==0){
        cell->next=L;
        return cell;
    }
    i=0;
    while (i<pos)
    {
        i++;
        prec=cur;
        cur=cur->next;
    }
    prec->next=cell;
    cell->next=cur;
    return L;

}
int getAt(List *L,int pos)
{
 int i=0;
if(isEmptyList(L)){
printf("liste vide\n");
    return -1;
}
    while (i<pos)
    {
        i++;
        L=L->next;
    }
    return L->data;
}
void setAt(List *L,int data,int pos)
{
    int i=0;
    if(isEmptyList(L)){
        printf("liste vide\n");
        return;
    }
    while (i<pos)
    {
        i++;
        L=L->next;
    }
    L->data=data;

}
List *freeAt(List *L,int pos)
{
    List *prec =L;
    List *cur=L;
    int i=0;

    if (isEmptyList(L))
    {
        return NULL;
    }
    if (pos==0){
        L=L->next;
        free(cur);
        return L;
    }
    i=0;
    while (i<pos)
    {
        i++;
        prec=cur;
        cur=cur->next;
    }
    prec->next=cur->next;
    free(cur);
    return L;

}
List *freeList(List *L)
{
  List*tmp=NULL;
    while (L){
        tmp=L->next;
        free(L);
        L=tmp;
    }
}
void printList(List *L)
{
    while (L){
        printf("%d",L->data);
        L=L->next;

    }
    printf("\n");
}