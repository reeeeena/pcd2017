#include <stdio.h>
struct complex
{
	float real;
	float imaginary;
};

        void printcomplex(struct complex x)
{
        printf("%f+i%f\n",x.real, x.imaginary);
}
struct complex get_complex()
{
struct complex c;
	printf("enter real and imaginary number");
	scanf("%f%f", &c.real, &c.imaginary);
	return c;
}
struct complex_add(struct complex a, struct complex b)
{
	struct complex c;
	c.real = a.real + b.real;
	c.imaginary = a.imaginary + b.imaginary;
	return c;
}
	
	int main()
{
	struct complex a,b,c;
	a = get_complex();
	b = get_complex();
	c = complex_add(a,b);
	printcomplex(c);
	return 0;
}
