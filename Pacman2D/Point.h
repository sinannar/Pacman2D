//
//  Point.h
//  Pacman2D
//
//  Created by Sinan on 23/08/15.
//  Copyright (c) 2015 Sinan. All rights reserved.
//

#ifndef __Pacman2D__Point__
#define __Pacman2D__Point__

#include <stdio.h>

namespace snnnr{
    class Point{
        
    public:
        Point();
        ~Point();
        Point(int& x,int& y);
        Point(const Point& p);
        Point operator=(const Point & rhs);
        
        int setCoordinates(int x,int y);
        int setXCoordinate(int x);
        int setYCoordinate(int y);
        
        int getXCoordinate();
        int getYCoordinate();

        
    private:
        int xCoordinates;
        int yCoordinates;
        
    };
}

#endif /* defined(__Pacman2D__Point__) */
