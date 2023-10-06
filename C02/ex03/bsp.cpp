#include "Point.hpp"
#include "Fixed.hpp"

float getW1(float ax, float bx, float cx, float ay, float by, float cy, float px, float py)
{
    float w1;

    w1 = (ax * (cy - ay) + (px - ay) * (cx - ax) - px * (cy - ay)) / ((by - ay) * (cx - ax) - (bx - ax) * (cy - ay));

    return w1;
}

float getW2(float ax, float bx, float cx, float ay, float by, float cy, float px, float py, float w1)
{
    float w2;

    w2 = (py - ay - w1 * (by - ay)) / (cy - ay);

    return w2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float ax, bx, cx, px, ay, by, cy, py, w1, w2;
    
    ax = a.presentX().toFloat();
    std::cout << ax << std::endl;
    ay = a.presentY().toFloat();
    std::cout << ay << std::endl;
    bx = b.presentX().toFloat();
    std::cout << bx << std::endl;
    by = b.presentY().toFloat();
    std::cout << by << std::endl;
    cx = c.presentX().toFloat();
    std::cout << cx << std::endl;
    cy = c.presentY().toFloat();
    std::cout << cy << std::endl;
    px = point.presentX().toFloat();
    std::cout << px << std::endl;
    py = point.presentY().toFloat();
    std::cout << py << std::endl;

    w1 = getW1(ax, bx, cx, ay, by, cy, px, py);
    std::cout << w1 << std::endl;
    w2 = getW2(ax, bx, cx, ay, by, cy, px, py, w1);
    std::cout << w1 << std::endl;

    return (w1 >= 0 && w2 >= 0 && ((w1 + w2) <= 1)) ? true:false;
}