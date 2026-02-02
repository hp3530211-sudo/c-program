#include <stdio.h>
#include<stdlib.h>
struct contact {
    long int number;

    struct contact *next;

};
int main() {
    
    struct contact *head=NULL;
     struct contact *n1 = (struct contact*)malloc(sizeof(struct contact));

     struct contact *n2 = (struct contact*)malloc(sizeof(struct contact));
     
       struct contact *n3 = (struct contact*)malloc(sizeof(struct contact));
        struct contact *n4 = (struct contact*)malloc(sizeof(struct contact));

     n1->number = 10;
     n2->number = 20;
     n3->number = 30;
     
    n3->next = head;
    head =n3;
    n2->next = head;
    head = n2;
    n1->next = head;
    head = n1;
     printf("Contact Numbers\n");
     while(head != NULL){
         printf("%ld-->",head->number);
         head = head->next;
     }
     printf("\nafter adding\n");
        n4->number = 40;
         n4->next = head;
    head =n4;
    n3->next = head;
    head = n3;
    n2->next = head;
    head = n2;
      n1->next = head;
        head  = n1;
     while(head != NULL){
         printf("%ld-->",head->number);
         head = head->next;
     }
     printf("Finish");
    return 0;

}