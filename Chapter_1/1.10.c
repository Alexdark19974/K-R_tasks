#include <stdio.h>
int main(void)
{
    int c;

    while((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("\\b");
        if (c == '\\')
            printf("\\\\");
        if (c == ' ')
            printf("\' \'");
    }
}
