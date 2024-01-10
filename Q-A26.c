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
}

int main() {

    struct Employee emp1;

    printf("Enter Employee Number: ");
    scanf("%d", &emp1.empno);
    printf("Enter Employee Name: ");
    scanf("%s", emp1.empname); 
    printf("Enter Address: ");
    scanf(" %[^\n]s", emp1.address);
    printf("Enter Age: ");
    scanf("%d", &emp1.age);

    printf("\nEmployee Information:\n");
    displayEmployee(emp1);

    return 0;
}

