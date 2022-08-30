#include <iostream>

class Chair
{
private:

    double lenght;
    double width;

public:

    Chair() = default;
    Chair(double _lenght, double _width) : lenght(_lenght), width(_width) {};

    void print_sqrt()
    {
        std::cout << (lenght * width) * 4. + width * width << '\n';
    }

    void SetLenght(const double _lenght)
    {
        lenght = _lenght;
    }

    void SetWidth(const double _width)
    {
        width = _width;
    }
};

std::istream& operator >> (std::istream& ist, Chair& ch)
{
    double _lenght;
    double _width;
    std::cout << " Input lenght = ";
    ist >> _lenght;
    std::cout << " Input width = ";
    ist >> _width;

    ch.SetLenght(_lenght);
    ch.SetWidth(_width);

    return ist;
}

int main()
{
    Chair chair_one = { 5.5, 4.4 };
    chair_one.print_sqrt();

    Chair chair_two;
    std::cin >> chair_two;
    chair_two.print_sqrt();

    system("pause");
}