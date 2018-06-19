void pointController() 
{
	int x, y, z;
	
	cout<<"\nWrite down X, Y, Z for the point: ";
	
	cin>>x;
	cin>>y;
	cin>>z;
	
	Point* point = new Point(x, y, z);
	
	cout<<"\nYou have created a point with coords:\n";
	cout<<point->getX()<<", "<<point->getY()<<", "<<point->getZ()<<endl;
	
	int action_id;
	
	while(action_id != 0) 
	{
		cout<<"\nSelect one of the following numbers to do an action, 0 to exit\n";
		cout<<"1 - Compare Points\n\n";
		
		cin>>action_id;
		
		if(action_id == 1)
		{
			cout<<"\nWrite coords to compare points: ";
	
			cin>>x;
			cin>>y;
			cin>>z;
			
			if (*(point) == Point(x, y, z)) 
			{
				cout<<"\nThe points are eaqual!\n";
			} 
			else 
			{
				cout<<"\nThe points are not eaqual!\n";	
			}
		}
	}
	
	delete point;
}
