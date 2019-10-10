#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "point.h"
#include "circle.h"


double find_pi(unsigned int radius, unsigned int points_to_check){

    srand(time(NULL));

    struct circle circle = {radius, is_point_in_circle};

    unsigned int icCircle = 0;

    for (unsigned int i = 0; i < points_to_check; ++i){

        struct point point = {(rand() % circle.radius + 1), (rand() % circle.radius + 1)};

        if (circle.is_point_in_circle(point, circle.radius)){
            icCircle++;
        }
    }

    double pi = (4.0 * ( (double)icCircle / (double)points_to_check) );
    return pi;
}

