#include <iostream>
#include <cstring>

using namespace std;

class cloth {
    friend ostream& operator<<(ostream &o, const cloth& c) {
        o << "\nCloth code, color, size:  " << c.code << "\t" << c.color << "\t" << c.size << endl;
        return o;
    }
    
    friend istream& operator>>(istream &input, cloth &c) {
        cout << "\nInput the code: ";
        input >> c.code;
        cout << "\nInput the color: ";
        input >> c.color;
        cout << "\nInput the size (XXS, XS, S, ..., XXXL): ";
        input >> c.size;
        return input;
    }

private:
    int code;
    char* color;
    string size;

public:
    // Default constructor
    cloth(int c = 0, char* col = "White", string s = "XS") {
        code = c;
        color = new char[strlen(col) + 1];
        strcpy(color, col);
        size = s;
    }

    // Copy constructor
    cloth(const cloth &c) {
        code = c.code;
        color = new char[strlen(c.color) + 1];
        strcpy(color, c.color);
        size = c.size;
    }

    // Destructor
    ~cloth() {
        delete[] color;
    }

    // Addition operator
    const cloth operator+(const cloth &c) const {
        cloth res;
        res.code = this->code + c.code;
        
        int len1 = strlen(this->color);
        int len2 = strlen(c.color);
        res.color = new char[len1 + len2 + 2];
        strcpy(res.color, this->color);
        strcat(res.color, "/");
        strcat(res.color, c.color);
        
        res.size = this->size + "/" + c.size;
        
        return res;
    }

    // Prefix increment operator
    cloth& operator++() {
        if (size == "XXS") size = "XS";
        else if (size == "XS") size = "S";
        else if (size == "S") size = "M";
        else if (size == "M") size = "L";
        else if (size == "L") size = "XL";
        else if (size == "XL") size = "XXL";
        else if (size == "XXL") size = "XXXL";
        else cout << "\nInvalid Size!";
        
        return *this;
    }

    // Assignment operator
    const cloth& operator=(const cloth &c) {
        if (this == &c) return *this;
        
        code = c.code;
        delete[] color;
        color = new char[strlen(c.color) + 1];
        strcpy(color, c.color);
        size = c.size;
        
        return *this;
    }

    void setcolor(const char* col) {
        delete[] color;
        color = new char[strlen(col) + 1];
        strcpy(color, col);
    }

    void setcode(int c) {
        code = (c < 0 ? 0 : c);
    }

    void setsize(const string &s) {
        if (s != "XXS" && s != "XS" && s != "S" && s != "M" && s != "L" && s != "XL" && s != "XXL" && s != "XXXL")
            size = "L";
        else
            size = s;
    }

    void input() {
        cout << "\nInput the code: ";
        cin >> code;
        cout << "\nInput the color: ";
        cin >> color;
        cout << "\nInput the size (XXS, XS, S, ..., XXXL): ";
        cin >> size;
    }

    void output() {
        cout << "\nCloth code, color, size:  " << code << "\t" << color << "\t" << size << endl;
    }

    const char* getcolor() const { return color; }
    int getcode() const { return code; }
    string getsize() const { return size; }
};

int main() {
    cloth c1, c2, c3(0, " ", "S"), sum;

    cout << "\nInput data about cloth c1:\n";
    cin >> c1;

    cout << "\nInput data about cloth c2:\n";
    cin >> c2;

    cout << c1 << c2;

    sum = c1 + c2;
    cout << sum;

    ++c1;
    cout << c1;

    return 0;
}
