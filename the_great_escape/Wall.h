/*
 * Wall.h
 *
 *  Created on: 19 Mar 2017
 *      Author: sbl
 */

#ifndef WALL_H_
#define WALL_H_

#include <string>

class Wall {
    int x;
    int y;
    std::string orientation;

public:
	Wall(int x, int y, std::string o) : x(x), y(y), orientation(o){}
	virtual ~Wall();
	std::string getOrientation() const;
	int getX() const;
	int getY() const;
};

typedef std::shared_ptr<Wall> WallPtr;

#endif /* WALL_H_ */
