// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct contact{
    long int number;
    struct contact *next;
};

int main() {
    struct contact *ct1 = (struct contact*) malloc(sizeof(struct contact));
     struct contact *ct2 = (struct contact*) malloc(sizeof(struct contact));
      struct contact *ct3 = (struct contact*) malloc(sizeof(struct contact));
      
      printf("Enter first number :\n");
      printf("Enter second number :\n");
      printf("Enter third number:");
      scanf("%ld %ld %ld",ct1,ct2,ct3);
      
       ct1->next = ct2;
       ct2->next = ct3;
       ct3->next = NULL;
       
       struct contact *head =ct1;
      
    printf("Contact: \n");
    while(head != NULL){
        printf("%ld ---->", head->number);
        head = head->next;
    }
    printf("NULL");
    return 0;
}