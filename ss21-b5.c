#include <stdio.h>
#include <string.h>
int main() {
    int i, lines;
    char str[50];
    FILE *fptr;
    fptr = fopen("bt05.txt", "w");
    if (fptr == NULL) {
        printf("file bi loi.\n");
        return 1;
    }
    printf("Moi nhap so dong: ");
    scanf("%d", &lines);
    getchar(); 
    
    for (i = 1; i <= lines; i++) {
        printf("Moi nhap noi dung dong thu %d: ", i);
        fgets(str, sizeof(str), stdin);
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
        fprintf(fptr, "%s\n", str); 
    }

    fclose(fptr);

    printf("\nThong tin tung dong trong file:\n");
    fptr = fopen("bt05.txt", "r");
    if (fptr == NULL) {
        printf("file bi loi.\n");
        return 1;
    }
    for (i = 1; i <= lines; i++) {
        if (fgets(str, sizeof(str), fptr) != NULL) {
            printf("%s", str); 
        }
    }

    fclose(fptr);
    return 0;
}
