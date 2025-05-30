#include<iostream>
class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Circle\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Rectangle\n";
    }
};

void render(Shape* s) {
    s->draw();  // Polymorphic behavior
}

int main() {
    Circle c;
    Rectangle r;

    render(&c);  // ?? Upcast Circle* to Shape*
    render(&r);  // ?? Upcast Rectangle* to Shape*
}