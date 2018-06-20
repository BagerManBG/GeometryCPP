Segment::Segment(Point start, Point end) : Line(start, end)
{
	this->start = start;
	this->end = end;
}

double Segment::length()
{
	double x1 = start.getX();
	double y1 = start.getY();
	double z1 = start.getZ();
	
	double x2 = end.getX();
	double y2 = end.getY();
	double z2 = end.getZ();
	
	return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2) + pow(z1-z2, 2));
}

Point Segment::center() 
{
	double x1 = start.getX();
	double y1 = start.getY();
	double z1 = start.getZ();
	
	double x2 = end.getX();
	double y2 = end.getY();
	double z2 = end.getZ();
	
	double px = (x1 + x2) / 2;
	double py = (y1 + y2) / 2;
	double pz = (z1 + z2) / 2;
	
	return Point(px, py, pz);
}

bool Segment::operator==(Point point)
{
	Segment s1(start, point);
	Segment s2(point, end);
	
	return (s1.length() + s2.length()) == this->length();
}
