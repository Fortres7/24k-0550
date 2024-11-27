#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char event_name[100];
    struct Date date;
    char location[100];
};

void displayEventDetails(struct Event event) {
    printf("Event Name: %s\n", event.event_name);
    printf("Date: %02d/%02d/%04d\n", event.date.day, event.date.month, event.date.year);
    printf("Location: %s\n\n", event.location);
}

int main() {
    int n;
    printf("Enter the number of events: ");
    scanf("%d", &n);
    struct Event events[n];

    for (int i = 0; i < n; i++) {
        printf("Enter event name: ");
        getchar(); 
        fgets(events[i].event_name, sizeof(events[i].event_name), stdin);
        events[i].event_name[strcspn(events[i].event_name, "\n")] = 0; 

        printf("Enter event date (day month year): ");
        scanf("%d %d %d", &events[i].date.day, &events[i].date.month, &events[i].date.year);

        printf("Enter event location: ");
        getchar(); 
        fgets(events[i].location, sizeof(events[i].location), stdin);
        events[i].location[strcspn(events[i].location, "\n")] = 0; 
    }

    printf("\nEvent Details:\n");
    for (int i = 0; i < n; i++) {
        displayEventDetails(events[i]);
    }

    return 0;
}
