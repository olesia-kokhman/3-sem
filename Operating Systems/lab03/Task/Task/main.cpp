#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	double a = atof(argv[1]);
	for (int i = 0; i < 100000; i++) {
		printf("a = %lf\n", a);
	}
	return 0;
}
