#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
int main() {
    printf("welcome\n");
   List*list=emptyList();
   list=addAt(list,666,0);
    printList(list);
    list=addAt(list, 999,0);
    printList(list);
    list=addAt(list, 500,1);
   printList(list);
    list=addAt(list, 256,2);
    printList(list);
//    printf("\nLongeur %d",lenList(list));
//    setAt(list,1000,2);
//    printf("\ndata %d",getAt(list,2));
list=freeAt(list,1);
   list=freeList(list);
    return 0;
}
