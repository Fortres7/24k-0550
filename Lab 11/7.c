#include <stdio.h>
#include <string.h>

#define MAX_DEPARTMENTS 5
#define MAX_NAME_LENGTH 50

struct Company {
    char name[MAX_NAME_LENGTH];
    int year_established;
    char departments[MAX_DEPARTMENTS][MAX_NAME_LENGTH];
};

void displayCompanyDetails(struct Company company) {
    printf("Company Name: %s\n", company.name);
    printf("Year Established: %d\n", company.year_established);
    printf("Departments:\n");
    for (int i = 0; i < MAX_DEPARTMENTS; i++) {
        
        if (strlen(company.departments[i]) > 0) {
            printf("  - %s\n", company.departments[i]);
        }
    }
}

int main() {
    struct Company company;

    printf("Enter company name: ");
    fgets(company.name, MAX_NAME_LENGTH, stdin);
    company.name[strcspn(company.name, "\n")] = 0; 

    printf("Enter year established: ");
    scanf("%d", &company.year_established);
    getchar();

    
    printf("Enter names of up to %d departments (press Enter to stop):\n", MAX_DEPARTMENTS);
    for (int i = 0; i < MAX_DEPARTMENTS; i++) {
        printf("Department %d: ", i + 1);
        fgets(company.departments[i], MAX_NAME_LENGTH, stdin);
        company.departments[i][strcspn(company.departments[i], "\n")] = 0; 
        if (strlen(company.departments[i]) == 0) {
            break; 
        }
    }

    printf("\nCompany Details:\n");
    displayCompanyDetails(company);

    return 0;
}
