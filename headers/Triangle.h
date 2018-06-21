class Triangle : public Point
{
	public: 
	    Triangle(Point, Point, Point);
	    
	    void getType(int&, int&);
	    double getFace();
	    double getPerimeter();
	    Point getCentroid();
	    
	    bool operator<(Point);
	    bool operator>(Point);
	    bool operator==(Point);
		
		Point getA() {return this->a;}
	    Point getB() {return this->b;}
	    Point getC() {return this->c;}
	    
	    Segment getLineAB() {return this->ab;}
	    Segment getLineBC() {return this->bc;}
	    Segment getLineAC() {return this->ac;}
	protected:
		Point a, b, c;
		Segment ab, bc, ac;
};
