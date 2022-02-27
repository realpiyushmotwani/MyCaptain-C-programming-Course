#include <stdio.h>
struct emloyee {
    int empno;
    char empname[50];
    char department[50];
    float salary;
} s[20];

int main() {
    int i,n;
    printf("Enter number of employees ");
    scanf("%d", &n);
    printf("Enter information of employees:\n");

    // storing information
    for (i = 0; i < n; i++) {
        printf("\nFor employee number%d,\n", i+1);
        printf("Enter name: ");
        scanf("%s", s[i].empname);
        printf("Enter department: ");
        scanf("%s", s[i].department);
        printf("Enter salary: ");
        scanf("%f", &s[i].salary);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < n; i++) {
        printf("\nEmployee number%d,\n", i+1);
        printf("Name: %s\n", s[i].empname);
        printf("Department: %s\n", s[i].department);
        printf("Salary: %f\n", &s[i].salary);
    }
    return 0;
}
