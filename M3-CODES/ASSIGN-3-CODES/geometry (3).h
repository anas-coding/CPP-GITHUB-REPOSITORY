#pragma once
class point
{
private:
	int x, y;
public:
	point();
	point(int, int);
	int getX() const;
	int getY()  const;
	void setX(const int);
	void setY(const int);
};

