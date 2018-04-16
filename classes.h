class Point {
    int x = 5, y = 5;
    public:
    int MIN_X = 0;
    int MAX_X = 10;
    int MIN_Y = 0;
    int MAX_Y = 10;
    Point() {}
    Point(int new_x, int new_y) {
        x = new_x;
        y = new_y;
    }
    int get_x() {
        return x;
    }
    int get_y() {
        return y;
    }
    void set_x(int k) {
        x = k;
    }
    void set_y(int k) {
        y = k;
    }
    void i_x(){
        x++;
        if (x > MAX_X) x = MAX_X;
        if (x < MIN_X) x = MIN_X;
    }
    void d_x(){
        x--;
        if (x > MAX_X) x = MAX_X;
        if (x < MIN_X) x = MIN_X;
    }
    void i_y(){
        y++;
        if (y > MAX_Y) y = MAX_Y;
        if (y < MIN_Y) y = MIN_Y;
    }
    void d_y(){
        y--;
        if (y > MAX_Y) y = MAX_Y;
        if (y < MIN_Y) y = MIN_Y;
    }
};
