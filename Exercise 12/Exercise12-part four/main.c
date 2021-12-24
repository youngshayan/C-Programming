/*
 * Programmer: Shayan Mansornia     Date:12/22/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 *
 */
#include <stdio.h>
#include <stdlib.h>
struct node {
    int key;
    struct node *left, *right;};

struct node* newNode(int item){
    struct node* temp
      = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node* root){
    if (root != NULL) {
        inorder(root->left);
        printf("\t|%d|\t", root->key);
        inorder(root->right);
    }
}


struct node* insert(struct node* node, int key){

    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}

int main(){
    int a=0;
    struct node* root = NULL;
    printf("Enter the head number of tree\n");
    printf("->");
    scanf("%d",&a);
    root = insert(root, a);
    int b[6];
    printf("\nEnter six other number\n");
    for (int i = 0; i <6 ; ++i) {
        printf("Enter %d number\n",i+1);
        printf("->");
        scanf("%d",&b[i]);
        insert(root, b[i]);
    }

    printf("\nThe right Side of    %d    is bigger and the left Side of    %d    is smaller \n",a,a);
    inorder(root);
    return 0;
}
