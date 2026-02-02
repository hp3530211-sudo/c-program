#include <stdio.h>
#include <stdlib.h>

typedef struct Contact {
    long long phone;
} Contact;

typedef struct Customer {
    int accNo;
    Contact contact;
    struct Customer* next;
} Customer;

void displayCustomers(Customer* head) {
    Customer* temp = head;
    while (temp != NULL) {
        printf("%d - %lld -> ", temp->accNo, temp->contact.phone);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Create customers
    Customer c1 = {101, {9876543210}, NULL};
    Customer c2 = {102, {9123456789}, NULL};
    Customer c3 = {103, {9999999999}, NULL};

    // Link customers
    c1.next = &c2;
    c2.next = &c3;

    // Display customers
    displayCustomers(&c1);
    return 0;
}