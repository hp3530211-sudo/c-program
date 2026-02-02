// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct contact{
    long int rollno;
    struct contact *next;
};

int main() {
    struct contact *ct1 = (struct contact*) malloc(sizeof(struct contact));
     struct contact *ct2 = (struct contact*) malloc(sizeof(struct contact));
     
      
      printf("Enter first roll no :\n");
      printf("Enter second roll no :");
      scanf("%ld %ld",ct1,ct2);
      
       ct1->next = ct2;
       ct2->next = NULL;
       
       struct contact *head =ct1;
      
    printf("Roll no: \n");
    while(head != NULL){
        printf("Roll %ld ---->", head->rollno);
        head = head->next;
    }
    printf("NULL");
    return 0;
}