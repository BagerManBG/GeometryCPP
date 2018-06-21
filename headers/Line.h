class Line : public Vector
{
	public: 
		Line(Point, Point);
	    Line(Point, Vector);
	    Line() {}
	    
	    Vector getDirection();
	    Vector getNormalVector();
	    double findAngle(Line);
	    bool operator+(Point);
	    bool operator||(Line);
	    bool operator==(Line);
	    bool operator&&(Line);
	    bool operator!=(Line);
	    bool operator|(Line);
	    
	    Point getPoint() {return this->p;}
	    Vector getVector() {return this->v;}
	
	protected:
		Point p;
		Vector v;
};
