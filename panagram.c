#include <stdio.h>
#include <stdbool.h>

bool is_pangram(char *sentence) {
    int alphabet_count[26] = {0}; // an array to count the occurrence of each letter
    int i = 0;

    while (sentence[i] != '\0') {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            // Increase the count of the corresponding letter
            alphabet_count[sentence[i] - 'a']++;
        } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            // Convert uppercase letter to lowercase, then increment the count of the corresponding letter
            alphabet_count[sentence[i] - 'A']++;
        }

        i++;
    }

    // Check if any letter was not found in the sentence
    for (int j = 0; j < 26; j++) {
        if (alphabet_count[j] == 0) {
            return false;
        }
    }

    return true;
}

void print_missing_letters(char *sentence) {
    int alphabet_count[26] = {0}; // Initialize an array to count the occurrence of each letter
    int i = 0;

    while (sentence[i] != '\0') {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            // Increment the count of the corresponding letter
            alphabet_count[sentence[i] - 'a']++;
        } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            // Convert uppercase letter to lowercase, then increment the count of the corresponding letter
            alphabet_count[sentence[i] - 'A']++;
        }

        i++;
    }

    // Print any missing letters
    printf("The following letters are missing from the sentence: ");
    for (int j = 0; j < 26; j++) {
        if (alphabet_count[j] == 0) {
            printf("%c ", 'a' + j);
        }
    }
    printf("\n");
}

int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    if (is_pangram(sentence)) {
        printf("The sentence is a pangram.\n");
    } else {
        print_missing_letters(sentence);
    }

    return 0;
}

