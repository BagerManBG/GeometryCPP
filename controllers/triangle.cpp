void triangleController() 
{
	double x1, y1, z1;
	double x2, y2, z2;
	double x3, y3, z3;
	
	cout<<"\nWrite down X, Y, Z for the A Point: ";
	
	cin>>x1;
	cin>>y1;
	cin>>z1;
	
	cout<<"\nWrite down X, Y, Z for the B Point: ";
	
	cin>>x2;
	cin>>y2;
	cin>>z2;
	
	cout<<"\nWrite down X, Y, Z for the C Point: ";
	
	cin>>x3;
	cin>>y3;
	cin>>z3;
	
	Triangle* triangle = new Triangle(Point(x1, y1, z1), Point(x2, y2, z2), Point(x3, y3, z3));
	
	cout<<"\nYou have created a Triangle with params:\n";
	cout<<endl;
	cout<<"Point A -> "<<triangle->getA().getX()<<", "<<triangle->getA().getY()<<", "<<triangle->getA().getZ()<<endl;
	cout<<"Point B -> "<<triangle->getB().getX()<<", "<<triangle->getB().getY()<<", "<<triangle->getB().getZ()<<endl;
	cout<<"Point C -> "<<triangle->getC().getX()<<", "<<triangle->getC().getY()<<", "<<triangle->getC().getZ()<<endl;
	cout<<endl;
	cout<<"Line A -> "<<triangle->getLineBC().length()<<endl;
	cout<<"Line B -> "<<triangle->getLineAC().length()<<endl;
	cout<<"Line C -> "<<triangle->getLineAB().length()<<endl;
	
	int action_id = -1;
	
	while(action_id != 0) 
	{
		cout<<"\nSelect one of the following numbers to do an action, 0 to exit\n";
		cout<<"1 - Find Triangle Type\n";
		cout<<"2 - Find Face\n";
		cout<<"3 - Find Perimeter\n";
		cout<<"4 - Find Centroid\n";
		cout<<"5 - Check if Point is inside Triangle\n";
		cout<<"6 - Check if Point is outside Triangle\n";
		cout<<"7 - Check if Point is on Triangle\n\n";
		
		cin>>action_id;
		
		switch (action_id)
		{
			case 1:
			{
				int type_by_angle, type_by_sides;
				
				triangle->getType(type_by_angle, type_by_sides);
				
				cout<<"\nType -> ";
				
				switch(type_by_angle)
				{
					case 0:
					{
						cout<<"Acute";
						break;
					}
					case 1:
					{
						cout<<"Right";
						break;
					}
					case 2:
					{
						cout<<"Obtuse";
						break;
					}
				}
				
				cout<<" | ";
				
				switch(type_by_sides)
				{
					case 0:
					{
						cout<<"Equilateral";
						break;
					}
					case 1:
					{
						cout<<"Scalene";
						break;
					}
					case 2:
					{
						cout<<"Isosceles";
						break;
					}
				}
				
				cout<<"\n";
				
				break;
			}
			case 2:
			{
				cout<<"\nFace = "<<triangle->getFace()<<"\n";
				
				break;
			}
			case 3:
			{
				cout<<"\nPerimeter = "<<triangle->getPerimeter()<<"\n";
				
				break;
			}
			case 4:
			{
				Point result = triangle->getCentroid();
				
				cout<<"\nThe result is a Point with coords:\n";
				cout<<result.getX()<<", "<<result.getY()<<", "<<result.getZ()<<endl;
				
				break;
			}
			case 5:
			{
				double x, y, z;
				
				cout<<"\nWrite down X, Y, Z for the other Point: ";
		
				cin>>x;
				cin>>y;
				cin>>z;
				
				Point point(x, y, z);
				
				if(*(triangle) < point)
				{
					cout<<"\nThe Point is inside the Triangle\n";
				}
				else
				{
					cout<<"\nThe Point is NOT inside the Triangle\n";
				}
				
				break;
			}
			case 6:
			{
				double x, y, z;
				
				cout<<"\nWrite down X, Y, Z for the other Point: ";
		
				cin>>x;
				cin>>y;
				cin>>z;
				
				Point point(x, y, z);
				
				if(*(triangle) > point)
				{
					cout<<"\nThe Point is outside the Triangle\n";
				}
				else
				{
					cout<<"\nThe Point is NOT outside the Triangle\n";
				}
				
				break;
			}
			case 7:
			{
				double x, y, z;
				
				cout<<"\nWrite down X, Y, Z for the other Point: ";
		
				cin>>x;
				cin>>y;
				cin>>z;
				
				Point point(x, y, z);
				
				if(*(triangle) == point)
				{
					cout<<"\nThe Point is on the Triangle\n";
				}
				else
				{
					cout<<"\nThe Point is NOT on the Triangle\n";
				}
				
				break;
			}
			default:
				break;
		}
	}
	
	delete triangle;
}
