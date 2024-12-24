#include <stdio.h>
#include <string.h>
int main() {
    FILE *fptr;
    fptr = fopen("bt01.txt", "w");
    if (fptr == NULL) {
        printf("file bi loi.\n");
        return 1;
    }
    char str[100];
    printf("Moi nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    
    fputs(str, fptr);
    fclose(fptr);

    fptr = fopen("bt01.txt", "r");
    if (fptr == NULL) {
        printf("file bi loi.\n");
        return 1;
    }

    int word = fgetc(fptr);
    if (word != EOF) {
        printf("Ky tu dau tien: %c\n", word);
    } else {
        printf("File trong, khong co ky tu de doc.\n");
    }
    fclose(fptr);
    return 0;
}
