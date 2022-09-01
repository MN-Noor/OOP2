#ifndef DATE_H
#define DATE_H 
class date
{
private:
	int dd;
	int mm;
	int yy;
public:
	date();

	date(int d, int m, int y);
	void get();
	
	bool isvalid();
	
	void display();
	int maxdays(int mm);
    bool operator <(date dd1);
    bool operator<=(date dd1);
    bool operator>(date dd1);
    bool operator==(date dd1);
     bool operator!=(date dd1);
     date operator++(int);
     date operator--();
     int operator-(date dd1);
     
};

#endif // TIME_H