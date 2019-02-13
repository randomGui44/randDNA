#include <random>
#include <string>

using namespace std;

string randDNA(int seed, string bases, int n){	
	
	/*Variables used*/
	string result;	
	mt19937 eng1(seed);
	
	uniform_int_distribution<int> uniform(0, bases.size() - 1);
	
	/*Loops through the string and randomly organizes it to produce somehting different*/
	for(int counter = 0; counter < (bases.size() - 1); counter++){
		int arrangement = uniform(eng1);
		result += bases[arrangement];
	}/*End For*/
	
	return result;
}/*End randDNA*/
