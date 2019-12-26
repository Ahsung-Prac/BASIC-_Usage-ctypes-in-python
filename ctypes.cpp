#include<iostream>
using namespace std;

extern "C"{

	struct A{
		void Hello(){
			cout << "Hello world!" << endl;
		}
	};

	A* make_A(){ return new A(); }
	void hello(A* a){ a->Hello();}
	void show() { cout << "nice~\n"; }
}
