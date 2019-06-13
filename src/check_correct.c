#include "check_correct.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#define l 300

int check_correct(char* figure, Circle* c)
{
    int i = 7;
    int j = 0;
    int k = 0;
    char circle[7] = {'c', 'i', 'r', 'c', 'l', 'e', '\0'};

    for (k = 0; circle[k] != '\0'; k++) {
        if (figure[k] != circle[k]) {
            printf("Name Error\n");
            exit(1);
        }
    }

    for (j = 0; figure[i] != ' '; i++, j++) {
        if ((figure[i] < '0' || figure[i] > '9' || figure[i] == ' ')
            && figure[i] != '.' && figure[i] != '-') {
            printf("Incorrect coordinates\n");
            exit(1);
        }

        circle_str_x[j] = figure[i];
    }

    c->x = atof(circle_str_x);
    i++;

    for (j = 0; figure[i] != ','; i++, j++) {
        if ((figure[i] < '0' || figure[i] > '9' || figure[i] == ' ')
            && figure[i] != '.' && figure[i] != '-') {
            printf("Incorrect coordinates\n");
            exit(1);
        }
        circle_str_y[j] = figure[i];
    }
    i += 2;
    c->y = atof(circle_str_y);

    for (j = 0; figure[i] != ')'; i++, j++) {
        if ((figure[i] < '0' || figure[i] > '9' || figure[i] == ' ')
            && figure[i] != '.' && figure[i] != '-') {
            printf("Incorrect coordinates\n");
            exit(1);
        }
        circle_str_rad[j] = figure[i];
    }
    c->rad = atof(circle_str_rad);

    if (c->rad == 0) {
        printf("Incorrect radius set\n");
        return 1;
    }

    return 0;
}
