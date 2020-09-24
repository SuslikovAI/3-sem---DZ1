#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* next;
};

int main() {
    int n;
    int v;
    scanf("%d", &n);

    struct node* root = NULL;

    for (int i = 0; i < n; ++i) {
        struct node* t = malloc(sizeof(struct node));
        scanf("%d", &v);
        t->val = v;
        t->next = root;
        root = t;
    }

    start:   
    printf("\n");
    printf("1 - PUSH\n");
    printf("2 - POP \n");
    printf("3- ViVod all\n");
    printf("Enter - ");
   
    int z;
    scanf("%d", &z);

    if (z == 1) {
        printf("\n");
        printf("Enter int - ");
        struct node* t = malloc(sizeof(struct node));
        scanf("%d", &v);
        t->val = v;
        t->next = root;
        root = t; n = n + 1;
        goto start;
    }

    if (z == 2) {
        if(n-1 == 0){
            printf("NO ELEMET: ERROR\n");
            goto start;
        }
        struct node* t = root;
        root = root->next;
        free(t); 
        n = n - 1;
        goto start;
    }

    if (z == 3) {
        v = 0; 
        printf("\n");
        for (int i = 0; i < n; ++i) {
            printf("%d\n", root->val);
            struct node* t = root;
            root = root->next;
            free(t);
        }

        return 0;
    }
    printf("Error go to back!!!\n"); 
    goto start;
}
