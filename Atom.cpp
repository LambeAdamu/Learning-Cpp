#include<iostream>
using namespace std;

class Atom
{
	private:
		int proton = 1;
		int neutron = 0;
		int electron = 1;
	public:
		int getproton(){return proton;}
		int getneutron(){ return neutron;}
		int getelectron(){ return electron;}

		Atom(int a, int b, int c){proton = a; neutron = b; electron = c;}

		bool IsIon()
		{
			if( getproton() == getelectron() ){ return false;}
			else{return true;}
		}

		int getAtomicMassNumber(){return getproton() + getneutron();}
};

int main(void)
{
	return 0;
}
