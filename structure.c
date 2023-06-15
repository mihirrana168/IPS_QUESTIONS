#include <stdio.h>

#define max_customers 100


struct Customer {
    char name[100];
    int account_Number;
    float balance;
};

int get_Num_Customers_func() {
    int num_Customers;
    printf("Enter the number of the customers: ");
    scanf("%d", &num_Customers);
    return num_Customers;
}

void get_Customer_Info_func(struct Customer* customer) {
    printf("Enter the name of the customer: ");
    scanf("%s", customer->name);
    printf("Enter the account number of the customer: ");
    scanf("%d", &(customer->account_Number));
    printf("Enter the balance of the customer: ");
    scanf("%f", &(customer->balance));
}

void print_Customers_With_Low_Balance_func(struct Customer* customers, int num_Customers) {
    printf("the Customers with the balance less than Rs.2000:\n");
    for (int i = 0; i < num_Customers; i++) {
        if (customers[i].balance < 2000.0) {
            printf("%s\n", customers[i].name);
        }
    }
}

void add_Interest_func(struct Customer* customers, int num_Customers) {
    printf("the Customers who received the interest:\n");
    for (int i = 0; i < num_Customers; i++) {
        if (customers[i].balance > 10000.0) {
            float interest = customers[i].balance * 0.05;
            customers[i].balance += interest;
            printf("Name: %s, Account Number: %d, Balance: %.2f\n",
                customers[i].name, customers[i].account_Number, customers[i].balance);
        }
    }
}

int main() {
    int num_Customers = get_Num_Customers_func();
    struct Customer customers[max_customers];

    
    for (int i = 0; i < num_Customers; i++) {
        printf("\nCustomer %d:\n", i + 1);
        get_Customer_Info_func(&customers[i]);
    }

    printf("\n");
    print_Customers_With_Low_Balance_func(customers, num_Customers);

    printf("\n");
    add_Interest_func(customers, num_Customers);

    return 0;
}
