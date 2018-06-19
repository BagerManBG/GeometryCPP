class Point : public Element
{
	public: 
	    Point(double, double, double);
	    
	    bool operator==(Point);
	    
	    double getX() {return this->x;}
	    double getY() {return this->y;}
	    double getZ() {return this->z;}
	    
	protected:
		double x, y, z;    
};
