#include "Production.h"

void Production::lottery()
{
	bool valid = false;
	int j = 0;

	while (lotto.size() < 6)
	{

		
			std::cout << "Please enter Number " << lotto.size() + 1 << std::endl;


			std::cin >> j;

			for (auto num : lotto)
			{
				if (j >= 1 && j <= 46)
				{
					if (num != j)
					{
						valid = true;

					}
					else
					{
						std::cout << "number already in" << std::endl;

					}
				}
				else {
					std::cout << "Please insert a number that is 1-46" << std::endl;

				}

			}

		
		lotto.insert(j);
	}
		
	std::cout << "the lotto is  ";
		for (auto num : lotto)
		{
			std::cout << " " << num;
			std::cin;
		}
		system("pause");
}

  

	
