#include <stdio.h>
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void displayEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
    printf("\n");
}

int main() {
	int i;
    struct Employee employees[5];

    for (i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf("%s", employees[i].empname);
        printf("Address: ");
        scanf(" %[^\n]s", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    printf("\nEmployee Information:\n");
    for (i = 0; i < 5; i++) {
        printf("Details for Employee %d:\n", i + 1);
        displayEmployee(employees[i]);
    }

    return 0;
}

