#include "functions.h"
#include "stdio.h"
int main() {
    char **arrayOfTokens, str[] = "ls -l file";
    int numberOfToken = getTokens(str, &arrayOfTokens);
    printf("%s", (*arrayOfTokens)[0]);
    printf("%d", numberOfToken);
}