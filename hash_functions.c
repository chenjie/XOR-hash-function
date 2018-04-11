#include <stdio.h>

void hash(char *hash_val, long block_size) {
    // Initialize all block_size bytes.
    for(int i = 0; i < block_size; i++) {
        hash_val[i] = '\0';
    }
    // Read the input one character at a time.
    char input_char;
    int index = 0;
    printf("Please enter the input, use [ctrl+d] to terminate: ");
    while(scanf("%c", &input_char) != EOF) {
        hash_val[index] = hash_val[index] ^ input_char;
        if (index < block_size - 1) {
            index++;
        } else if (index == (block_size - 1)) {
            index = 0;
        }
    }
    // Print the hash values to the screen.
    printf("\nThe hash is ");
    for(int m = 0; m < block_size; m++) {
        printf("%hhx ", hash_val[m]);
    }
    printf("\n");
}


int check_hash(const char *hash1, const char *hash2, long block_size) {
    // Compare every element in the array.
    int i;
    for(i = 0; i < block_size; i++) {
        if (hash1[i] != hash2[i]) {
            return i;
        }
    }
    return i;
}
