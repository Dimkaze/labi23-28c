#pragma once
#include <string>
class Hero
{
private:
	std::string name;
	std::string weapon;
	int power;
	int age;
public:
	Hero(std::string m_name, std::string m_weapon, int m_age, int m_power) : name(m_name), age(m_age), weapon(m_weapon), power(m_power){};
	Hero()
	{

	}
	int getPower()
	{
		return power;
	}
	int setPower(int value)
	{
		power = value;
		return power;
	}
	std::string chooseWeapon()
	{
		if (power < 10 && power > 1)
		{
			return "Pistol";
		}
		else if (power >= 10 && power < 50)
		{
			return "kortik";
		}
		else if (power >= 100)
		{
			return "Bazuka";
		}
		else
		{
			return "Your week";
		}
	}
};
class Pexota : public Hero
{	
private:
	std::string clasS;
public:
	Pexota(std::string name, std::string weapon, int age, int power, std::string m_clasS) : Hero(name, weapon, age, power), clasS(m_clasS) {};
	Pexota()
	{

	}
};
class Sniper : public Hero
{
private:
	int count_of_kills;
public:
	Sniper(std::string name, std::string weapon, int age, int power, int m_count_of_kills) : Hero(name, weapon, age, power), count_of_kills(m_count_of_kills) {};
	Sniper()
	{

	}
	~Sniper()
	{
			
	}
};
class Casual : public Hero
{
private:
	std::string work;
public:
	Casual(std::string name, std::string weapon, int age, int power, std::string m_work) : Hero(name, weapon, age, power) , work(m_work) {};
	Casual()
	{

	}
};
