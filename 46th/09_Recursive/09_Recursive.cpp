// 09_Recursive.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


int map[4][6] =
{
	0,0,0,0,0,0,
	1,1,1,0,1,1,
	0,1,0,0,0,1,
	0,0,0,1,0,0,
};

int cnt = 0;
void run(int y, int x)
{
	//3,0
	if (y < 0 || y > 3 || x < 0 || x > 5)
		return;

	if (map[y][x] >= 1)
		return;
	
	map[y][x] = 2;
	cnt++;
	if (y == 2 && x == 0)
	{
		// 도착
		int a = 0;
	}

	run(y + 1, x);
	run(y, x + 1);
	run(y - 1, x);
	run(y, x - 1);

}

int main()
{
	run(0, 0);

	return 0;
}

