Vector::Vector(double x, double y, double z) : Point(x, y, z)
{	
	cout<<"A vector has been created!\n";
}

Vector::Vector(Point A, Point B) : Point(A.getX() - B.getX(), A.getY() - B.getY(), A.getZ() - B.getZ())
{
	x = A.getX() - B.getX();
	y = A.getY() - B.getY();
	z = A.getZ() - B.getZ();
}

double Vector::length()
{
	return sqrt((x*x)+(y*y)+(z*z));
}

bool Vector::isNull()
{
	return x == 0 && y == 0 && z == 0;
}

bool Vector::isParallel(const Vector other)
{
	return (x/other.x == y/other.y) == z/other.z;
}

bool Vector::isPerp(const Vector other)
{
	return (x*other.x + y*other.y + z*other.z) == 0;
}

Vector Vector::operator+(const Vector other)
{
	Vector sum(0, 0, 0);
	sum.x = x + other.x;
	sum.y = y + other.y;
	sum.z = z + other.z;
	
	return sum;
}

Vector Vector::operator-(const Vector other)
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

double Vector::operator*(const Vector other)
{
	return x*other.x + y*other.y + z*other.z;
}

Vector Vector::operator^(const Vector other)
{
	Vector result(0, 0, 0);
	result.x = y*other.z - z*other.y;
	result.y = -(x*other.z) + z*other.x;
	result.z = x*other.y - y*other.x;
	
	return result;
}

double Vector::operator()(const Vector u, const Vector v)
{
	
}
