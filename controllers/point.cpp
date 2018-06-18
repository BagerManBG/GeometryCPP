void pointController() 
{
	int x, y, z;
	
	cin>>x;
	cin>>y;
	cin>>z;
	
	Point* point = new Point(x, y, z);
	
	cout<<"\nYou have created a point with coords:\n";
	cout<<point->getX()<<", "<<point->getY()<<", "<<point->getZ()<<endl;
	
	cout<<"\nWrite coords to compare points:\n";
	
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
	
	delete point;
}
