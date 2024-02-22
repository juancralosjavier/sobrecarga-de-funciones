#include <iostream>
using namespace std;
int factorial ( int n){
	int fact =1;
	for	(int i=1;i<=n;i++)
		fact =i*fact;
	return fact;
}
int main(int argc, char *argv[]) {
	cout<<"factorial : "<<factorial(5)<<endl;
	
	return 0;
}

