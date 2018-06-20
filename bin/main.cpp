#include<iostream>
#include <cmath>
using namespace std;

struct VectorLengthException : public exception
{
	const char * what () const throw ()
    {
    	return "Vector has a length of zero!0";
    }
};

double max_double(double arr[], int n)
{
	double max = arr[0];
	
	for(int i = 1; i < n; i++)
	{
		if(arr[i] > max) 
		{
			max = arr[i];
		}
	}
	
	return max;
}

#include "../includes.cpp"

int main()
{
	int elem_id = -1;
	
	while (elem_id != 0)
	{
		cout<<"Select a number to create a figure. Enter 0 to exit.\n";
		cout<<"1 - Point\n";
		cout<<"2 - Vector\n";
		cout<<"3 - Line\n";
		cout<<"4 - Segment\n";
		cout<<"5 - Triangle\n\n";
	
		cin>>elem_id;
		
		switch (elem_id)
		{
			case 0:
				break;
			case 1: 
			{
				pointController();
				break;
			}
			case 2:
			{
				vectorController();
				break;	
			}
			case 3:
			{
				lineController();
				break;
			}
			case 4:
				//return new Segment;
				break;
			case 5:
				//return new Triangle;
				break;
			default:
				cout<<"No Class was found!"<<endl;
				break;
		}
		
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
