#include <iostream>
using namespace std;

string name = "Player 1";
int win = 0;
int health = 10;

void die() {
    cout << "  ,'*********',  " << endl;
    cout << ".'             '." << endl;
    cout << "|     R.I.P.    |" << endl;
    cout << "| " << name << " |" << endl;
    cout << "| Gone, but not |" << endl;
    cout << "|   forgotten.  |" << endl;
    cout << "^^^^^^^^^^^^^^^^^" << endl;
    exit(1);
}

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

class Puzzle{
    protected://The location for the puzzles
    bool solved = false;
           
    public:
    void damage(){health--;}
    void heal(){health++;}
};

class puzzle1 : public Puzzle{
    public:
    string answer;
    void quiz(){
        while(solved == false) {
            cout << "Jimmy's mother had three children. The first was called April\n";
            cout << "and the second was called May. What was the name of the third?\n";
            cin >> answer;
            if(answer == "JIMMY" || answer =="jimmy"){
                win++;
                solved = true;
                cout << "That is correct. You have found a crystal!\n";
            }
            else{
                Puzzle::damage();
                cout << "That is incorrect. You lose one life point." << endl;
                cout << "You have " << health << " life points remaining." << endl;}
            if (health <= 0) die();
        }
        cout << "You have solved this puzzle." << endl;
    }
};

class puzzle2 : public Puzzle{
    public:
    string answer;
    void quiz(){
        while(solved == false) {
            cout << "It cannot be seen when it is there." << endl;
            cout << "It fills up a room, much like air." << endl;
            cout << "It cannot be touched, what is it?" << endl;
            cin >> answer;
            if(answer == "DARKNESS" || answer =="darkness"){
                win++;
                solved = true;
                cout << "That is correct. You have found a crystal!\n";
            }
            else {
                Puzzle:: damage();
                cout << "That is incorrect. You lose one life point." << endl;
                cout << "You have " << health << " life points remaining." << endl;
            if (health <= 0) die();
            }
        }
        cout << "You have solved this puzzle." << endl;
    }
};

class puzzle3 : public Puzzle{
    public:
    string answer;
    void quiz(){
        while(solved == false) {
            cout <<  "Poor people have it. Rich people need it. If you eat it you die. What is it?" << endl;
            cin >> answer;
            if(answer == "NOTHING" || answer =="nothing"){
                win++;
                solved = true;
                cout << "That is correct.You have found a crystal!\n";
            }
            else {
                Puzzle::damage();
                cout << "That is incorrect. You lose one life point." << endl;
                cout << "You have " << health << " life points remaining." << endl;
            if (health <= 0) die();
            }
        }
        cout << "You have solved this puzzle." << endl;
    }
};

class puzzle4 : public Puzzle{
    public:
    string answer;
    void quiz() {
        while(solved == false){
            cout << "I have keys that fit no locks, a space but no room." << endl;
            cout << "You can enter, but never leave. What am I?" << endl;
            cin >> answer;
            if(answer == "KEYBOARD" || answer == "keyboard"){
                win++;
                solved = true;
                cout << "That is correct. You have found a crystal!\n";
            }
            else {
                Puzzle::damage();
                cout << "That is incorrect. You lose one life point." << endl;
                cout << "You have " << health << " life points remaining." << endl;
            if (health <= 0) die();
            }
        }
        cout << "You have solved this puzzle." << endl;
    }
};
