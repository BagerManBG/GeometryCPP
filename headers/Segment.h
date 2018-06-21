class Segment : public Line
{
	public: 
	    Segment(Point, Point);
	    Segment() {}
	    
	    double length();
	    Point center();
	    bool operator==(Point);
	    
	    Point getStart() {return this->start;}
	    Point getEnd() {return this->end;}
	
	protected:
		Point start, end;
};
