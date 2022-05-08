#include <iostream>
#include "rectangle.hpp"
#include "grafika.hpp"

int rectangle::getXmin(){ return this->Xmin;} void rectangle::setXmin(int temp){ this->Xmin=temp;}
int rectangle::getXmax(){ return this->Xmax;} void rectangle::setXmax(int temp){ this->Xmax=temp;}
int rectangle::getYmin(){ return this->Ymin;} void rectangle::setYmin(int temp){ this->Ymin=temp;}
int rectangle::getYmax(){ return this->Ymax;} void rectangle::setYmax(int temp){ this->Ymax=temp;}

int rectangle::getwidth(){ return (this->Xmax - this->Xmin + 1);}
int rectangle::getheight(){ return (this->Ymax - this->Ymin + 1);}
int rectangle::getXmid(){ return (this->Xmax - (this->getwidth()/2));}
int rectangle::getYmid(){ return (this->Ymax - (this->getheight()/2));}

rectangle rectangle::operator + (rectangle &obj){
    if (*this == obj){
        int temp1,temp2,temp3,temp4;
        if (this->Xmin < obj.getXmin()){temp1= this->Xmin; } else{temp1= obj.getXmin(); }
        if (this->Xmax > obj.getXmax()){temp2= this->Xmax; } else{temp2= obj.getXmax(); }
        if (this->Ymin < obj.getYmin()){temp3= this->Ymin; } else{temp3= obj.getYmin(); }
        if (this->Ymax > obj.getYmax()){temp4= this->Ymax; } else{temp4= obj.getYmax(); }

        rectangle temp(temp1,temp2,temp3,temp4,0);
        return temp;
    }else{
        throw;
    }
}

rectangle rectangle::operator - (rectangle &obj){
    if (*this == obj){
        int temp1,temp2,temp3,temp4;
        if (this->Xmin > obj.getXmin()){temp1= this->Xmin; } else{temp1= obj.getXmin(); }
        if (this->Xmax < obj.getXmax()){temp2= this->Xmax; } else{temp2= obj.getXmax(); }
        if (this->Ymin > obj.getYmin()){temp3= this->Ymin; } else{temp3= obj.getYmin(); }
        if (this->Ymax < obj.getYmax()){temp4= this->Ymax; } else{temp4= obj.getYmax(); }

        rectangle temp(temp1,temp2,temp3,temp4,0);
        return temp;
    }else{
        throw;
    }
}

bool rectangle::operator == (rectangle &obj){
    bool Xint = (this->Xmax > obj.getXmin()) && (obj.getXmax() > this->Xmin);
    bool Yint = (this->Ymax > obj.getYmin()) && (obj.getYmax() > this->Ymin);
    return (Xint && Yint);
}

rectangle rectangle::operator++(){
    int Newheight = this->getheight() * 2;
    int Newwidth = this->getwidth() * 2;
    rectangle temp(this->getXmid(), this->getYmid(), Newwidth, Newheight);
    return temp;
}

rectangle rectangle::operator--(){
    int Newheight = this->getheight() / 2;
    int Newwidth = this->getwidth() / 2;
    rectangle temp(this->getXmid(), this->getYmid(), Newwidth, Newheight);
    return temp;
}

int rectangle::operator[] (int index){
    if (index=0) {return this->Xmin;}
    else if (index=1) {return this->Ymin;}
    else if (index=2) {return this->Xmax;}
    else if (index=3) {return this->Ymax;}
    else {std::cout<<"nggak ada apa apa gan"<<std::endl;}
}

