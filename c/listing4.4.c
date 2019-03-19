#define PI 3.14159
#define R 10.0

int main() {
    float l, s;
    l = 2.0 * PI * R;
    s = PI * R * R;
    {
        float v_s, v;
        v_s = 4 * s;
        v = 4.0 * PI * R * R * R / 3.0;
    }
}