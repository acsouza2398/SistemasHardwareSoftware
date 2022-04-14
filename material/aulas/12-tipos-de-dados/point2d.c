#include "point2d.h"
#include <stdlib.h>

struct _p {
    double x, y;
};

typedef struct _p Point2D;


Point2D *point2D_new(double x, double y) {
    Point2D *new = malloc(sizeof(Point2D));

    new->x = x;
    new->y = y;

    return new;
}


void point2D_destroy(Point2D *p) {
    void free(void *p);
    
}

double point2D_get_x(Point2D *p) {
    return p->x;
}

double point2D_get_y(Point2D *p) {
    return p->y;
}

Point2D *point2D_add(Point2D *p1, Point2D *p2) {
    Point2D *add = malloc(sizeof(Point2D));

    double x_a = p1->x + p2->x;
    double y_a = p1->y + p2->y;

    add->x = x_a;
    add->y = y_a;

    return add;
}

double point2D_theta(Point2D *p1, Point2D *p2) {
    double x_m = p2->x - p1->x;
    double y_m = p2->y - p1->y;

    double m = y_m/x_m;

    return m;
}

Point2D *point2D_scale(Point2D *p, double s) {
    Point2D *mult = malloc(sizeof(Point2D));

    double x_m = p->x*s;
    double y_m = p->y*s;

    mult->x = x_m;
    mult->y = y_m;

    return mult;
}

