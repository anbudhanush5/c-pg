
#include <stdio.h>
#include<conio.h>
void main()
{
using namespace std;

// function to calculate first k digits
// of n^n
long long firstkdigits(int n,int k)
{

//take log10 of n^n. log10(n^n) = n*log10(n)
long double product = n * log10(n);

// We now try to separate the decimal and
// integral part of the /product. The floor
// function returns the smallest integer
// less than or equal to the argument. So in
// this case, product - floor(product) will
// give us the decimal part of product
long double decimal_part = product - floor(product);

// we now exponentiate this back by raising 10
// to the power of decimal part
decimal_part = pow(10, decimal_part);

// We now try to find the power of 10 by which
// we will have to multiply the decimal part to
// obtain our final answer
long long digits = pow(10, k - 1), i = 0;

return decimal_part * digits;
}

// driver function
int main()
{
int n = 1450;
int k = 6;
cout << firstkdigits(n, k);
getch();
}
