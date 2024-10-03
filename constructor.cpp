#include<iostream>
using namespace std;
class date{
    int d,m,y;
    public:
    date()
    {
        cout<<"Constructor called: "<<endl;
        d=4;
        m=9;
        y=2024;
    }
};
int main(){
    date obj;
}
/*
Constructor called.
*/