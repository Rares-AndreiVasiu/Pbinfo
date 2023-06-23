#include <iostream>
#include <vector>
#include <cmath>

class point
{
private:
    int x;
    int y;

public:
    point(int abscissa, int ordinate);

    int getX();

    int getY();
};

point::point(int abscissa, int ordinate) : x(abscissa), y(ordinate)
{

}

int point::getX()
{
    return this -> x;
}

int point::getY()
{
    return this -> y;
}

class circle
{
private:
    point center;
    double radius;

public:
    circle(int x, int y, int r);

    double getRadius();
};

circle::circle(int x, int y, int r) : center(x, y), radius(r)
{

}

double circle::getRadius()
{
    return this -> radius;
}

int main()
{
    int n, m;

    std::vector <point> points;
    std::vector <circle> circles;

    std::cin >> n;

    for(int i = 1; i <= n; ++ i)
    {
        int x, y;

        std::cin >> x >> y;

        points.emplace_back(point(x, y));
    }

    std::cin >> m;

    for(int i = 1; i <= m; ++ i)
    {
        double r;

        std::cin >> r;

        circles.emplace_back(circle(0, 0, r));
    }

    for(circle Circle : circles)
    {
        int counterIncludedPoints = 0;

        for(point Point : points)
        {
            double distance = std::sqrt( (Point.getX()) * 1.0 * (Point.getX()) + (Point.getY()) * 1.0 * (Point.getY()) );
            
            if(distance <= Circle.getRadius())
            {
                counterIncludedPoints++;
            }
        }
        std::cout << counterIncludedPoints << " ";
    }

    return 0;
}