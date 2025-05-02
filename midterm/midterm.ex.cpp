#include <iostream>
#include <cstring>
using namespace std;

struct room{
    string type;
    double width, length;
};

int main(){
    room r1, r2, r3;
    cout << "Input the type, width, lenght of the r1: ";
    cin >> r1.type >> r1.width >> r1.length;

    cout << "Input the type, width, lenght of the r2: ";
    cin >> r2.type >> r2.width >> r2.length;

    cout << "Input the type, width, lenght of the r3: ";
    cin >> r3.type >> r3.width >> r3.length;

    cout << "\nThe bedrooms are: \n";

    if(r1.type == "bedroom")
    {
        cout << endl << r2.type << "\t" << r2.width << "\t" << r2.length << "\tsurface: "
        << r2.width * r2.length;
    }

    room max = r1;
    if(r2.width * r2.length > max.width * max.length)
    {
        max = r2;
    }

    if(r3.width * r3.length > max.width * max.length)
    {
        max = r3;
    }

    cout << "\nThe room max is: ";
    {
		cout << endl << max.type << "\t" << max.width << "\t" << max.length << "\tsurface: "
		<< max.width * max.length;
    }

	return 0;

}