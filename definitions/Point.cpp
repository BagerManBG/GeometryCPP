Point::Point(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

inline bool Point::operator==(Point other)
{
	if (x == other.x && y == other.y && z == other.z) 
	{
		return true;
	}
	
	return false;
}
