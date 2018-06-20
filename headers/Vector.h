class Vector : public Point
{
	public: 
	    Vector(double, double, double);
	    Vector(Point, Point);
	    Vector() {}
	    
	    double length();
	    Vector getDirection();
	    Vector getProjection(Vector);
	    bool isNull();
	    bool isParallel(Vector);
	    bool isPerp(Vector);
		Vector operator+(Vector);
		Vector operator-(Vector);
		Vector operator*(double);
		double operator*(Vector);
		Vector operator^(Vector);
		double operator()(Vector, Vector);  
};
