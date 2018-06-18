class Point : public Element
{
	public: 
	    Point(double, double, double);
	    Point() {};
	    
	    bool operator==(Point other);
	    
	    double getX() {return this->x;}
	    double getY() {return this->y;}
	    double getZ() {return this->z;}
	    
	private:
		double x, y, z;    
};
