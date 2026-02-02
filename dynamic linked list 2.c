#include <stdio.h>
#include<stdlib.h>
struct contact {
    long int number;

    struct contact *next;//structre nesting

};
int main() {
    
    struct contact *head, *temp, *newcontact;
    
    head = malloc(sizeof(struct contact));
    head->number = 9121928583;
    
    head->next = malloc(sizeof(struct contact));
    head->next->number = 9515209282;
    
     
      head->next->next = malloc(sizeof(struct contact));
      head->next->next->number = 9346191790;
      head->next->next->next = NULL;
      
      //inserting at middle
      newcontact = malloc(sizeof(struct contact));
      newcontact->number = 7671828580;
      
      temp = head;
      while(temp !=NULL && temp->number !=9346191790)
      temp = temp->next;
      
      if(temp!=NULL)
      newcontact->next = temp->next;
      temp->next = newcontact;
   //output
   temp=head;
   while(temp!=NULL){
       printf("%ld-->",temp->number);
       temp = temp->next;
       
   }
       printf("Finish \n");
      return 0;
       
}