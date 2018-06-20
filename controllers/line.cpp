void lineController() 
{
	Line* line;
	int method;
	
	cout<<"\nType 1 to create a Line using Point and Vector, other number to use two Poins.\n\n";
	cin>>method;
	
	if(method == 1) 
	{
		double x1, y1, z1;
		double x2, y2, z2;
		
		cout<<"\nWrite down X, Y, Z for the Point: ";
		
		cin>>x1;
		cin>>y1;
		cin>>z1;
		
		cout<<"\nWrite down X, Y, Z for the Vector: ";
		
		cin>>x2;
		cin>>y2;
		cin>>z2;
		
		line = new Line(Point(x1, y1, z1), Vector(x2, y2, z2));
	}
	else
	{
		double x1, y1, z1;
		double x2, y2, z2;
		
		cout<<"\nWrite down X, Y, Z for the first Point: ";
		
		cin>>x1;
		cin>>y1;
		cin>>z1;
		
		cout<<"\nWrite down X, Y, Z for the second Point: ";
		
		cin>>x2;
		cin>>y2;
		cin>>z2;
		
		line = new Line(Point(x1, y1, z1), Point(x2, y2, z2));
	}
	
	cout<<"\nYou have created a vector with params:\n";
	cout<<"Point -> "<<line->getPoint().getX()<<", "<<line->getPoint().getY()<<", "<<line->getPoint().getZ()<<endl;
	cout<<"Vector -> "<<line->getVector().getX()<<", "<<line->getVector().getY()<<", "<<line->getVector().getZ()<<endl;
	
	int action_id = -1;
	
	while(action_id != 0) 
	{
		cout<<"\nSelect one of the following numbers to do an action, 0 to exit\n";
		cout<<"1 - Find Direction\n";
		cout<<"2 - Find Normal Vector\n";
		cout<<"3 - Fing Angle between Two Lines\n";
		cout<<"4 - Check if Point is on Line\n";
		cout<<"5 - Check Parallelism with Line\n";
		cout<<"6 - Check Coincidence with Line\n";
		cout<<"7 - Check Intersect with Line\n";
		cout<<"8 - Check Crossed with Line\n";
		cout<<"9 - Check Perpendicularity with Line\n\n";
		
		cin>>action_id;
		
		switch (action_id)
		{
			case 1:
			{
				Vector result = line->getDirection();
				
				cout<<"\nThe result is a Vector with coords:\n";
				cout<<result.getX()<<", "<<result.getY()<<", "<<result.getZ()<<endl;
				
				break;
			}
			case 2:
			{
				Vector result = line->getNormalVector();
				
				cout<<"\nThe result is a Vector with coords:\n";
				cout<<result.getX()<<", "<<result.getY()<<", "<<result.getZ()<<endl;
				
				break;
			}
			case 3:
			{
				double x1, y1, z1;
				double x2, y2, z2;
				
				cout<<"\nWrite down X, Y, Z for the other Point: ";
				
				cin>>x1;
				cin>>y1;
				cin>>z1;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
				
				cin>>x2;
				cin>>y2;
				cin>>z2;
				
				Line other(Point(x1, y1, z1), Vector(x2, y2, z2));
				
				cout<<"\nThe angle between the two Lines is "<<line->findAngle(other)<<"rad\n";
				break;
			}
			case 4:
			{
				double x, y, z;
				
				cout<<"\nWrite down X, Y, Z for the other Point: ";
		
				cin>>x;
				cin>>y;
				cin>>z;
				
				Point point(x, y, z);
				
				if(*(line) + point)
				{
					cout<<"\nThe Point is on the Line\n";
				}
				else
				{
					cout<<"\nThe Point is off the Line\n";
				}
				
				break;
			}
			case 5:
			{
				double x1, y1, z1;
				double x2, y2, z2;
				
				cout<<"\nWrite down X, Y, Z for the other Point: ";
				
				cin>>x1;
				cin>>y1;
				cin>>z1;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
				
				cin>>x2;
				cin>>y2;
				cin>>z2;
				
				Line other(Point(x1, y1, z1), Vector(x2, y2, z2));
				
				if(*(line) || other)
				{
					cout<<"\nThe Lines are Parallel\n";
				}
				else
				{
					cout<<"\nThe Lines are NOT Parallel\n";
				}
				
				break;
			}
			case 6:
			{
				double x1, y1, z1;
				double x2, y2, z2;
				
				cout<<"\nWrite down X, Y, Z for the other Point: ";
				
				cin>>x1;
				cin>>y1;
				cin>>z1;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
				
				cin>>x2;
				cin>>y2;
				cin>>z2;
				
				Line other(Point(x1, y1, z1), Vector(x2, y2, z2));
				
				if(*(line) == other)
				{
					cout<<"\nThe Lines Coincide\n";
				}
				else
				{
					cout<<"\nThe Lines DO NOT Coincide\n";
				}
				
				break;
			}
			case 7:
			{
				double x1, y1, z1;
				double x2, y2, z2;
				
				cout<<"\nWrite down X, Y, Z for the other Point: ";
				
				cin>>x1;
				cin>>y1;
				cin>>z1;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
				
				cin>>x2;
				cin>>y2;
				cin>>z2;
				
				Line other(Point(x1, y1, z1), Vector(x2, y2, z2));
				
				if(*(line) && other)
				{
					cout<<"\nThe Lines Intersect\n";
				}
				else
				{
					cout<<"\nThe Lines DO NOT Intersect\n";
				}
				
				break;
			}
			case 8:
			{
				double x1, y1, z1;
				double x2, y2, z2;
				
				cout<<"\nWrite down X, Y, Z for the other Point: ";
				
				cin>>x1;
				cin>>y1;
				cin>>z1;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
				
				cin>>x2;
				cin>>y2;
				cin>>z2;
				
				Line other(Point(x1, y1, z1), Vector(x2, y2, z2));
				
				if(*(line) != other)
				{
					cout<<"\nThe Lines Cross\n";
				}
				else
				{
					cout<<"\nThe Lines DO NOT Cross\n";
				}
				
				break;
			}
			case 9:
			{
				double x1, y1, z1;
				double x2, y2, z2;
				
				cout<<"\nWrite down X, Y, Z for the other Point: ";
				
				cin>>x1;
				cin>>y1;
				cin>>z1;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
				
				cin>>x2;
				cin>>y2;
				cin>>z2;
				
				Line other(Point(x1, y1, z1), Vector(x2, y2, z2));
				
				if(*(line) | other)
				{
					cout<<"\nThe Lines are Perpendicular\n";
				}
				else
				{
					cout<<"\nThe Lines are NOT Perpendicular\n";
				}
				
				break;
			}
			default:
				break;
		}
	}
	
	delete line;
}
