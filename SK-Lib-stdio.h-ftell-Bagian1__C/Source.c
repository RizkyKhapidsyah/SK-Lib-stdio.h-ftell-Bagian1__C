#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* pFile;
    long size;

    pFile = fopen("fileSaya.txt", "rb");

    if (pFile == NULL) {
        perror("Error opening file");
    } else {
        fseek(pFile, 0, SEEK_END);   // non-portable
        size = ftell(pFile);
        fclose(pFile);
        printf("Size of fileSaya.txt: %ld bytes.\n", size);
    }

    _getch();
    return 0;
}