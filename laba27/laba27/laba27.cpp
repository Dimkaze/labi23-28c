#include <iostream>
#include <Windows.h>
class Factory
{
private:
    int s_machine;
    double s_count_of_production;
public:
    Factory()
    {
        std::cout << "Constructor work";
    }
    Factory(int machine, double count_of_production)
    {
        s_machine = machine;
        s_count_of_production = count_of_production;
    }

    int getMachine()
    {
        return s_machine;
    }
    double getCount_of_production()
    {
        return s_count_of_production;
    }
    int SetMachine(int mach)
    {
        s_machine = mach;
        return s_machine;
    }
    double SetCount_of_production(double count)
    {
        s_count_of_production = count;
        return s_count_of_production;
    }
    void Print()
    {
        std::cout << "\nCount of machine " << s_machine << "\ncount_of_production " << s_count_of_production;
    }
    int yearsDoxod(int yearsMoney, int minusYears, int x)
    {
        if ((yearsMoney - minusYears) > 0)
            return ((yearsMoney - minusYears) * x) / yearsMoney;
        else
            return (1 - yearsMoney - minusYears) / 100;
    }
    Factory operator++()
    {
        std::cout << "Prefeksnii ink++ ";
        this->s_machine++;
        this->s_count_of_production++;
        return *this;
    }
    Factory operator++(int)
    {
        std::cout << "Postfiksnii ink++ ";
        this->s_machine++;
        this->s_count_of_production++;
        return *this;
    }
    Factory operator-(Factory object)
    {
        std::cout << "minus";
        this->s_machine = this->s_machine - object.getMachine();
        this->s_count_of_production = this->s_count_of_production - object.getCount_of_production();
        return *this;
    }
    bool operator>=(Factory ob)
    {
        return (((this->s_machine >= ob.getMachine()) ? true : false) && ((this->s_count_of_production >= ob.getCount_of_production()) ? true : false));
    }
    bool operator<=(double ob)
    {
        return (((this->s_machine <= ob) ? true : false) && ((this->s_count_of_production <= ob) ? true : false));
    }
    ~Factory()
    {
       // std::cout << "\nYdalenie factory";
    }
};
int main()
{
    Factory first(4, 5);
    Factory second(4, 5);
    Factory four(10, 10);
    Factory therd = first - second;
    ++therd;
    therd++;
    therd.Print();
    if (four >= second)
    {
        std::cout << "\nExelent";
    }
    if (four <= 100)
    {
        std::cout << "\nOi";
    }
}