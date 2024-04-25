#include <iostream>
#include<cmath>
#define PI 3.14159265

int main()

{
	setlocale(LC_ALL, "ru");

	double x1{}, y1{}, x2{}, y2{};
	std::cout << "Введите x1= ";
	std::cin >> x1;
	std::cout << "Введите y1= ";
	std::cin >> y1;
	std::cout << "Введите x2= ";
	std::cin >> x2;
	std::cout << "Введите y2= ";
	std::cin >> y2;
	std::cout << std::endl;

	double dx = x2 - x1;
	double dy = y2 - y1;


	double rumb12{ dy / dx };
	
	double arctan =atan(rumb12) * 180.0 / PI;
	
	/*double alfa{};*/

	if (dx > 0 && dy > 0)


	{
		double alfa = 90-arctan;
		std::cout << alfa << std::endl;

	}


	else if (dx < 0 && dy > 0)
	{
		double alfa = 360-(180 - arctan);
		std::cout << alfa << std::endl;
	}

	else if (dx < 0 && dy < 0)
	{
		double alfa = ((90-arctan) + 180);
		std::cout << alfa << std::endl;
	}

	else if (dx > 0 && dy < 0)
	{

		double alfa = abs(90-(360 - arctan));
		std::cout << alfa << std::endl;
	}


	
	double S = sqrt(dx * dx + dy * dy);
	std::cout << S << std::endl;
	
	
}






