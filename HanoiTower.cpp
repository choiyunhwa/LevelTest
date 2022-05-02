#include <iostream>
//	하노이 타워 알고리즘을 구현하라.(재귀호출)
// n개의 우너판을 옮기는데 드는 횟수 ( 2^n - 1)
// 하나의 원판만 이동
// 맨위 원판만 이동
// 크기가 작은 원판 위에는 큰 원판을 쌓을 수 없음.
// 컨닝..

/*void HanoiTower(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		std::cout << "1 dist" << from << " to" << to << std::endl;
	}
	else
	{
		HanoiTower(n - 1, from, to, tmp);
		std::cout << n << " dist" << from << " to" << to << std::endl;
		HanoiTower(n - 1, tmp, from, to);
	}
}

int main()
{
	HanoiTower(3, 'A', 'B', 'C');

	return 0;
}*/