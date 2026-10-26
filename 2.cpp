#include <iostream>
using namespace std;

class Rectangle {
private:
    double width, height;
public:
    void setSize(double w, double h);
    void print();
};

void Rectangle::setSize(double w, double h) {
    width = (w > 0) ? w : 1.0;
    height = (h > 0) ? h : 1.0;
}

void Rectangle::print() {
    cout << width << " x " << height << " y ";
}

int main() {
    Rectangle r;
    r.setSize(10, 0);
    r.print();
}