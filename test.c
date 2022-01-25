#include <stdio.h>
#include <stdlib.h>

typedef struct annuaire {
    char /*nom[20],*/ prenom[20], numero[20];
    struct annuaire *next;
}tel;


int main()
{
    tel* contact0 = malloc(sizeof(tel));
    tel* tmp; 
    tel* tmp2;
    printf("\nPrénom 0: ");
    scanf("%s", contact0->prenom);
    contact0->next = malloc(sizeof(tel));
    printf("\nPrénom 1: ");
    scanf("%s", contact0->next->prenom);
    contact0->next->next = malloc(sizeof(tel));
    printf("\nPrénom 2: ");
    scanf("%s", contact0->next->next->prenom);
    contact0->next->next->next = NULL;
    
    tmp = contact0;
    
    while(tmp != NULL){
        printf("\n%s\n", tmp->prenom);
        tmp = tmp->next;
    }
    
    printf("\nsuppression Prenom 1\n");
    tmp2 = contact0->next;
    printf("sizeof tmp2 %ld\n", sizeof(*tmp2));
    contact0->next = contact0->next->next;
    printf("\n*tmp2 %ld\n", *tmp2);
    free(tmp2);
    
    contact0->next->next = malloc(sizeof(tel));
    printf("\nPrénom 3: ");
    scanf("%s", contact0->next->next->prenom);
    contact0->next->next->next = NULL;
    
    
    
    printf("\n*tmp2 %ld\n", *tmp2);
    
    printf("\nPrénom 3: ");
    scanf("%s", contact0->next->next->prenom);
    
    printf("\n*tmp2 %ld\n", *tmp2);
    
    tmp = contact0;
    
    while(tmp != NULL){
        printf("\n%s\n", tmp->prenom);
        tmp = tmp->next;
    }
} 
 
