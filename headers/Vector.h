class Vector : public Point
{
	public: 
	    Vector(double, double, double);
	    Vector(Point, Point);
	    
	    double length();
	    bool isNull();
	    bool isParallel(const Vector);
	    bool isPerp(const Vector);
		Vector operator+(const Vector);
		Vector operator-(const Vector);
		Vector operator*(double);
		double operator*(const Vector);
		Vector operator^(const Vector);
		double operator()(const Vector, const Vector);
			    
	private:
	double x, y, z;    
};
