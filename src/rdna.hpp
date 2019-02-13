#include <random>
#include <string>

using namespace std;

string randDNA(int seed, string bases, int n){	
	
	/*Variables used*/
	string result;	
	mt19937 eng1(seed);
	
	uniform_int_distribution<> uniform(0, bases.size() - 1);
	
	for(int counter = 0; counter <= (bases.size() - 1); counter++){
		uniform(eng1);
		result = bases[uniform];
	}/*End For*/
	
	return result;
}/*End randDNA*/
