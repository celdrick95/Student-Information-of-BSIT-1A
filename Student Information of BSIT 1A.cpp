#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to compare strings case-insensitively
int strcasecmp_custom(const char *a, const char *b) {
    while (*a && *b) {
        if (tolower((unsigned char)*a) != tolower((unsigned char)*b)) {
            return tolower((unsigned char)*a) - tolower((unsigned char)*b);
        }
        a++;
        b++;
    }
    return *a - *b;
}

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
            printf("4. ALEJO - Andrea Rose Alejo\n");
            printf("5. ANCHETA - Gerald Vargas Ancheta\n");
            printf("6. ARRIOLA - Bianca May Arriola\n");
            printf("7. BUGAO - Jerome Bugao\n");
            printf("8. MADLA - Celdrick Nheld Madla\n");
            printf("9. MARIANO - Ervin Jefferson Masangkay Mariano\n");
            printf("10. SERRANO - Desiree Joy Gacad Serrano\n");
            printf("11. YASON - John Patrick Etcobanez Yason\n");
        }
        else if (strcmp(option, "2") == 0) {
            printf("Enter last name: ");
            scanf("%s", name);

            // Compare input with each last name (case-insensitive)
            if (strcasecmp_custom(name, "Abalos") == 0) {
                printf("\nABALOS\nName: Kylene Bea Abalos\nAge: 18\nGender: Female\nContact: 09100188481\nAddress: Phase 7, Package 10, Block 22, Bagong Silang, Caloocan City\n");
            }
            else if (strcasecmp_custom(name, "Aguibay") == 0) {
                printf("\nAGUIBAY\nName: John Carl Rey Aguibay\nAge: 19\nGender: Male\nContact: 09125158115\nAddress: Phase 7B, Package 10, Block 30, Bagong Silang, Caloocan City\n");
            }
            else if (strcasecmp_custom(name, "Aguilar") == 0) {
                printf("\nAGUILAR\nName: Alleah Didulo Aguilar\nAge: 20\nGender: Female\nContact: 09514417146\nAddress: 1370 Campupot St. Area A, Camarin, Caloocan City\n");
            }
            else if (strcasecmp_custom(name, "Alejo") == 0) {
                printf("\nALEJO\nName: Andrea Rose Alejo\nAge: 19\nGender: Female\nContact: 09953038704\nAddress: 2175 Champaca Ext. Area B, Camarin, Caloocan City\n");
            }
            else if (strcasecmp_custom(name, "Ancheta") == 0) {
                printf("\nANCHETA\nName: Gerald Vargas Ancheta\nAge: 19\nGender: Male\nContact: 09756978626\nAddress: Mahogany St. Area 6, Brgy. 178, Camarin, Caloocan City\n");
            }
            else if (strcasecmp_custom(name, "Arriola") == 0) {
                printf("\nARRIOLA\nName: Bianca May Arriola\nAge: 19\nGender: Female\nContact: 09657261859\nAddress: Ilang-Ilang St., Malaria, Caloocan City\n");
            }
            else if (strcasecmp_custom(name, "Bugao") == 0) {
                printf("\nBUGAO\nName: Jerome Bugao\nAge: 19\nGender: Male\nContact: 09510592998\nAddress: Phase 8A, Package 14, GK USA Hope Village, Bagong Silang, Caloocan City\n");
            }
            else if (strcasecmp_custom(name, "Madla") == 0) {
                printf("\nMADLA\nName: Celdrick Nheld Madla\nAge: 19\nGender: Male\nContact: 09771260924\nAddress: Phase 9, Package 4, Block 37, Lot 16, Bagong Silang, Caloocan City\n");
            }
            else if (strcasecmp_custom(name, "Mariano") == 0) {
                printf("\nMARIANO\nName: Ervin Jefferson Masangkay Mariano\nAge: 18\nGender: Male\nContact: 09568417508\nAddress: Block 8, Lot 4, Phase 1, Tierra Nova Royale 1, Bagumbong, Caloocan City\n");
            }
            else if (strcasecmp_custom(name, "Serrano") == 0) {
                printf("\nSERRANO\nName: Desiree Joy Gacad Serrano\nAge: 19\nGender: Female\nContact: 09272667599\nAddress: 2783 Bueno St. Area C, Camarin, Caloocan City\n");
            }
            else if (strcasecmp_custom(name, "Yason") == 0) {
                printf("\nYASON\nName: John Patrick Etcobanez Yason\nAge: 19\nGender: Male\nContact: 09212072138\nAddress: Phase 7B, Package 3, Block 1, Lot 14, Bagong Silang, Caloocan City\n");
            }
            else {
                printf("\nStudent not found.\n");
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
