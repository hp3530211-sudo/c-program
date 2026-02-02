// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
 struct contact{
     long int number;
     struct contact *next;
 };

int main() {
    // Write C code here
    struct contact *head=NULL,*temp;
    
    struct contact *ct1=(struct contact*)malloc(sizeof(struct contact));
      struct contact *ct2=(struct contact*)malloc(sizeof(struct contact));
        struct contact *ct3=(struct contact*)malloc(sizeof(struct contact));
        
        ct1->number=9515209282;
        ct2->number=9346191790;
        ct3->number=9121928583;
        
        ct1->next=NULL;
        ct2->next=NULL;
        ct3->next=NULL;
        
        head=ct1;
        
        temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=ct2;
        
        temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=ct3;
        
        printf("Contact:\n");
        temp=head;
        while(temp!=NULL){
            printf("%ld----",temp->number);
            temp=temp->next;
        }
        printf("finish");
    return 0;
}