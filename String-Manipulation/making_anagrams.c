// A student is taking a cryptography classand has found anagrams to be very useful.
// Two strings are anagrams of each other if the first string's letters can be rearranged to form the second string. 
// In other words, both strings must contain the same exact letters in the same exact frequency. For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.
// The student decides on an encryption scheme that involves two large strings.The encryption is dependent on the minimum number of character deletions required to make the two strings anagrams.Determine this number.
// Given two strings a, and b, that may or may not be of the same length, determine the minimum number of character deletions required to makeand anagrams.
// Any characters can be deleted from either of the strings.

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*
 * Complete the 'makeAnagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING a
 *  2. STRING b
 */

int makeAnagram(char* a, char* b)
{
    int str_len_a = strlen(a);
    int str_len_b = strlen(b);
    int hash_table_a['z' - 'a' + 1] = { 0 };
    int hash_table_b['z' - 'a' + 1] = { 0 };
    int sum = 0;
    // Update hash table with string a characters
    for (int i = 0; i < str_len_a; i++)
    {
        hash_table_a[a[i] - 'a']++;
    }
    // Update hash_table with string b characters
    for (int i = 0; i < str_len_b; i++)
    {
        hash_table_b[b[i] - 'a']++;
    }
    // Get sum of hash table elements
    // These are the elements that need to be removed
    for (int i = 0; i < 26; i++)
    {
        sum += (hash_table_a[i] > hash_table_b[i]) ? (hash_table_a[i] - hash_table_b[i]) : (hash_table_b[i] - hash_table_a[i]);
    }

    return sum;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* a = readline();

    char* b = readline();

    int res = makeAnagram(a, b);

    fprintf(fptr, "%d\n", res);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    }
    else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        }
        else {
            data[data_length] = '\0';
        }
    }

    return data;
}