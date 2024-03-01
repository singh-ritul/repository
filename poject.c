#include <stdio.h>
#include <stdbool.h>

#define max_seats 10

int busNumber;
//int max_seats=10;
bool seats[max_seats];

void Bus_initialization() {
    for (int i = 0; i < max_seats; i++) {
        seats[i] = false;
    }
}

void displaySeats() {
    printf("Bus Number: %d\n", busNumber);
    printf("Available Seats:\n");

    for (int i = 0; i < max_seats; i++) {
        if (!seats[i]) {
            printf("%d ", i + 1);
        }
    }

    printf("\n");
}

void Seat_reserve(int seatNumber) {
    if (seatNumber < 1 || seatNumber > max_seats) {
        printf("Invalid seat number!\n");
        return;
    }

    if (seats[seatNumber - 1]) {
        printf("Seat %d is already reserved.\n", seatNumber);
    } else {
        seats[seatNumber - 1] = true;
        printf("Seat %d reserved successfully.\n", seatNumber);
    }
}

void cancelReservation(int seatNumber) {
    if (seatNumber < 1 || seatNumber > max_seats) {
        printf("Invalid seat number! Please Enter valid seat number.\n");
        return;
    }

    if (seats[seatNumber - 1]) {
        seats[seatNumber - 1] = false;
        printf("Reservation for seat %d cancelled successfully.\n", seatNumber);
    } else {
        printf("Seat %d is not reserved.\n", seatNumber);
    }
}

int main() {
    int choice, seatNumber;

    printf("Enter the bus number: ");
    scanf("%d", &busNumber);

    Bus_initialization();

    do {
        printf("\n");
        printf("1. Display Available Seats\n");
        printf("2. Reserve a Seat\n");
        printf("3. Cancel Reservation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displaySeats();
                break;
            case 2:
                printf("Enter the seat number to reserve: ");
                scanf("%d", &seatNumber);
                Seat_reserve(seatNumber);
                break;
            case 3:
                printf("Enter the seat number to cancel reservation: ");
                scanf("%d", &seatNumber);
                cancelReservation(seatNumber);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}