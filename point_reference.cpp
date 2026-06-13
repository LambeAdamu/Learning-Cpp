#include<iostream>
#include<string>

using namespace std;

class Car
{
    private:
        string brand; int year;

    public:
    Car(string &b, int y) {brand = b; year = y; }

    void display() const {
        cout << brand << " (" << year << ")" << endl;
    }

    void setYear(int newYear) {
        year = newYear;
    }

    int getYear() const {
        return year;
    }
};

int main(void)
{
Car Adamu("toyota",2005);
Car *A = &Adamu;
A->display();

Car Tonifar("RR",2025);
Car &S = Tonifar;
S.display();
return 0;
}
