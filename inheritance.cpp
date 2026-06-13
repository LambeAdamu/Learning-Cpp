#include<iostream>
using namespace std;

class Counter
{
    protected: int count;
    public:
        Counter() {count = 0; }
        Counter(int c){count = c; }
        int get_count()const{return count;}
        Counter operator++(){return Counter(++count);}

};

class Counter2 : public Counter
{
    protected: int count;
    public:
    Counter2() : count(0) {};
    Counter2 operator--() {return Counter2(--count);}
};

int main(void)
{
    Counter Dn c1;
    cout<<"\n c1 = "<< c1.get_count();
    ++c1; ++c1; ++c1;
    cout<<"\n c1 = "<< c1.get_count();
    --c1;--c1;
    cout<<"\n c1 = "<< c1.get_count();
    cout<<endl;
    return 0;
}
