#include <stdio.h>
#include <stdlib.h>

//note that declaring the root here allows you to update
//the struct and pick up the reference in other functions
struct node{
  int val;
  struct node *next;
};



struct node *new_node(int n, struct node *prv_node){
  
  //generate a new node structure
  struct node *new_node = malloc(sizeof(struct node));
  new_node->next = NULL;
  new_node->val = n; //our value!
  
  prv_node->next = new_node;

  return new_node;

};

//This generates a new node_list from the template array
struct node *new_list(int ta[], int n){
  //generates a list of new nodes

  //ta is array of ints
  //n is the length of the array
 
  struct node *root = malloc(sizeof(struct node));
 
  //if we don't get any data, pass back the struct 
  //otherwise, 
  if (n == 0){
   return root;
  }
  
  struct node *prv_node = root;

  int i;
  for(i = 0; i < n; i++){
    if (i ==0){
      //for the first element we want
      //to use the root pointer
      root->val = ta[i];
      root->next = NULL;
      prv_node = root;
    }else{
      //we want to generate a new node
      prv_node = new_node(ta[i], prv_node);
    }
  }
  return root;
};


void disp_list( struct node *root_elem){
  //starts at the root, 
  //runs to the end
  //prints each consecuetive element
  while(root_elem->next != NULL){
  
    printf("%d-->", root_elem->val);
    root_elem= root_elem->next;
  }
  printf("%d-|\n", (root_elem->val));
};



struct node *get_insertion_point(struct node *root, int comp_val){

  struct node *prev_val;

  while( (root->val < comp_val) && root != NULL ){  
    prev_val = root;
    if(root->next == NULL){
      return prev_val;
    }
    root = root->next;
  }
  return prev_val;
}

int main(){

    

    int nums[15] = {10,5,2,1,6,7,3,8,9,4, 100, 99, 55, 44, 2};
     

    struct node *unsorted = new_list(nums, 15);
    disp_list(unsorted);

    struct node *sorted = NULL;
    struct node *sorting_elem = NULL;
    struct node *placeholder = NULL;

    //the first element of unsorted
    //is always inserted at the beginning
    //of the new list
    sorted = unsorted;
    unsorted = unsorted->next;
    sorted->next = NULL;  //tie off the pop
    
    disp_list(sorted);
    
    while(unsorted!=NULL){
      //pop the node
      sorting_elem = unsorted;
      unsorted = unsorted->next;
      sorting_elem->next = NULL;

      if(sorted->val >= sorting_elem->val){
        //insert at beginning of list
        sorting_elem ->next = sorted;
        sorted = sorting_elem;
      }else{
        placeholder = get_insertion_point(sorted, sorting_elem->val);
        sorting_elem->next = placeholder->next;
        
        placeholder->next = sorting_elem;
      }
      disp_list(sorted);
    }

    printf("complete!\n");
    return 0;
}

