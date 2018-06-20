Line::Line(Point p1, Point p2)
{
	this->p = p1;
	this->v = Vector(p1, p2);
}

Line::Line(Point p, Vector v)
{
	this->p = p;
	this->v = v;
}

Vector Line::getDirection()
{
	return this->v.getDirection();
}

Vector Line::getNormalVector()
{
	double x, y, z;
	
	x = this->v.getX();
	y = this->v.getY();
	z = this->v.getZ();
	
	return Vector(1/x, 1/y, 1/z);
}

double Line::findAngle(Line other)
{
	return acos((this->v * other.v) / (this->v.length() * other.v.length()));
}

bool Line::operator+(Point other)
{
	double t1 = (other.getX() - p.getX()) / v.getX();
	double t2 = (other.getY() - p.getY()) / v.getY();
	double t3 = (other.getZ() - p.getZ()) / v.getZ();
	
	return (t1 == t2) && (t1 == t3);
}

bool Line::operator||(Line other)
{
	return v.isParallel(other.getVector());
}

bool Line::operator==(Line other)
{
	Line line = *(this);
	return (line + other.getPoint()) && (line || other);
}

bool Line::operator&&(Line other)
{
	Line line = *(this);
	return ((line + other.getPoint()) && !(line || other)) || (line == other);
}

bool Line::operator!=(Line other)
{
	Line line = *(this);
	return !(line + other.getPoint()) && !(line || other);
}

bool Line::operator|(Line other)
{
	Line line = *(this);	
	return (line && other) && ((this->v * other.v) / (this->v.length() * other.v.length()) == 0);
}
