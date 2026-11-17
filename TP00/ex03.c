#include <stdio.h>

int main(void) {
    int cote;
    int perimetre;
    int surface;

    cote = 5;

    perimetre = cote * 4;
    surface = cote * cote;

    printf("Perimetre du carre : %d\n", perimetre);
    printf("Surface du carre : %d\n", surface);

    return 0;
}