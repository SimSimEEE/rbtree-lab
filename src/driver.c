#include "rbtree.h"
#include "rbtree.c"
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


int main(void){
    rbtree *t = new_rbtree();
    rbtree_insert(t, 26);
    rbtree_insert(t, 17);
    rbtree_insert(t, 41);
    rbtree_insert(t, 47);
    rbtree_insert(t, 21); 
    int arr[100] = {0,};
    rbtree_to_array(t,arr,5);
    for(int i = 0; i < 5; i++){
      printf("%d ",arr[i]);
    }
    delete_rbtree(t);
}