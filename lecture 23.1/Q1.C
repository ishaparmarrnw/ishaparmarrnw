
#include <stdio.h>

int main() {
    FILE *evenFile = fopen("even.txt", "w");
    FILE *oddFile = fopen("odd.txt", "w");

    if (evenFile==NULL|| oddFile==NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    for (int i = 50; i <= 70; i++) {
        if (i % 2== 0) {
            fprintf(evenFile, "%d,",i);
        } else {
            fprintf(oddFile, "%d,", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);


    return 0;
}
    