#include <stdio.h>
#include <string.h>
int main() {
    FILE *fptr;
    char str[100], firstLine[50];
    fptr = fopen("bt01.txt", "w");
    if (fptr == NULL) {
        printf("file bi loi.\n");
        return 1;
    }

    printf("Moi nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    fputs(str, fptr);
    fclose(fptr);

    fptr = fopen("bt01.txt", "r");
    if (fptr == NULL) {
        printf("file bi loi.\n");
        return 1;
    }

    if (fgets(firstLine, sizeof(firstLine), fptr) != NULL) {
        printf("Dong dau tien trong file: %s\n", firstLine);
    } else {
        printf("Khong the doc dong dau tien trong file.\n");
    }

    fclose(fptr);
    return 0;
}
