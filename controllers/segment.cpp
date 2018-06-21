void segmentController()
{
	double x1, y1, z1;
	double x2, y2, z2;
	
	cout<<"\nWrite down X, Y, Z for the Start Point: ";
	
	cin>>x1;
	cin>>y1;
	cin>>z1;
	
	cout<<"\nWrite down X, Y, Z for the End Point: ";
	
	cin>>x2;
	cin>>y2;
	cin>>z2;
	
	Segment* segment = new Segment(Point(x1, y1, z1), Point(x2, y2, z2));
	
	cout<<"\nYou have created a Segment with params:\n";
	cout<<endl;
	cout<<"Start -> "<<segment->getStart().getX()<<", "<<segment->getStart().getY()<<", "<<segment->getStart().getZ()<<endl;
	cout<<"End -> "<<segment->getEnd().getX()<<", "<<segment->getEnd().getY()<<", "<<segment->getEnd().getZ()<<endl;
	
	int action_id = -1;
	
	while(action_id != 0) 
	{
		cout<<"\nSelect one of the following numbers to do an action, 0 to exit\n";
		cout<<"1 - Find Length\n";
		cout<<"2 - Find Center\n";
		cout<<"3 - Check if Point is on Segment\n\n";
		
		cin>>action_id;
		
		switch (action_id)
		{
			case 1:
			{
				cout<<"\nLenght = "<<segment->length()<<"\n";
				
				break;
			}
			case 2:
			{
				Point center = segment->center();
				
				cout<<"\nThe Center is a Point with coords:\n";
				cout<<center.getX()<<", "<<center.getY()<<", "<<center.getZ()<<endl;
				
				break;
			}
			case 3:
			{
				double x, y, z;
				
				cout<<"\nWrite X, Y, Z for the other Point: ";
	
				cin>>x;
				cin>>y;
				cin>>z;
				
				if(*(segment)==Point(x, y, z))
				{
					cout<<"\nThe Point is on the Segment\n";
				}
				else
				{
					cout<<"\nThe Point is NOT on the Segment\n";
				}
				
				break;
			}
			default:
				break;
		}
	}
	
	delete segment;
}
