#include <iostream>
const double Pi = 3.14159265;
class Dot
{
protected:
    double x;
    double y;
public:
    Dot(double x_x, double y_y)
    {
        x = x_x;
        y = y_y;
    }
    void Show()
    {
        std::cout << "x --" << x << "\ny --" << y;
    }
};
class CircleWithoutInheritance
{
protected:
    double radius;
public:
    Dot center;
};
class Circle : public Dot
{
protected:
    double radius;
public:
    int perimetr()
    {
        return 2 * Pi * radius;
    }
    Circle(double x_x, double y_y, double s_radius) : Dot(x_x, y_y)
    {
        radius = s_radius;
    }
    void Show1()
    {
        std::cout << "\nEnto x-" << Dot::x << "\nEnto y -" << Dot::y << "\nEnto radius -" << radius ;
    }
    void Show2()
    {
        Show();
        std::cout << "\nRadius -" << radius;
    }

};
class Ball : public Circle
{
private:
    double height;
public:
    Ball(double x, double y, double r,double s_height) : Circle(x, y, r)
    {
        height = s_height;
    }
    void Show()
    {
        Show2();
        std::cout << std::endl;
        std::cout << "Heigth" << height;
    }
};
int main()
{
    Circle F(2, 2, 4);
    F.Show1();
    std::cout << std::endl;
    F.Show2();
    std::cout << std::endl;
    Ball S(3, 4, 5, 6);
    S.Show();
}
