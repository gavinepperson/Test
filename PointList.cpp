//Gavin Epperson
//Lab 11 In PointList.cpp
//This class stores a vector list of points and draws them on a map

#include "PointList.h"
#include "graph1.h"

//Set color pdf to 0
PointList::PointList()
{
	color.setColor(0, 0, 0);
}

//Append vector list of points
void PointList::addNode(GenPoint point)
{
	points.push_back(point);
}

//Draw Arkansas map and circles at each point
void PointList::draw()
{
	int circle = 0;

	//Display map BMP
	displayBMP("arkansas1.BMP", 0, 0);

	//Draw filled circle at each point
	for (int i = 0; i < points.size(); i++) {
		//Fill circle of radius = 10
		for (int r = 10; r > 0; r--) {
			circle = drawCircle(r, points[i].getX(), points[i].getY());
			::setColor(circle, color.getRed(), color.getGreen(), color.getBlue());
		}
	}
}

//Getter for color
Color PointList::getColor()
{
	return color;
}

//Setter for color
void PointList::setColor(Color color)
{
	this->color = color;
}