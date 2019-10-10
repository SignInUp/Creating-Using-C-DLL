#pragma once

#include <stdbool.h>
#include "point.h"


struct circle {

	unsigned int radius;
	const bool (*is_point_in_circle)(struct point, unsigned int);

};
static bool is_point_in_circle(struct point p, unsigned int radius) {

	if (radius > sqrt(p.x * p.x + p.y * p.y))
		return true;

	return false;
}
