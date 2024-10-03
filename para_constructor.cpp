#include<iostream>
using namespace std;

class Pconstruct {
    int area;
    
    public:
    Pconstruct(int m, int n) {
        area = m * n;
    }

    void display() {
        cout << "Area: " << area << endl;
    }
};

int main() {
    int length, width;
    
    cout << "Enter length and width: ";
    cin >> length >> width;

    Pconstruct obj(length, width); 
    obj.display(); 
    
    return 0;
}
/*Enter length and width: 12
12
Area: 144
*/