// NAME: vyomesh tatineni
// U11247877
// program helps staff memeber to enter the information about the available t-shirt into the store database
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//////////////////////
// data definitions //
//////////////////////

#define ORG_NAME_LEN 50
#define SIZE_LEN 3

struct tshirt {
  char org_name[ORG_NAME_LEN + 1]; // organization name length is of 51 characters
  char size[SIZE_LEN + 1]; // size length is of 4 characters
  double price;
  int quantity;
  struct tshirt *next; // pointer to the next tshirt
};

/////////////////////////
// function prototypes //
/////////////////////////

struct tshirt* add_to_inventory(struct tshirt* inventory); // function: adds the tshirt to the inventory
void search_by_organization(struct tshirt* inventory);
void search_by_size(struct tshirt* inventory);
void print_inventory(struct tshirt* inventory);
void clear_inventory(struct tshirt* inventory);
int read_line(char str[], int n);
void help();

/**********************************************************
 * main: Prompts the user to enter an operation code,     *
 *       then calls a function to perform the requested   *
 *       action. Repeats until the user enters the        *
 *       command 'q'. Prints an error message if the user *
 *       enters an illegal code.                          *
 **********************************************************/
int main() {
  char code; //is a code that the user chooses

  struct tshirt *inventory = NULL; // pointer to the variable inventory, current points at NULL

  help(); //cannot have any defect, there are only print statements
  printf("\n");

  for (;;) { //infinite loop
    // read operation code
    printf("Enter operation code: ");
    scanf("%c", &code);
    while (getchar() != '\n'); /* Discards the extra characters that the user may have input */

    // run operation
    switch (code) {
    case 'a':
      inventory = add_to_inventory(inventory);
      break;
    case 'h':
      help();
      break;
    case 'o':
      search_by_organization(inventory);
      break;
    case 's':
      search_by_size(inventory);
      break;
    case 'p':
      print_inventory(inventory);
      break;
    case 'q':
      clear_inventory(inventory);
      return 0;
    default:
      printf("Illegal operation code!\n");
    }
    printf("\n");
  }
}

//////////////////////////
// function definitions //
//////////////////////////

void help() {
  printf("List of operation codes:\n");
  printf("\t'a' for adding a t-shirt to the inventory;\n");
  printf("\t'h' for help;\n");
  printf("\t'o' for searching t-shirts by organization;\n");
  printf("\t's' for searching t-shirts by size;\n");
  printf("\t'p' for printing the inventory;\n");
  printf("\t'q' for quit.\n");
}

struct tshirt* add_to_inventory(struct tshirt* inventory) {

  struct tshirt* new_node;
  new_node = malloc(sizeof(struct tshirt));

  if (new_node == NULL) {
    printf("Out of memory");
    return inventory;
  }

  printf("enter student organization name: ");
  read_line(new_node->org_name, 51); // *new_node.org_name

  printf("enter t-shirt size: ");
  read_line(new_node->size, 4); // *new_node.size

  struct tshirt *cur, *prev;
  for (cur = inventory, prev = NULL; cur != NULL && new_node->org_name > cur->org_name && new_node->size > cur->size; cur = cur->next); //This loop is to find the position where the new node should be inserted
  if (cur != NULL && cur->org_name == cur->org_name && new_node->size == cur->size) {
    printf("tshirt already exists.\n");
    free(new_node);
    return inventory;
  }
  printf("Enter the price: ");
  scanf("%lf", &new_node->price);
  printf("Enter the quantity: ");
  scanf("%d", &new_node->quantity);

  new_node->next = cur;
  if (prev == NULL)
    return new_node;
  else {
    prev->next = new_node;
    return inventory;
  }
}

void search_by_organization(struct tshirt *inventory) {
  struct tshirt *x = (struct tshirt *)malloc(sizeof(struct tshirt)); // creating a new node
  struct tshirt *p;                                                  // node for iteration
  int flag = 0;                                                      // flag variable to print message

  if (x == NULL) {
    printf("malloc failed in search_by_organization\n"); // checking if malloc working properly
  } else {
    printf("Enter the organization name:");
    read_line(x->org_name, ORG_NAME_LEN + 1);
    for (p = inventory; p != NULL; p = p->next) {
      if (strcmp(p->org_name, x->org_name) == 0) {
        printf("|----------------------------------------------------|-----|-------|------|\n");
        printf("| Student organization                               | Sz. | Price | Qty. |\n");
        printf("|----------------------------------------------------|-----|-------|------|\n");
        printf("| %-50s | %-3s | %5.2f | %4d |\n", p->org_name, p->size, p->price, p->quantity);
        printf("|----------------------------------------------------|-----|-------|------|\n");
        flag = 1;
      }
    }
    if (flag == 0) {
      printf("No such tshirt exists");
    }
  }
}

void search_by_size(struct tshirt *inventory) {
  struct tshirt *x = (struct tshirt *)malloc(sizeof(struct tshirt)); // creating a new node
  struct tshirt *p;                                                  // node for iteration
  int flag = 0;                                                      // flag variable to print message
  if (x == NULL) {                                                   // checking if malloc working properly
    printf("malloc failed in search_by_size\n");
  } else {
    printf("Enter the size:");
    read_line(x->size, SIZE_LEN + 1);
    for (p = inventory; p != NULL; p = p->next) {
      if (strcmp(p->size, x->size) == 0) {
        printf("|----------------------------------------------------|-----|-------|------|\n");
        printf("| Student organization                               | Sz. | Price | Qty. |\n");
        printf("|----------------------------------------------------|-----|-------|------|\n");
        printf("| %-50s | %-3s | %5.2f | %4d |\n", p->org_name, p->size, p->price, p->quantity);
        printf("|----------------------------------------------------|-----|-------|------|\n");
        flag = 1;
      }
    }
    if (flag == 0) {
      printf("No such tshirt exists");
    }
  }
}

void print_inventory(struct tshirt *inventory) {

  struct tshirt *p; // node for iteration
  p = inventory;
  if (p == NULL) {
    printf("No tshirt found!");
  }
  // loop to print all the values
  else {
    printf("|----------------------------------------------------|-----|-------|------|\n");
    printf("| Student organization                               | Sz. | Price | Qty. |\n");
    printf("|----------------------------------------------------|-----|-------|------|\n");
    for (p = inventory; p != NULL; p = p->next) {
      printf("| %-50s | %-3s | %5.2f | %4d |\n", p->org_name, p->size, p->price, p->quantity);
    }
    printf("|----------------------------------------------------|-----|-------|------|\n");
  }
}

void clear_inventory(struct tshirt *inventory) {
  struct tshirt *lp = inventory;
  struct tshirt *temp = NULL;
  while (lp != NULL) {
    temp = lp;
    lp = lp->next;
    free(temp);
  }
}

int read_line(char str[], int n) {
  int ch, i = 0;

  while(isspace(ch = getchar()));
    
  str[i++] = ch; // value of i is 1
  while((ch = getchar()) != '\n') 
    if(i < n)
      str[i++] = ch; //stores ch in str[i = 1], and i is incremented, done until ch is not '\n' and i is less than n

  str[i] = '\0'; // last character is made null
  return i;
}