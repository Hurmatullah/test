#include <iostream>
#include "omp.h"
using namespace std;

/*
	Acceleration Dependency using Amdals Law
*/
int main() {

	// T - Total time of serial exection 
	// B - Total time of none parallelizable (input of B should be from range (0 - 1))
	// N - Number of threads
	// Amdahl`s Law formula: Speedup = 1/B+(1-B/N)
	double T, B;
	double speedUp;
	int nthreads, N, i;

	cout << "Please enter percentage of none parallelizable part:";
	cin >> B;
	cout << "Please enter numbe of threads:";
	cin >> N;

	for (i = 1; i <= N; i++)
	{
		speedUp = 1 / (B + ((1 - B) / i));
		cout << "Speed based on adding thread = " << speedUp << endl;
	}

	return 0;

}
