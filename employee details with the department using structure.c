#include <stdio.h>
struct Department {
    int departmentID;
    char departmentName[50];
};
struct Employee {
    int employeeID;
    char employeeName[50];
    struct Department dept;
};

int main() {
    struct Employee emp;
    struct Employee *ptr = &emp;
    printf("Enter Employee ID: ");
    scanf("%d", &ptr->employeeID);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", ptr->employeeName);
    printf("Enter Department ID: ");
    scanf("%d", &ptr->dept.departmentID);
    printf("Enter Department Name: ");
    scanf(" %[^\n]", ptr->dept.departmentName);
    printf("\n--- Employee Details ---\n");
    printf("Employee ID   : %d\n", ptr->employeeID);
    printf("Employee Name : %s\n", ptr->employeeName);
    printf("Department ID : %d\n", ptr->dept.departmentID);
    printf("Department Name: %s\n", ptr->dept.departmentName);

    return 0;
}