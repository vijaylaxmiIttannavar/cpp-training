#include<iostream>

using namespace std;

class Point {
    int x, y;
public:
    Point(int x_, int y_) : x(x_), y(y_) {}

    Point operator+(const Point& other) {
        return Point(x + other.x, y + other.y);
    }

    Point operator++(const Point& other) {
        return Point(x + other.);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }


    int point ++(const point& )
};

int main() {
    Point p1(1, 2), p2(3, 4);
    Point p3 = p1 + p2;
    p3.display();  // Output: (4, 6)
}