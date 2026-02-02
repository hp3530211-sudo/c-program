#include<stdio.h>
#include<stdlib.h>
//create structure
struct contact{
    long int number;
    struct contact *next; //structure nesting
};
int main(){
    //storage allocation
    struct contact *ct1=(struct contact*)malloc(sizeof(struct contact));
    struct contact *ct2=(struct contact*)malloc(sizeof(struct contact));
    struct contact *ct3=(struct contact*)malloc(sizeof(struct contact));
    //storing numbers
    ct1->number=9110768789;
    ct2->number=9014903496;
    ct3->number=9618723990;
    //interconnection
    ct1->next=ct2;
    ct2->next=ct3;
    ct3->next=NULL;
    //pointing head
    struct contact *head=ct1;
    //display
    printf("Contact: \n");
    while(head !=NULL){
        printf("%d---->",head->number);
        head=head->next;
    }
    printf("finish");
    return 0;
}