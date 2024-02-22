#include <iostream>
using namespace std;

int fib(int n){
	if ( n <= 1) return n;//condicion base
	else
		return fib(n-1)+fib(n-2);//condicion recursiva
}

int main(int argc, char *argv[]) {
	const int NUM=8;
	cout<<"Fibonaci de : "<<NUM<<" = "<<fib(NUM)<<endl;
	
	return 0;
}

