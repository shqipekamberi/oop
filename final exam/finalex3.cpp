/*Operator overloading,
For the class cloth, overload >>, <<, + (code of the first + code of second; color= color of the first +’/’ + color of second; size= size1/size2;);
>(compare sizes of cloth objects); = (should implement memberwise assignment - like copy constructor), ++( increment the size
 of the cloth object)
*/
#include <iostream>
#include <cstring>
using namespace std;

class Cloth {
private:
    int code;
    char* color;
    string size;
    
public:
    // Default constructor
    Cloth(int c = 0, const char* col = "white", string s = "XS")
        : code(c), size(s)
    {
        color = new char[strlen(col) + 1];
        strcpy(color, col);
    }
    
    // Copy constructor
    Cloth(const Cloth& other)
        : code(other.code), size(other.size)
    {
        color = new char[strlen(other.color) + 1];
        strcpy(color, other.color);
    }
    
    // Destructor
    ~Cloth() {
        delete[] color;
    }

    // Getters and setters
    int getCode() const { return code; }
    void setCode(int c) { code = c; }
    const char* getColor() const { return color; }
    void setColor(const char* col) {
        delete[] color;
        color = new char[strlen(col) + 1];
        strcpy(color, col);
    }
    string getSize() const { return size; }
    void setSize(string s) { size = s; }

    // Overload >> operator
    friend istream& operator>>(istream& in, Cloth& cloth) {
        cout << "Enter code: ";
        in >> cloth.code;
        cout << "Enter color: ";
        char temp[100];
        in >> temp;
        cloth.setColor(temp);
        cout << "Enter size: ";
        in >> cloth.size;
        return in;
    }

    // Overload << operator
    friend ostream& operator<<(ostream& out, const Cloth& cloth) {
        out << "Code: " << cloth.code << ", Color: " << cloth.color << ", Size: " << cloth.size;
        return out;
    }

    // Overload + operator
    Cloth operator+(const Cloth& other) const {
        int newCode = code + other.code;
        char* newColor = new char[strlen(color) + strlen(other.color) + 2];
        strcpy(newColor, color);
        strcat(newColor, "/");
        strcat(newColor, other.color);
        string newSize = size + "/" + other.size;
        Cloth newCloth(newCode, newColor, newSize);
        delete[] newColor;
        return newCloth;
    }

    // Overload > operator
    bool operator>(const Cloth& other) const {
        return size > other.size;
    }

    // Overload = operator
    Cloth& operator=(const Cloth& other) {
        if (this == &other) {
            return *this;
        }
        code = other.code;
        setColor(other.color);
        size = other.size;
        return *this;
    }

    // Overload ++ operator (prefix)
    Cloth& operator++() {
        size = incrementSize(size);
        return *this;
    }

    // Overload ++ operator (postfix)
    Cloth operator++(int) {
        Cloth temp = *this;
        ++(*this);
        return temp;
    }

private:
    // Helper function to increment size
    string incrementSize(const string& s) {
        if (s == "XS") return "S";
        if (s == "S") return "M";
        if (s == "M") return "L";
        if (s == "L") return "XL";
        if (s == "XL") return "XXL";
        return s; // If size is not recognized or already at max, return the same size
    }
};

int main() {
    Cloth c1, c2, c3(0, " ", "S"), sum;

    cout << "\nInput data about cloth c1:\n";
    cin >> c1;

    cout << "\nInput data about cloth c2:\n";
    cin >> c2;

    cout << c1 << endl << c2 << endl;

    sum = c1 + c2;
    cout << sum << endl;

    ++c1;
    cout << c1 << endl;

    return 0;
}
