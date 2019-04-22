#ifndef POINTLIST_H
#define POINTLIST_H

#include <vector>
#include "GenPoint.h"
#include "Color.h"


class PointList
{
private:
	Color color;
	std::vector<GenPoint> points;

public:
	PointList();
	void addNode(GenPoint point);
	void draw();
	Color getColor();
	void setColor(Color color);
};

#endif