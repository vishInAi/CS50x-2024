#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool validate_card(char card_number[]) {
    int len = strlen(card_number);
    int sum1 = 0, sum2 = 0;

    // Luhn algorithm modification
    for (int i = len - 1; i >= 0; i--) {
        int digit = card_number[i] - '0';
        if ((len - i) % 2 == 0) {
            int doubled = digit * 2;
            sum1 += doubled;
        } else {
            sum2 += digit;
        }
    }

    int total_sum = sum1 + sum2;
    if (total_sum % 10 != 0) {
        return false;
    }

    // Check card type
    if ((len == 15 && card_number[0] == '3' && (card_number[1] == '4' || card_number[1] == '7'))) {
        printf("Card Type: American Express\n");
    } else if ((len == 16 && card_number[0] == '5' && (card_number[1] >= '1' && card_number[1] <= '5'))) {
        printf("Card Type: MasterCard\n");
    } else if ((len == 13 || len == 16) && card_number[0] == '4') {
        printf("Card Type: Visa\n");
    } else {
        printf("Invalid card number\n");
        return false;
    }

    return true;
}

int main() {
    char card_number[20];
    printf("Enter card number: ");
    scanf("%s", card_number);

    if (validate_card(card_number)) {
        printf("Card is valid\n");
    } else {
        printf("Card is invalid\n");
    }

    return 0;
}
