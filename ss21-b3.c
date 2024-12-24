#include <stdio.h>
#include <string.h>
int main() {
    FILE *fptr;
    char str[100];
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

    fptr = fopen("bt01.txt", "a");
    if (fptr == NULL) {
        printf("Khong the mo file de ghi them.\n");
        return 1;
    }

    printf("Moi nhap them chuoi: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    
    fputs(str, fptr);
    fclose(fptr);
    
    printf("Du lieu da duoc ghi vao file bt01.txt.\n");
    return 0;
}
