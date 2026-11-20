#include <stdio.h>

int leet(char* wort) {
    int hits = 0;
    for (int i = 0; wort[i] != '\0' ;i++) {
        if (wort[i] == 'e' || wort[i] == 'E') {
            wort[i] = '3';
            hits++;
        }
    }
    return hits;
}

int main(int argc, char* argv[]) {

    int vergleich = leet(argv[1]); 

    printf("vergleich: %s", argv[1]);
    printf("anzahl: %d", vergleich);

    return 0;
}