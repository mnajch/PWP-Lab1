#include "LaborkaConfig.h"
#include "trygonometria.h"

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include <math.h>
#endif

int main()
{
	double wynik = 0;
#ifdef USE_TRIGONOMETRY_DEGREE
wynik = cos_degree(45.0);
#else
const double pi = 3.1415926535897;
wynik = cos(pi/4.0);
#endif
}