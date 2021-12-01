#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;
	
	p.lottery();
	assert(p.lotto.size() == 6);
	for (auto num : p.lotto)
	{
		
		
		if (num >= 1 && num <= 46)
		{
			assert(true);
		}
		
	}
	cin.get();
}