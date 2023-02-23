#include <iostream>
#include <queue>
#include <math.h>




char heroes[5] = "BIAH";

int main()
{

	for (size_t y = 0; y < 4; y++)
	{
		int idx = -1;
		for (size_t i = 0; i < 5; i++)
		{
			idx++;
			if (heroes[idx] == 0)
			{
				idx = 0;
			}
		}

		std::cout << heroes[idx];
		heroes[idx] = 0;
		for (size_t i = idx; i < 4; i++)
		{
			heroes[i] = heroes[i + 1];
		}
	}
	return 0;
}
