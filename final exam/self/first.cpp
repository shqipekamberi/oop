#include <iostream>
#include <cstring>

using namespace std;

class Cloth {
private:
    int code;
    char* color;
    string size;

public:
    Cloth(int c = 0, const char* col = "White", string s = "M") {
        code = c;

        int n = strlen(col);
        color = new char[n + 1];
        strcpy(color, col);

        size = s;
    }

    Cloth(const Cloth& other) {
        code = other.code;

        int n = strlen(other.color);
        color = new char[n + 1];
        strcpy(color, other.color);

        size = other.size;
    }

    ~Cloth() {
        delete[] color;
    }

    int getCode() const {
        return code;
    }

    const char* getColor() const {
        return color;
    }

    string getSize() const {
        return size;
    }

    void setCode(int c) {
        code = c;
    }

    void setColor(const char* col) {
        delete[] color;  // Free the old color memory
        int n = strlen(col);
        color = new char[n + 1];
        strcpy(color, col);
    }

    void setSize(string s) {
        size = s;
    }

    void input() {
        cout << "\nEnter code: ";
        cin >> code;

        cout << "Enter color: ";
        cin >> color;

        cout << "Enter size: ";
        cin >> size;
    }

    void output() const {
        cout << "\nCode: " << code << "\tColor: " << color << "\tSize: " << size << endl;
    }
};

int main() {
    Cloth cloth1, cloth2, cloth3(3, "Black", "L");

    cout << "Enter information about cloth 1: " << endl;
    cloth1.input();

    cloth2.setCode(2);
    cloth2.setColor("Black");
    cloth2.setSize("L");

    cout << "Information about all clothes: " << endl;
    cloth1.output();
    cloth2.output();
    cloth3.output();

    cout << "\nClothes that are black and size L: " << endl;
    if (strcmp(cloth1.getColor(), "Black") == 0 && cloth1.getSize() == "L") {
        cloth1.output();
    }
    if (strcmp(cloth2.getColor(), "Black") == 0 && cloth2.getSize() == "L") {
        cloth2.output();
    }
    if (strcmp(cloth3.getColor(), "Black") == 0 && cloth3.getSize() == "L") {
        cloth3.output();
    }

    return 0;
}
