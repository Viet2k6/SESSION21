#include <stdio.h>
#include <string.h>
int main() {
    FILE *sourceFile, *destFile;
    char buffer[1024];

    sourceFile = fopen("bt01.txt", "r");
    if (sourceFile == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1;
    }

    destFile = fopen("bt06.txt", "w");
    if (destFile == NULL) {
        printf("Khong the mo file bt06.txt.\n");
        fclose(sourceFile);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), sourceFile)) {
        fputs(buffer, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);
    
    printf("Sao chep noi dung tu bt01.txt sang bt06.txt thanh cong.\n");
    return 0;
}

