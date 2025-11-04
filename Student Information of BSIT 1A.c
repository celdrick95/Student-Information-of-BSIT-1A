#include <stdio.h>
#include <string.h>

int main() {
    char option[10];
    char name[50];

    while (1) {
        printf("\n=== BSIT-1A Student Information ===\n");
        printf("1 - Show all list\n");
        printf("2 - Search by last name\n");
        printf("3 - Exit\n");
        printf("Enter choice: ");
        scanf("%s", option);

        if (strcmp(option, "1") == 0) {
            printf("\nList of students:\n");
            printf("1. ABALOS - Kylene Bea Abalos\n");
            printf("2. AGUIBAY - John Carl Rey Aguibay\n");
            printf("3. AGUILAR - Alleah Didulo Aguilar\n");
        }
        else if (strcmp(option, "2") == 0) {
            printf("Enter last name: ");
            scanf("%s", name);

            if (strcmp(name, "Abalos") == 0 || strcmp(name, "ABALOS") == 0) {
                printf("ABALOS\nName: Kylene Bea Abalos\nAge: 18\nGender: Female\nContact: 09100188481\n");
            }
            else if (strcmp(name, "Aguibay") == 0 || strcmp(name, "AGUIBAY") == 0) {
                printf("AGUIBAY\nName: John Carl Rey Aguibay\nAge: 19\nGender: Male\nContact: 09125158115\n");
            }
            else {
                printf("Student not found.\n");
            }
        }
        else if (strcmp(option, "3") == 0) {
            printf("Exiting program. Goodbye!\n");
            break;
        }
        else {
            printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}
