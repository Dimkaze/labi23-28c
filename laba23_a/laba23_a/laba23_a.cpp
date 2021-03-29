#include <iostream>
#include <Windows.h>
class Factory
{
private:
    int s_machine;
    double s_count_of_production;
    char s_department;
    bool s_is_work;
    char s_name[20];
public:
    Factory()
    {
        std::cout << "Constructor work";
    }
    Factory(int machine, double count_of_production, char department, bool is_work)
    {
        s_machine = machine;
        s_count_of_production = count_of_production;
        s_department = department;
        s_is_work = is_work;
    }
    int getMachine()
    {
        return s_machine;
    }
    double getCount_of_production()
    {
        return s_count_of_production;
    }
    char getDepartment()
    {
        return s_department;
    }
    bool getIs_work()
    {
        return s_is_work;
    }
    char* Get_name()
    {
        return s_name;
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
    char SetDepartment(char dep)
    {
        s_department = dep;
        return s_department;
    }
    bool SetIs_work(bool work)
    {
        s_is_work = work;
        return s_is_work;
    }
    char* Set_name(char arry[20])
    {
        if (std::strlen(arry) > 0)
        {
            strcpy_s(s_name, arry);
            return s_name;
        }
        else
        {
            return s_name;
        }
    }
    void Print()
    {
        std::cout << "Count of machine " << s_machine << "\ncount_of_production " << s_count_of_production << "\ndepartment " << s_department
            << "\nis_work " << s_is_work << "\nname " << s_name << "\n";

    }
    int yearsDoxod(int yearsMoney, int minusYears, int x)
    {
        if ((yearsMoney - minusYears) > 0)
            return ((yearsMoney - minusYears) * x) / yearsMoney;
        else
            return (1 - yearsMoney - minusYears) / 100;
    }
    ~Factory()
    {
        std::cout << "\nYdalenie factory" << Get_name();
    }
};
int main()
{
    Factory f(12, 24.9, true, 'n');
    char arry1[20]{'f','i','r','s','t'};
    char arry2[20]{ 's','e','c','o','n','d'};
    char arry3[20]{ 't','h','i','r','e','d' };
    f.Set_name(arry1);
    f.Print();  
    std::cout << f.yearsDoxod(15, 3, 2);
    std::cout << std::endl;
    Factory s;
    s.Print();
    std::cout << std::endl;
    s.SetCount_of_production(12.2);
    s.SetDepartment('c');
    s.SetMachine(10);
    s.Set_name(arry2);
    s.Print();
    std::cout << std::endl;
    Factory* four = new Factory();
    four->SetCount_of_production(134.9);
    four->SetDepartment('z');
    four->SetMachine(156);
    four->Set_name(arry3);
    four->Print();
    std::cout << std::endl;
    Factory* five = &s;
    five->Print();
    std::cout << std::endl;
    Factory** six = &four;
    (*six)->Print();
    std::cout << std::endl;
    Factory& seven = s;
    std::cout << seven.yearsDoxod(15, 3, 2);
    std::cout << std::endl;
    Factory& eigth = *four;
    std::cout << eigth.yearsDoxod(15, 3, 2);
}