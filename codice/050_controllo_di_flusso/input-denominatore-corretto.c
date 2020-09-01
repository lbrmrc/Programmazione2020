#include <stdio.h>

main() {
    int denominatore;
    scanf("%d", &denominatore);
    if (denominatore != 0 && 10 / denominatore > 2)
        printf("Verificato\n");
}