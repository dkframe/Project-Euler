// Project-Euler.cpp : Defines the entry point for the application.
//

#include "Project-Euler.h"

using namespace std;

void pause() 
{
	std::cout << "Press any key to continue... ";
	int ch = getchar();
	return;
}

int problem16()
{
	int problem16_result = 16;





	return problem16_result;
}

int main()
{
	// Load timing functions
	using std::chrono::high_resolution_clock;
	using std::chrono::duration_cast;
	using std::chrono::duration;
	using std::chrono::milliseconds;

	// Start CPU timings
	auto t0 = high_resolution_clock::now();

	// ########## Problem 16 ##########
	auto t16_i = high_resolution_clock::now();
	int p16 = problem16();
	auto t16_f = high_resolution_clock::now();
	duration<double, std::milli> t16 = t16_f - t16_i;
	std::cout << "------ Problem 16 ------\n";
	std::cout << "Result: " << p16 << "\n";
	std::cout << "Duration: " << t16.count() << "ms\n";

	// Terminate program
	pause();
	return 0;
}
