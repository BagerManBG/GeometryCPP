Triangle::Triangle(Point a, Point b, Point c)
{
	if(a == b || a == c || b == c) 
	{
		throw EqualPointException();
	}
	else 
	{
		this->a = a;
		this->b = b;
		this->c = c;
		
		this->ab = Segment(a, b);
		this->bc = Segment(b, c);
		this->ac = Segment(a, c);
	}
}

void Triangle::getType(int &tp_1, int &tp_2)
{
	double len_ab = this->ab.length();
	double len_bc = this->bc.length();
	double len_ac = this->ac.length();
	
	double angleA = pow(len_ab, 2) + pow(len_ac, 2) - pow(len_bc, 2);
	double angleB = pow(len_ab, 2) + pow(len_bc, 2) - pow(len_ac, 2);
	double angleC = pow(len_bc, 2) + pow(len_ac, 2) - pow(len_ab, 2);
	double type = angleA * angleB * angleC;
	
	if(type > 0) 
	{
		tp_1 = 0; // "Acute"
	}
	else if(type == 0) 
	{
		tp_1 = 1; // "Right"
	}
	else
	{
		tp_1 = 2; // "Obtuse"
	}
	
	if(angleA == angleB && angleA == angleC) 
	{
		tp_2 = 0; // "Equilateral"
	}
	else if(angleA != angleB && angleA != angleC) 
	{
		tp_2 = 1; // "Scalene"
	}
	else
	{
		tp_2 = 2; // "Isosceles"
	}
}

double Triangle::getFace() 
{
	double len_ab = this->ab.length();
	double len_bc = this->bc.length();
	double len_ac = this->ac.length();
	
	double p = this->getPerimeter() / 2;
	
	return sqrt(p * (p - len_ab) * (p - len_bc) * (p - len_ac));
}

double Triangle::getPerimeter()
{
	double len_ab = this->ab.length();
	double len_bc = this->bc.length();
	double len_ac = this->ac.length();
	
	return len_ab + len_bc + len_ac;
}

Point Triangle::getCentroid()
{
	double x1, y1, z1;
	double x2, y2, z2;
	double x3, y3, z3;
	
	x1 = this->a.getX();
	x2 = this->b.getX();
	x3 = this->c.getX();
	
	y1 = this->a.getY();
	y2 = this->b.getY();
	y3 = this->c.getY();
	
	z1 = this->a.getZ();
	z2 = this->b.getZ();
	z3 = this->c.getZ();
	
	double res_x = (x1 + x2 + x3) / 3;
	double res_y = (y1 + y2 + y3) / 3;
	double res_z = (z1 + z2 + z3) / 3;
	
	return Point(res_x, res_y, res_z);
}

bool Triangle::operator<(Point other)
{
	double x, y, z;	
	double x1, y1, z1;
	double x2, y2, z2;
	double x3, y3, z3;
	
	x = other.getX();
	y = other.getY();
	z = other.getZ();
	
	x1 = this->a.getX();
	x2 = this->b.getX();
	x3 = this->c.getX();
	
	y1 = this->a.getY();
	y2 = this->b.getY();
	y3 = this->c.getY();
	
	z1 = this->a.getZ();
	z2 = this->b.getZ();
	z3 = this->c.getZ();
	
	double x_arr[] = {x1, x2, x3};
	double y_arr[] = {y1, y2, y3};
	double z_arr[] = {z1, z2, z3};
	
	double x_min = min_double(x_arr, 3);
	double x_max = max_double(x_arr, 3);
	
	double y_min = min_double(y_arr, 3);
	double y_max = max_double(y_arr, 3);
	
	double z_min = min_double(z_arr, 3);
	double z_max = max_double(z_arr, 3);
	
	bool xin = x >= x_min && x <= x_max;
	bool yin = y >= y_min && y <= y_max;
	bool zin = z >= z_min && z <= z_max;
	
	return xin && yin && zin && !(*(this) == other);
}

bool Triangle::operator>(Point other)
{
	return !(*(this) < other) && !(*(this) == other);
}

bool Triangle::operator==(Point other)
{
	return ab == other || ac == other || bc == other;
}
