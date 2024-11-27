#include <stdio.h>
#include <stdlib.h>

struct Address {
    char city[50];
    char zip_code[10];
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Address address;
};

void writeEmployeesToFile(const char *filename, struct Employee *employees, int count) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(employees, sizeof(struct Employee), count, file);
    fclose(file);
}

void readEmployeesFromFile(const char *filename) {
    struct Employee employee;
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    while (fread(&employee, sizeof(struct Employee), 1, file)) {
        printf("Name: %s\n", employee.name);
        printf("ID: %d\n", employee.id);
        printf("Salary: %.2f\n", employee.salary);
        printf("City: %s\n", employee.address.city);
        printf("Zip Code: %s\n\n", employee.address.zip_code);
    }
    fclose(file);
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee *employees = malloc(n * sizeof(struct Employee));
    for (int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", employees[i].name);
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
        printf("Enter city: ");
        scanf("%s", employees[i].address.city);
        printf("Enter zip code: ");
        scanf("%s", employees[i].address.zip_code);
    }
    writeEmployeesToFile("employees.dat", employees, n);
    free(employees);
    readEmployeesFromFile("employees.dat");
    return 0;
}
