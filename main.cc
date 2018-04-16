#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << "^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^" << endl;
    cout << "-------------------------------------------" << endl;
    cout << " - x--x-- - Lost in Los Angeles -- -x--x - " << endl;
    cout << "-------------------------------------------" << endl;
    cout << "<>|<>|<>|<>|<>|<>|<>|<>|<>|<>|<>|<>|<>|<>|<" << endl;
    cout << endl;

    Point map;
    puzzle1 puzzle1;
    puzzle2 puzzle2;
    puzzle3 puzzle3;
    puzzle4 puzzle4;
    Puzzle player1;

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
    cout << h << ": " << ft << " can give you clues as to where the " << kk << "s are." << endl;
    cout << h << ": " << "Enter W,A,S,D to move." << endl;

    char c = 0;
    while (true) {
        cout << "Your coordinates are: (" << map.get_x() << ", " << map.get_y() << ")." << endl;
        cin >> c;
        if (!cin) die();
        if (c == 'W' || c == 'w') map.i_y();
        if (c == 'A' || c == 'a') map.d_x();
        if (c == 'S' || c == 's') map.d_y();
        if (c == 'D' || c == 'd') map.i_x();
        if (c == 'F' || c == 'f') {
            cout << "You found Sabrina, the best fortune teller in all of L.A." << endl;
            if (map.get_x() <= 5 && map.get_y() >= 5) {
                cout << "Go to 36 N. Ocean Ave." << endl;
            }
            if (map.get_x() <= 5 && map.get_y() < 5) {
                cout << "Go to Kerney's favorite place." << endl;
            }
            if (map.get_x() > 5 && map.get_y() <= 5) {
                cout << "Vist the year that is the title of the famous book written by George Orwell." << endl;
            }
            if (map.get_x() > 5 && map.get_y() > 5) {
                cout << "Go to the spot where in binary code it reads 'on off on off'." << endl;
            }
        }
        if (map.get_x() == 4 && map.get_y() == 2) {
            puzzle1.quiz();
        }
        if (map.get_x() == 10 && map.get_y() == 10) {
            puzzle2.quiz();
        }
        if (map.get_x() == 3 && map.get_y() == 6) {
            puzzle3.quiz();
        }
        if (map.get_x() == 8 && map.get_y() == 4) {
            puzzle4.quiz();
        }
        if (player1.get_health() <= 0) die();
        if (win == 4) break;
    }
    cout << "*',.'+.,'-.*.,'-',.+'-*',.+.,'-.,*',+..',.'*.+',','*+',.+" << endl;
    cout << "Congratulations, " << name << ", you found your way home!" << endl;
    cout << "*',.'+.,'-.*.,'-',.+'-*',.+.,'-.,*',+..',.'*.+',','*+',.+" << endl;
}
