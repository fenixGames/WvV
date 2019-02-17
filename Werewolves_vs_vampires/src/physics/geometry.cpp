#include <physics/geometry.hpp>

Point::Point(float _x, float _y) {
	x = _x;
	y = _y;
}

Point
Point::operator+(const Point& p) {
	return Point(x + p.x, y + p.y);
}

Point
Point::operator-(const Point& p) {
	return Point(x - p.x, y - p.y);
}

Size::Size(int w, int h) {
	width = w;
	height = h;
}