void vectorController()
{
	Vector* vector;
	int method;
	
	cout<<"\nType 1 to create a Vector using X, Y, Z. Type any other number to use two Poins.\n";
	cin>>method;
	
	if(method == 1) 
	{
		double x, y, z;
		
		cout<<"\nWrite down X, Y, Z for the vector: ";
		
		cin>>x;
		cin>>y;
		cin>>z;
		
		vector = new Vector(x, y, z);
	}
	else
	{
		double x1, y1, z1;
		double x2, y2, z2;
		
		cout<<"\nWrite down X, Y, Z for the first point: ";
		
		cin>>x1;
		cin>>y1;
		cin>>z1;
		
		cout<<"\nWrite down X, Y, Z for the second point: ";
		
		cin>>x2;
		cin>>y2;
		cin>>z2;
		
		vector = new Vector(Point(x1, y1, z1), Point(x2, y2, z2));
	}
	
	cout<<"\nYou have created a Vector with coords:\n";
	cout<<vector->getX()<<", "<<vector->getY()<<", "<<vector->getZ()<<endl;
	
	int action_id = -1;
	
	while(action_id != 0) 
	{
		cout<<"\nSelect one of the following numbers to do an action, 0 to exit\n";
		cout<<"1 - Find Length\n";
		cout<<"2 - Find Direction\n";
		cout<<"3 - Projection over Vector\n";
		cout<<"4 - Check Null Vector\n";
		cout<<"5 - Check Parallelism with Vector\n";
		cout<<"6 - Check Perpendicularity with Vector\n";
		cout<<"7 - Sum Vector\n";
		cout<<"8 - Substract Vector\n";
		cout<<"9 - Multiply Vector with Number\n";
		cout<<"10 - Multiply Vector with Vector (Scalar Product)\n";
		cout<<"11 - Multiply Vector with Vector\n";
		cout<<"12 - Multiply Vector with Two Vectors\n\n";
		
		cin>>action_id;
		
		switch (action_id)
		{
			case 1:
			{
				cout<<"\nLenght = "<<vector->length()<<"\n";
				
				break;
			}
			case 2:
			{
				Vector result = vector->getDirection();
				
				cout<<"\nThe result is a Vector with length -> "<<result.length()<<" and coords:\n";
				cout<<result.getX()<<", "<<result.getY()<<", "<<result.getZ()<<endl;
				
				break;
			}
			case 3:
			{
				double x, y, z;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
		
				cin>>x;
				cin>>y;
				cin>>z;
				
				Vector other(x, y, z);
				
				Vector result = vector->getProjection(other);
				
				cout<<"\nThe result is a Vector with coords:\n";
				cout<<result.getX()<<", "<<result.getY()<<", "<<result.getZ()<<endl;
				
				break;
			}
			case 4:
			{
				if(vector->isNull())
				{
					cout<<"\nVector is Null!\n";
				}
				else
				{
					cout<<"\nVector is NOT Null!\n";
				}
				
				break;
			}
			case 5:
			{
				double x, y, z;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
		
				cin>>x;
				cin>>y;
				cin>>z;
				
				Vector other(x, y, z);
				
				if(vector->isNull() || other.isNull()) throw VectorLengthException();
				
				if(vector->isParallel(other))
				{
					cout<<"\nThe Vectors are Parallel\n";
				}
				else
				{
					cout<<"\nThe Vectors are NOT Parallel\n";
				}
				
				break;
			}
			case 6:
			{
				double x, y, z;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
		
				cin>>x;
				cin>>y;
				cin>>z;
				
				Vector other(x, y, z);
				
				if(vector->isNull() || other.isNull()) throw VectorLengthException();
				
				if(vector->isPerp(other))
				{
					cout<<"\nThe Vectors are Perpendicular\n";
				}
				else
				{
					cout<<"\nThe Vectors are NOT Perpendicular\n";
				}
				
				break;
			}
			case 7:
			{
				double x, y, z;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
		
				cin>>x;
				cin>>y;
				cin>>z;
				
				Vector other(x, y, z);
				
				Vector result = *(vector) + other;
				
				cout<<"\nThe result is a Vector with coords:\n";
				cout<<result.getX()<<", "<<result.getY()<<", "<<result.getZ()<<endl;
				
				break;
			}
			case 8:
			{
				double x, y, z;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
		
				cin>>x;
				cin>>y;
				cin>>z;
				
				Vector other(x, y, z);
				
				Vector result = *(vector) - other;
				
				cout<<"\nThe result is a Vector with coords:\n";
				cout<<result.getX()<<", "<<result.getY()<<", "<<result.getZ()<<endl;
				
				break;
			}
			case 9:
			{
				double r;
				
				cout<<"\nWrite down the number: ";
		
				cin>>r;
				
				Vector result = *(vector) * r;
				
				cout<<"\nThe result is a Vector with coords:\n";
				cout<<result.getX()<<", "<<result.getY()<<", "<<result.getZ()<<endl;
				
				break;
			}
			case 10:
			{
				double x, y, z;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
		
				cin>>x;
				cin>>y;
				cin>>z;
				
				Vector other(x, y, z);
				
				cout<<"\nScalar Product = "<<*(vector) * other<<"\n";
				
				break;
			}
			case 11:
			{
				double x, y, z;
				
				cout<<"\nWrite down X, Y, Z for the other Vector: ";
		
				cin>>x;
				cin>>y;
				cin>>z;
				
				Vector other(x, y, z);
				
				Vector result = *(vector) ^ other;
				
				cout<<"\nThe result is a Vector with coords:\n";
				cout<<result.getX()<<", "<<result.getY()<<", "<<result.getZ()<<endl;
				
				break;
			}
			case 12:
			{
				double x1, y1, z1;
				double x2, y2, z2;
				
				cout<<"\nWrite down X, Y, Z for the first vector: ";
				
				cin>>x1;
				cin>>y1;
				cin>>z1;
				
				cout<<"\nWrite down X, Y, Z for the second vector: ";
				
				cin>>x2;
				cin>>y2;
				cin>>z2;
				
				Vector u(vector->getX(), vector->getY(), vector->getZ()), v(x1, y1, z1), w(x2, y2, z2);
				
				cout<<"\nDet = "<<u(v, w)<<"\n";
		
				break;
			}
			default:
				break;
		}
	}
	
	delete vector;
}
