#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

#include <iostream>
#include "grafika.hpp"

class rectangle{
    private:
        int Xmin;
        int Ymin;
        int Xmax;
        int Ymax;
    public:
        rectangle();
        rectangle(int Xmid, int Ymid, int width, int height)
        {
            if(width % 2 == 1){
                Xmin = Xmid - (width/2);
                Xmax = Xmid + (width/2);
            }else{
                Xmin = Xmid + 1 - (width/2);
                Xmax = Xmid + (width/2);
            }

            if(height % 2 == 1){
                Ymin = Ymid - (height/2);
                Ymax = Ymid + (height/2);
            }else{
                Ymin = Ymid + 1 - (height/2);
                Ymax = Ymid + (height/2);
            }
        }
        rectangle(int Xmin, int Ymin, int Xmax, int Ymax, int null){
            rectangle::Xmin = Xmin;
            rectangle::Ymin = Ymin;
            rectangle::Xmax = Xmax;
            rectangle::Ymax = Ymax;
        }

        int getXmin();  void setXmin(int temp);
        int getYmin();  void setYmin(int temp);
        int getXmax();  void setXmax(int temp);
        int getYmax();  void setYmax(int temp);

        int getXmid(); int getwidth();
        int getYmid(); int getheight();

        rectangle operator + (rectangle &obj);
        rectangle operator - (rectangle &obj);

        bool operator == (rectangle &obj);

        rectangle operator ++();
        rectangle operator --();

        int operator [] (int index);

};

#endif