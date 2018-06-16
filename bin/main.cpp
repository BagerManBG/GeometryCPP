#include<iostream>
using namespace std;

#include "../includes.cpp"

Element* getElem (int elem_id) {
	switch (elem_id) {
		case 1:
			return new Point;
		case 2:
			return new Vector;
		case 3:
			return new Line;
		case 4:
			return new Segment;
		case 5:
			return new Triangle;
		default:
			cout<<"No Class was found!"<<endl;
			return 0;
	}	
}

int main() {
	Element* elem;
	int elem_id;
	
	do {
		cin>>elem_id;
		elem = getElem(elem_id);
	} while (elem == 0);
	
	delete elem;
	
	system("pause");
	return 0;
}
