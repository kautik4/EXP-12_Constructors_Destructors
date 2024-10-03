#include<iostream>
using namespace std;
class date {
    int d, m, y;
public:
    date() {
        cout << "Constructor called." << endl;
    }
    void inputDate() {
        cout << "Enter date: ";
        cin >> d;
        cout << "Enter month: ";
        cin >> m;
        cout << "Enter year: ";
        cin >> y;
    }
    void displayDate() {
        cout << "The date is: " << d << "/" << m << "/" << y << endl;
    }
};
int main() {
    date obj;         
    obj.inputDate();  
    obj.displayDate(); 
    return 0;
}
/*
Constructor called.
Enter date: 4
Enter month: 9
Enter year: 2024
The date is: 4/9/2024
*/