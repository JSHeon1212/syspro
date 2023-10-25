#include <stdio.h>

int main(void) {

        FILE* fs = NULL;
        char buf1[100], buf2[100];

        gets(buf1);

        fopen_s("out.txt", "r");
        fputs(buf1, fp);
        fclose(fp);

        if (fp == NULL) {
                exit(1);
        }

        char str[100];
        strcpy_s(str, 100, fgets(buf2, 100, fp));
        printf("%s : %s\n", str, buf2);
        fclose(fp);

        return 0;

