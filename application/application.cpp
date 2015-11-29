// application.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
using namespace std;

bool isPrime(unsigned long n) {
    if (n <= 3) {
        return n > 1;
    } else if (n % 2 == 0 || n % 3 == 0) {
        return false;
    } else {
        for (unsigned short i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}
void fibonacci (unsigned long para_n)
{
	unsigned long x=1;
	unsigned long y=1;
	unsigned long z=0;
	for (unsigned short  i=0;i<para_n;i++)
	{
		z=x+y;
		x=y;
		y=z;
		if (z%3==0)
			cout<<"Buzz"<<endl;
		else if(z%5==0)
			cout<<"Fizz"<<endl;
		else if(isPrime(z))
			cout<<"BuzzFizz"<<endl;
		else
			cout<<z<<endl;

	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	unsigned long para_n = 10;
	fibonacci(para_n);
	return 0;
}

