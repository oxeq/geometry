#include "check_correct.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main()

{
    FILE* data;
    data = fopen("data.txt", "r");
    if (data == NULL) {
        printf("Error, file not found\n");
        return 1;
    }

    Circle* c = (Circle*)malloc(sizeof(*c));

    while (!feof(data)) {
        fgets(figure, 300, data);
        if (feof(data))
            break;

        check_correct(figure, c);
        printf("circle(%.2f %.2f, %.2f)\n", c->x, c->y, c->rad);
    }
    fclose(data);
    return 0;
}
