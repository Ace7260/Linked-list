//
// Created by 33768 on 22/06/2021.
//

#ifndef UNTITLED7_LISTE_H
#define UNTITLED7_LISTE_H


typedef struct List_t
{
    int data;
    struct List_t *next;
}List,Cell;

List *emptyList(void);
int isEmptyList(List *);
long lenList(List *);
List * addAt(List *,int,int);
int getAt(List *,int);
void setAt(List *,int,int);
List *freeAt(List *,int);
List *freeList(List *);
void printList(List *);


#endif //UNTITLED7_LISTE_H
