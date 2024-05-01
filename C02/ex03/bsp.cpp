#include "Point.hpp"
#include "Fixed.hpp"

// https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/

/**
 * @brief returns the area of a tringle with the coordenates of the three points.
 * @param x1 
 * @param y1 
 * @param x2 
 * @param y2 
 * @param x3 
 * @param y3 
 * @return float 
 */
float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return std::abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

/**
 * @brief checks wether a point is within a triangle.
 * it divides a triangle and then adds the three to check if it is equal to the total area.
 * @param a 
 * @param b 
 * @param c 
 * @param point -> point to check
 * @return true 
 * @return false 
 */
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float ax, bx, cx, px, ay, by, cy, py, areaTriangle, area1, area2, area3;
    
    ax = a.presentX().toFloat();
    ay = a.presentY().toFloat();

    bx = b.presentX().toFloat();
    by = b.presentY().toFloat();

    cx = c.presentX().toFloat();
    cy = c.presentY().toFloat();

    px = point.presentX().toFloat();
    py = point.presentY().toFloat();

    areaTriangle = area(ax, ay, bx, by, cx, cy);
    area1 = area(px, py, bx, by, cx, cy);
    area2 = area(ax, ay, px, py, cx, cy);
    area3 = area(ax, ay, bx, by, px, py);

    if (area1 == 0 || area2 == 0 || area3 == 0)
        return false;
    
    return areaTriangle == (area1 + area2 + area3);
}