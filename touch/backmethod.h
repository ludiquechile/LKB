/*
LKB (Ludique's Kinect Bundle)

Version 0.1 Copyright (C) 2012 Ludique

This software is provided 'as-is', without any express or implied warranty.
In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications,
and to alter it and redistribute it freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
       claim that you wrote the original software. If you use this software in
       a product, an acknowledgment in the product documentation would be appreciated
       but is not required.

    2. Altered source versions must be plainly marked as such, and must not be
       misrepresented as being the original software.

    3. This notice may not be removed or altered from any source distribution.*/
#ifndef BACKMETHOD_H
#define BACKMETHOD_H

#include <stdlib.h>
#include <ctime>
#include <cv.h>
#include <stdio.h>
#include <math.h>
using namespace cv;
using namespace std;

class backmethod
{
    public:
        backmethod();
        virtual ~backmethod();
        unsigned int Getreps() { return nback; }
        void Setreps(unsigned int val) { nback = val; }
        void repIncr(){nback++;}
        void start(int tot=99){cont=true;nback=0;total=tot;}
        bool contVal(){return cont;}
        bool proc(double varVal,Mat& nue,Mat& mask,Mat& Base,Mat& maskBack);
        int nback;
        int total;
        Mat ACC,sqACC,ACCsq,varianza2,maskVar,maskACC;
    protected:
    private:
        bool cont;
};

#endif // BACKMETHOD_H
