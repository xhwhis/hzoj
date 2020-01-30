#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *circle_create(int n) {
    Node *temp, *new_node, *head;
    temp = (Node *) malloc(sizeof(Node));
    head = temp;
    head->data = 1;
    for(int i = 2; i <= n; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = i;
        temp->next = new_node;
        temp = new_node;
    }
    temp->next = head;
    return head;
}

void count_off(Node *head, int n, int k) {
    Node *p1;
    Node *p2;
    p2 = head;
    p1 = p2->next;
    while (p1->next != p2) p1 = p1->next;
    while (p2->data != 1) {
        p1 = p1->next;
        p2 = p2->next;
    }
    while (p1 != p2) {
        for (int i = 1; i < k; i++) {
            p1 = p1->next;
            p2 = p2->next;
        }
        p1->next = p2->next;
        free(p2);
        p2 = p1->next;
    }
    printf("%d", p2->data);
    return ;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    Node *head = circle_create(n);
    count_off(head, n, k);
    return 0;
}
