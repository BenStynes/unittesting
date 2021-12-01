#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;
	
	p.lottery();
	//test size is 6
	assert(p.lotto.size() == 6);
	for (auto num : p.lotto)
	{
			//TEST 1-46
			assert(num >= 1 && num <= 46);

		
	}
	//test duplicates( the way  set works it wont be above 6 if there are dupes)
	assert(p.lotto.size() == 6);
	cin.get();
}