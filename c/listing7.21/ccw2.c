float max3(float x, float y, float z) {
    float m;
    m = max2(max2(x, y), z);
    return m;
}