#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &, int &, int &, int &);

int main()
{
	int a = 50, b = 100, c = 500, d = 1000;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		shuffle(a, b, c, d);
		cout << a << " " << b << " " << c << " " << d << endl;
	}

	return 0;
}

// Do not modify source code above this line

void shuffle(int &a, int &b, int &c, int &d)
{
	int refs[4];

	refs[0] = a;
	refs[1] = b;
	refs[2] = c;
	refs[3] = d;

	bool choosed[] = {false, false, false, false};
	srand(time(0) + rand());
	for (int i = 0; i < 4; i++)
	{
		while (true)
		{
			int r = rand() % 4;
			if (!choosed[r])
			{
				choosed[r] = true;
				switch (i)
				{
				case 0:
					a = refs[r];
					break;
				case 1:
					b = refs[r];
					break;
				case 2:
					c = refs[r];
					break;
				case 3:
					d = refs[r];
					break;
				}
				break;
			}
		}
	}
}
