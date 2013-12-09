#ifndef MINRECTANGLEOVERLAPPING_H
#define MINRECTANGLEOVERLAPPING_H

#include "stdafx.h"

using namespace std;

struct Rect {
    int x1,y1,x2,y2;
};

int areaIntersect(Rect &r1, Rect &r2)
{
    return max(min(r1.x2, r2.x2) - max(r1.x1, r2.x1), 0) 
        * max(min(r1.y2, r2.y2) - max(r1.y1, r2.y1), 0);
}

int minOverlapping(vector<Rect> &rects, int W, int H, int w, int h) {
    vector<int> xs, ys;
    int n = rects.size();
    for(int i = 0; i < n; ++i)
    {
        xs.push_back(rects[i].x1); xs.push_back(rects[i].x2);
        ys.push_back(rects[i].y1); ys.push_back(rects[i].y2);
    }
    
    xs.push_back(0); xs.push_back(W);
    ys.push_back(0); ys.push_back(H);
    
    int xoff[] = {-w,  0, 0, -w};
    int yoff[] = {-h, -h, 0,  0};
    int minArea = w * h;
    for(int x = 0; x < xs.size(); ++x)
    {
        for(int y = 0; y < ys.size(); ++y)
        {
            for(int i = 0; i < 4; ++i)
            {
                Rect r;
                r.x1 = xs[x] + xoff[i]; r.y1 = ys[y] + yoff[i];
                r.x2 = r.x1 + w; r.y2 = r.y1 + h;
                if(r.x1 >= 0 && r.y1 >= 0 && r.x2 <= W && r.y2 <= H)
                {
                    int totalArea = 0;
                    for(int j = 0; j < n; ++j)
                    {
                        totalArea += areaIntersect(r, rects[j]);
                    }
                    minArea = min(minArea, totalArea);
                }
                
            }
        }
    }
    return minArea;
}
#endif