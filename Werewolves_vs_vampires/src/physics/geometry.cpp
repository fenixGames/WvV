#include <physics/geometry.hpp>

Point::Point() {
	x = y = 0.0;
}

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

Size::Size() {
	width = height = 0;
}

Size::Size(int w, int h) {
	width = w;
	height = h;
}