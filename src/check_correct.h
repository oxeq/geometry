#ifndef CIRCLE_H
#define CIRCLE_H
#define L 300

typedef struct circle {
    double x;
    double y;
    double rad;
} Circle;

int check_correct();
char circle_str_x[L];
char circle_str_y[L];
char circle_str_rad[L];
char figure[L];

#endif