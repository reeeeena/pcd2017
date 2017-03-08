#include<stdio.h>
#include<math.h>
float compute_sin(float x);
float convert_radians(float d);
int main()
{
	float degree,x,sum;
	printf("enter the degree:");
	scanf("%f", &degree);
	x=convert_radians(degree);
	sum=compute_sin(x);
	printf("sin(%f) = %f -----by our method\n",degree, sum);
	printf("sin(%f) = %lf -----by library function\n",degree, sin(x));
	return 0;
}

float compute_sin(float x)
{
	float term, sum, prev, diff;
	int i;
	term=sum=diff=x;
	for(i=3;fabs(term)>0.000001;i=i+2)
	{
		term=(-term*x*x)/(i*(i-1));
		sum=sum+term;
	}
	return sum;
}
	
float convert_radians(float d)
{
	float rad;
	rad=(3.1412/180)*d;
	return rad;
}
