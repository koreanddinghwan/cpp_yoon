#include <iostream>
#include <string.h>

using std::cout;
using std::cin;
using std::endl;

typedef struct customer
{
	int accnum;
	int deposit;
	char *name;
} cus;

void make_deposit(cus *data, int *status);
void insert_deposit(cus *data);
void show_menu();
void withdraw_deposit(cus *data);
void inquiry_deposit(cus *data);

