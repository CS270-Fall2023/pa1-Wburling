#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int getTokens(char *s, char ***args) {
int strLen = strlen(s); // length of the string s passed in the first argument.
int tokenCount = 0; // amount of tokens
int tokenStart = 0; // start of the string
int tokenEnd = 0; // end of the string

if (strLen == 0) { // if there is no string
    return -1;
}
    *args = malloc(sizeof (char **)); // allocating memory for args
    char** tokenStorage = *args;
if(*args == NULL) { // if memory allocation fails
    return -1;
}
while (tokenStart < strLen)  { // continues until the string has been passed through.
    while (s[tokenEnd] != ' ' && tokenEnd < strLen) {
        tokenEnd++;
    }
    int tokenLength = tokenEnd - tokenStart;
    char* token = malloc(sizeof(char)*(tokenLength + 1)); // the + 1 takes care of the space after each token
    memcpy(token, s + tokenStart, tokenLength);
    token[tokenLength] = '\0';
    tokenStorage[tokenCount] = token;
    tokenCount++;
    tokenStorage = realloc(tokenStorage, sizeof(char**) * (tokenCount + 1)); // realocates the memory to have enough space for the next time the loop is called.
    *args = tokenStorage;

    tokenStart = tokenEnd + 1; // moving the start 1 space ahead of the end of the previous string
    tokenEnd = tokenStart; // moves the end to the start to be pushed 1 space at a time to find the space between tokens.
}
return tokenCount;
}
void displayTokens(char **tokens, int numTokens) {
    printf("Number of Tokens: %d\n", numTokens);
    for (int i = 0; i < numTokens; i++) {
        printf("Token: %d %s\n", i + 1, tokens[i]);
    }
    printf("Token: %d NULL\n", numTokens + 1);
    if (numTokens == -1) {
        printf("There are no Tokens!");
    }

}