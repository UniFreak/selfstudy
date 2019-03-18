class Point {
    private: 
        int x, y;

    public: 
        void setxy(int x, int y);
        void move(int dx, int dy);
        void display();
        int getx();
        int gety();
};

void Point::setxy(int a, int b) {
    x = a;
    y = b;
}

void Point::move(int dx, int dy) {
    x += dx;
    y += dy;
}

void Point::display() {
    cout << x << ", " << y << endl;
}

int Point::getx() {
    return x;
}

int Point::gety() {
    return y;
}