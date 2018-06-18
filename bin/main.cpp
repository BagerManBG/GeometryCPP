#include<iostream>
#include <cmath>
using namespace std;

#include "../includes.cpp"

int main()
{
	Point* point;
	int elem_id;
		
	cin>>elem_id;
	
	while (elem_id < 1 || elem_id > 5)
	{
		cin>>elem_id;
	}
	
	switch (elem_id)
	{
		case 1: 
		{
			pointController();
			break;
		}
		case 2:
			//return new Vector(1,2,3);
			break;
		case 3:
			//return new Line;
			break;
		case 4:
			//return new Segment;
			break;
		case 5:
			//return new Triangle;
			break;
		default:
			cout<<"No Class was found!"<<endl;
			//return 0;
	}
	
	system("pause");
	return 0;
}
