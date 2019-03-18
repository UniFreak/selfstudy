template <class T>
class AnyType {
    T x, y;
public:
    AnyType(T a, T b): x(a), y(b) {}
    T getx() {return x;}
    T gety() {return y;}
};

int main() {}