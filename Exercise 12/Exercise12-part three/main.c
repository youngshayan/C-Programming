/*
 * Programmer: Shayan Mansornia     Date:12/22/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* prev; };
void push(struct Node** head_ref, int new_data)
{ struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

void deleteNode(struct Node** head_ref, int key)
{
    struct Node *temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;
    prev->next = temp->next;
    free(temp);
}

void printList(struct Node* node){
    struct Node* last;
    printf("\n Forward Direction LIST\n");
    while (node != NULL) {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }
    printf("\nReverse Direction LIST:");
    while (last != NULL) {
        printf(" %d ", last->data);
        last = last->prev;
    }
}
void printList_After(struct Node* node) {

    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main() {
    int  n=0,z=0;
    char ch;
    struct Node *head = NULL;
    printf("Enter count of Node You want create: \n");
    printf("->");scanf("%d",&n);
    printf("\n=================\n");
    int a[n];
    for (int i = 0; i < n; ++i) {
        printf("Enter %d Number\n",i+1);
        printf("->");scanf("%d",&a[i]);
        push(&head,a[i]);
    }
    printf("\n____________________________\n");
    printList(head);
    printf("\n____________________________\n");
    do {
        printf("Do you want delete a node?\n");
        printf("Y , N\n");
        printf("->");
        scanf(" %c", &ch);
        switch (ch) {
            case 'N':
            case 'n':
                ch='y';
                return 0;

            case 'y':
            case 'Y':
                printf("Enter the node num to delete \n");
                printf("->");
                scanf("%d", &z);
                deleteNode(&head, z);
                printf("\nList after Deletion of %d: \n", z);
                printList_After(head);
                ch='y';
                break;
            default:
                printf("Error!!!!!!!!!!\n\a");
                break;
        }
    }while (ch!='y');
    return 0;
}