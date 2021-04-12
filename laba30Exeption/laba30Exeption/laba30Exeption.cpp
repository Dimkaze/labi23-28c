#include <iostream>
#include <stdexcept>
#include <vcruntime_exception.h>
#include <new>
#include <exception>
#include <typeinfo>
#include <Windows.h>
#include <cmath>
#define o terminate();
double solytionzd2(int x)
{
	return (std::sqrt(std::pow(x, 3) - 1)) / (std::sqrt(std::pow(x, 2) - 1));
}
double solytionzd3(double r1, double r2, double r3)
{
	return std::sin(r2) / 3.14159265 * r1 + r3;
}
void zd2()
{
	double z;
	int a = 1, x;
	int zxc[5]{ 1,2,9999,4,5 };
	while (a != 0)
	{
		try
		{
			for (int i = 0; i < 5; i++)
			{
				x = zxc[i];
				if (x == 0)
				{
					throw std::logic_error("Y tebia vse horosho s 0 ?\n");
				}
				if (x == 9999)
				{
					throw std::runtime_error("Error you enter bad delitel\n");
				}
				if (x == 9998)
				{
					throw 4;
				}
				double y = solytionzd2(x);
				std::cout << "???-_-' -> " << x << " is-> " << y << "\n 1 or 0" << std::endl;
				std::cin >> a;
			}
		}
		catch (int)
		{
			std::cout << "a zachem tebe 9998? \n";
			a = 0;
		}
		catch (std::logic_error e)
		{
			a = 0;
			std::cout << "a zachem tebe 0 malenkii hyligan? \n" << e.what();

		}
		catch (std::exception e1)
		{
			std::cout << "Oi -> \n" << e1.what();
			a = 0;
		}
		catch (...)
		{
			std::cout << "Chego? ";
			a = 0;
		}
	}
}
void zd3()
{
	double r1, r2, r3;
	std::cout << "Enter 3 number:-> ";
	std::cin >> r1 >> r2 >> r3;
	try
	{
		if (r1 == 0 || r2 == 0)
			throw std::logic_error("Y tebia vse horosho s 0 ?\n");
	}
	catch (std::logic_error e)
	{
		std::cout << "Kakoe to vashe znacenie = 0 tak nelzia";
	}
	std::cout << "\n ->_>' $$-> " << solytionzd3(r1, r2, r3);
}
int main()
{
	zd2();
	return 0;
}
