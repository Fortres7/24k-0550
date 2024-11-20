#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct {
    char title[100];
    char author[100];
    int pub_year;
    double price;
} Book;

void displayBooks(Book books[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Title: %s, Author: %s, Year: %d, Price: %.2f\n", 
               books[i].title, books[i].author, books[i].pub_year, books[i].price);
    }
}

void searchByTitle(Book books[], int count, char title[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Found - Title: %s, Author: %s, Year: %d, Price: %.2f\n", 
                   books[i].title, books[i].author, books[i].pub_year, books[i].price);
            return;
        }
    }
    printf("Book with title '%s' not found.\n", title);
}

void listByAuthor(Book books[], int count, char author[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("Title: %s, Year: %d, Price: %.2f\n", 
                   books[i].title, books[i].pub_year, books[i].price);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found by author '%s'.\n", author);
    }
}

int main() {
    Book books[MAX_BOOKS];
    int count = 0;
    int choice;
    char input[100];

    while (1) {
        printf("\n1. Add Book\n2. Display All Books\n3. Search by Title\n4. List by Author\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            if (count < MAX_BOOKS) {
                printf("Enter title: ");
                fgets(books[count].title, 100, stdin);
                books[count].title[strcspn(books[count].title, "\n")] = '\0';

                printf("Enter author: ");
                fgets(books[count].author, 100, stdin);
                books[count].author[strcspn(books[count].author, "\n")] = '\0';

                printf("Enter publication year: ");
                scanf("%d", &books[count].pub_year);

                printf("Enter price: ");
                scanf("%lf", &books[count].price);
                getchar();

                count++;
            } else {
                printf("Library is full.\n");
            }
        } else if (choice == 2) {
            displayBooks(books, count);
        } else if (choice == 3) {
            printf("Enter title to search: ");
            fgets(input, 100, stdin);
            input[strcspn(input, "\n")] = '\0';
            searchByTitle(books, count, input);
        } else if (choice == 4) {
            printf("Enter author to list books: ");
            fgets(input, 100, stdin);
            input[strcspn(input, "\n")] = '\0';
            listByAuthor(books, count, input);
        } else if (choice == 5) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
