#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <ncurses.h>
#include <utility>
#include <limits>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

class Point {
    int x = 0, y = 0;
  public:
    Point();
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
};

void die() {
    cout << "Looks like you didn't pay your taxes!" << endl;
}

bool play_pause; //play or pause the game
const int UP = 65; //key codes for arrows
const int DOWN = 66;
const int LEFT = 68;
const int RIGHT = 67;

int main() {
    cout << "^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^" << endl;
    cout << "-------------------------------------------" << endl;
    cout << " - x--x-- - Lost in Los Angeles -- -x--x - " << endl;
    cout << "-------------------------------------------" << endl;
    cout << "<>|<>|<>|<>|<>|<>|<>|<>|<>|<>|<>|<>|<>|<>|<" << endl;
    cout << endl;

    //Point map;
    string name = "Player 1";   //player
    string h    = "Keller";     //host
    string ft   = "Sabrina";    //fortune teller
    string kk   = "crystal";    //object
    string m    = "monster";     //monster


    cout << "What is your name, " << name << " ?" << endl;
    getline(cin, name);
    if (!cin) die();
    cout << endl;

    cout << h << ": Welcome to Lost in L.A. " << name << "! My name is Keller." << endl;
    cout << h << ": You must travel through the city to find " << kk << "s to find your way home." << endl;
    cout << h << ": If you need help, just enter 'F' to visit the fortune teller, " << ft << "." << endl;
    //cout << h << ": " << ft << " can tell your fortune that will be either positive or negative." << endl;
    cout << h << ": " << ft << " can give you clues as to where the " << kk << "s are." << endl;
    while (true) {
        cout << "Your coordinates are: (" << endl; //<< map.get_x() << ", " << map.get_y() << ")." << endl;
        break;

        //cout << "You found Sabrina, the best fortune teller in all of L.A." << endl;
        //cout << "She will now tell your fortune based on your information." << endl;
    }
}