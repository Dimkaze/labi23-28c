#include <string>
#include <iostream>
const double Pi = 3.14159265;
class Homosapiens
{
protected:
	bool sex;
	int power;
public:
	virtual std::string setSex() = 0;
	virtual int updatePower() = 0;
	Homosapiens(bool m_sex, int m_power) : sex(m_sex), power(m_power) {};
	Homosapiens(){}
	virtual ~Homosapiens()
	{
		std::cout << "\nDelete Homodapience";
	}
};
class Person : public Homosapiens
{
protected:
	std::string name;
	int age;
public:
	int getAge()
	{
		return age;
	}
	int setAge(int value)
	{
		age = value;
		return age;
	}
	std::string getName()
	{
		return name;
	}
	std::string setName(std::string value)
	{
		name = value;
		return name;
	}
	std::string setSex() override
	{
		if (sex == true)
			return "man";
		else
		{
			return "Women";
		}
	}
	int updatePower() override
	{
		std::cout << "You update your power" << std::endl;
		return power + 10;
	}
	Person(bool sex, int power, std::string m_name, int m_age) : Homosapiens(sex, power), name(m_name), age(m_age) {};
	Person(){}
	~Person()
	{
		std::cout << "\nDelete Persone";
	}
};
class Employer : public Person
{
private:
	std::string duty;
	double oklad;
public:
	double premia(double bonus)
	{
		return bonus + oklad;
	}

	Employer(bool sex, int power, std::string m_name, int m_age, std::string m_duty, double m_oklad) : Person(sex, power, m_name, m_age), duty(m_duty), oklad(m_oklad) {};
	Employer():Person(){}
	virtual ~Employer()
	{
		std::cout << "\ndelete Employer";
	}
};
class Point
{
public:
	virtual int ploshad() = 0;
	virtual int perimetr() = 0;
};
class Circle : public Point
{
private:
	int radius;
public:	
	int ploshad() override
	{
		return 2 * Pi * std::pow(radius, 2);
	}
	int perimetr() override
	{
		
		return 2 * Pi * radius;
	}
	Circle(int s_radius) : radius(s_radius) {};
	Circle(){}
};

int main()
{
	Person first(true, 5, "Dima", 15);
	std::cout << first.updatePower();
	 
	std::cout << first.setSex();
	Employer arbaiten(true, 5, "Sacha", 25, "Zavod", 15);
	std::cout << std::endl;
	std::cout << "Premia ::::->" << arbaiten.premia(3.5);
	double radius;
	int average = 0;
	Circle** circleArr = new  Circle * [3];
	for (int i = 0; i < 3; i++)
	{
		std::cout << "enter radius:-> ";
		std::cin >> radius;
		circleArr[i] = new Circle(radius);
		average += circleArr[i]->perimetr();
	}
	std::cout << "Average perimetr: -> " << average / 3;
}
