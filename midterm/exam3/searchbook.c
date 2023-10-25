#include <stdio.h>

int main() {

        char c;

        printf("input name of book ) ");
        scanf("%s", c);

        if (c == 0) {
                printf("");
        }
        else if (c == 1) {
                printf("not found book name : '%s'", c);
        }

        return 0;
}

