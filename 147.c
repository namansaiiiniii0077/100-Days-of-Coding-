//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/


#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp1, emp2;

    
    strcpy(emp1.name, "Naman");
    emp1.id = 101;
    emp1.salary = 55000.50;

    
    FILE *fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&emp1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fread(&emp2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    printf("Employee Details (Read from File):\n");
    printf("Name: %s\n", emp2.name);
    printf("ID: %d\n", emp2.id);
    printf("Salary: %.2f\n", emp2.salary);

    return 0;
}