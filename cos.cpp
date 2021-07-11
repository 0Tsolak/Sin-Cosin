#include "include.hpp"
double cos(double degree)
{
	int prs = 10;
	double answer=0;
	int temp;
	if(int(degree) % 180 != 0 && int(degree) % 90 == 0) { return 0; }
	else { degree *= M_PI / 180; }
	while(degree >= 2 * M_PI) { degree -= 2 * M_PI; }
	while(degree <= (-2) * M_PI) { degree += 2 * M_PI; }
	for(int i = 0; i < prs ; ++i)
	{
		temp = 2*i;
		answer += pow(-1, i) * pow(degree, temp) / factorial(temp);
	}
	return answer;
}
