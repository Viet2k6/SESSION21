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

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    fputs(str, fptr);
    
    if (fclose(fptr) != 0) {
        printf("Ðong file khong thanh cong.\n");
        return 1;
    }
    printf("Ghi chuoi vao file bt01.txt thanh cong.\n");
    return 0;
}
