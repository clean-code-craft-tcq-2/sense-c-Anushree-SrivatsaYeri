#ifndef STATS_H 
#define STATS_H 
#include <math.h>

struct Stats 
{
	float average;
    float min ;
    float max;
};

extern  Stats compute_statistics(const float* numberset, int setlength);

