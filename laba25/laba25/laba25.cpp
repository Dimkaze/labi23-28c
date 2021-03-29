#include <iostream>
#include "Hero.h"
const double Pi = 3.14159265;
class Dot
{
protected:
    double x;
    double y;
public:
    Dot(double x_x, double y_y) : x(x_x), y(y_y) {};
    Dot()
    {

    }
    virtual void Show()
    {
        std::cout << "zxc";
    }
    virtual int perimetr()
    {
       return 0;
    }
    virtual int ploshad()
    {
       return 0;
    }
};
class Circle : public Dot
{
protected:
    double radius;
public:
    
    Circle(double x_x, double y_y, double s_radius) : Dot(x_x, y_y) , radius(s_radius){};
    Circle()
    {

    }
        int ploshad() override
        {
            return 2 * Pi * std::pow(radius, 2);
        }
        int perimetr() override
        {
            return 2 * Pi * radius;
        }
    void Show() override
    {
        std::cout << "\nEnto x-" << Dot::x << "\nEnto y -" << Dot::y << "\nEnto radius -" << radius;
    }
};
class Ball : public Circle
{
private:
    double height;
public:
   
    Ball(double x, double y, double r, double s_height) : Circle(x, y, r), height(s_height) {};
    Ball()
    {

    }
    int perimetr1()
    {
        return perimetr() * height;
    }
    void Show1() 
    {
        Show();
        std::cout << "\nHeigth -" << height;
    }
};

int main()
{
    Circle first(2, 4, 6);
    first.Show();
    std::cout << std::endl;
    Circle* second = new Circle(3, 6, 9);
    std::cout << second->perimetr() << std::endl;
    std::cout <<second->ploshad() << std::endl;
    std::cout << std::endl;
    Ball ball1(2, 3, 4, 5);
    ball1.Show1();
    std::cout << "\n" << ball1.perimetr1();
    std::cout << std::endl;
    Ball* ball2 = new Ball(5, 6, 7, 8);
    std::cout << ball2->perimetr1() << std::endl;
    ball2->Show1();
    int n = 5, dotX, dotY;
    Dot** dotArr = new Dot*[n];
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter x: ";
        std::cin >> dotX;
        std::cout << "Enter y: ";
        std::cin >> dotY;

        dotArr[i] = new Dot(dotX, dotY);
    }
    Casual mir("Dima", "knife", 12, 20, "zavod");
    std::cout << mir.chooseWeapon();
}