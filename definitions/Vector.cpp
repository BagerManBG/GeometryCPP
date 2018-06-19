Vector::Vector(double x, double y, double z) : Point(x, y, z)
{	
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector::Vector(Point A, Point B) : Point(A.getX() - B.getX(), A.getY() - B.getY(), A.getZ() - B.getZ())
{
	this->x = A.getX() - B.getX();
	this->y = A.getY() - B.getY();
	this->z = A.getZ() - B.getZ();
}

double Vector::length()
{
	return sqrt((x*x)+(y*y)+(z*z));
}

Vector Vector::getDirection()
{
	//return;
}

Vector Vector::getProjection(Vector other)
{
	//return;
}

bool Vector::isNull()
{
	return x == 0 && y == 0 && z == 0;
}

bool Vector::isParallel(Vector other)
{
	return x/other.x == y/other.y && x/other.x == z/other.z;
}

bool Vector::isPerp(Vector other)
{
	return (x*other.x + y*other.y + z*other.z) == 0;
}

Vector Vector::operator+(Vector other)
{
	Vector sum(0, 0, 0);
	sum.x = x + other.x;
	sum.y = y + other.y;
	sum.z = z + other.z;
	
	return sum;
}

Vector Vector::operator-(Vector other)
{
	Vector diff(0, 0, 0);
	diff.x = x - other.x;
	diff.y = y - other.y;
	diff.z = z - other.z;
	
	return diff;
}

Vector Vector::operator*(double r)
{
	Vector mult(0, 0, 0);
	
	mult.x = x*r;
	mult.y = y*r;
	mult.z = z*r;
	
	return mult;
}

double Vector::operator*(Vector other)
{
	return x*other.x + y*other.y + z*other.z;
}

Vector Vector::operator^(Vector other)
{
	Vector result(0, 0, 0);
	
	result.x = y*other.z - z*other.y;
	result.y = -(x*other.z) + z*other.x;
	result.z = x*other.y - y*other.x;
	
	return result;
}

double Vector::operator()(Vector v, Vector w)
{
//	| x, v.x, w.x | | a, b, c |
//	| y, v.y, w.y | | d, e, f |
//	| z, v.z, w.z | | g, h, i |

	return x * (v.y * w.z - w.y * v.z) - v.x * (y * w.z - z * w.y) + w.x * (y * v.z - v.y * z);
}
