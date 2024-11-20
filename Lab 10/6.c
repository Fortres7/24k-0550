#include <stdio.h>
#include <string.h>

#define MAX_PKGS 100

typedef struct {
    char name[100];
    char dest[100];
    int dur;
    double cost;
    int seats;
} Pkg;

void displayPkgs(Pkg pkgs[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Dest: %s, Dur: %d days, Cost: %.2f, Seats: %d\n", 
               pkgs[i].name, pkgs[i].dest, pkgs[i].dur, pkgs[i].cost, pkgs[i].seats);
    }
}

void bookPkg(Pkg pkgs[], int n, char name[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(pkgs[i].name, name) == 0) {
            if (pkgs[i].seats > 0) {
                pkgs[i].seats--;
                printf("Booking successful for %s. Remaining seats: %d\n", pkgs[i].name, pkgs[i].seats);
            } else {
                printf("No seats available for %s.\n", pkgs[i].name);
            }
            return;
        }
    }
    printf("Package not found.\n");
}

int main() {
    Pkg pkgs[MAX_PKGS];
    int n = 0, ch;
    char input[100];

    while (1) {
        printf("\n1. Add Package\n2. Display Packages\n3. Book Package\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        getchar();

        if (ch == 1) {
            if (n < MAX_PKGS) {
                printf("Enter package name: ");
                fgets(pkgs[n].name, 100, stdin);
                pkgs[n].name[strcspn(pkgs[n].name, "\n")] = '\0';

                printf("Enter destination: ");
                fgets(pkgs[n].dest, 100, stdin);
                pkgs[n].dest[strcspn(pkgs[n].dest, "\n")] = '\0';

                printf("Enter duration (in days): ");
                scanf("%d", &pkgs[n].dur);

                printf("Enter cost: ");
                scanf("%lf", &pkgs[n].cost);

                printf("Enter number of seats: ");
                scanf("%d", &pkgs[n].seats);
                getchar();

                n++;
            } else {
                printf("No space for more packages.\n");
            }
        } else if (ch == 2) {
            displayPkgs(pkgs, n);
        } else if (ch == 3) {
            printf("Enter package name to book: ");
            fgets(input, 100, stdin);
            input[strcspn(input, "\n")] = '\0';
            bookPkg(pkgs, n, input);
        } else if (ch == 4) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
