#include<iostream>
#include <cmath>
using namespace std;

#include "../includes.cpp"

Point* createPoint() 
{
	int x, y, z;
	
	cin>>x;
	cin>>y;
	cin>>z;
	
	return new Point(x, y, z);
}

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
			point = createPoint();
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
	Point* p2 = new Point(1, 2, 3);
	cout<<point->getX()<<" "<<point->getY()<<" "<<point->getZ()<<endl;
	if (p2 == point)
	{
		cout<<"y"<<endl;
	}
	else
	{
		cout<<"n"<<endl;
	}
	
	
	delete point;
	
	system("pause");
	return 0;
}
