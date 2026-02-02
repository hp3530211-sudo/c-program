#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Product {
    char name[50];
    float price;
} Product;

typedef struct Order {
    int orderID;
    Product product;
    char status[20];
    struct Order* next;
} Order;

void displayOrders(Order* head) {
    Order* temp = head;
    while (temp != NULL) {
        printf("%d %s %.2f %s -> ", temp->orderID, temp->product.name, temp->product.price, temp->status);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Create orders
    Order o1 = {201, {"Mouse", 500}, "Delivered", NULL};
    Order o2 = {202, {"Keyboard", 1500}, "Pending", NULL};

    // Link orders
    o1.next = &o2;

    // Display orders
    displayOrders(&o1);
    return 0;
}