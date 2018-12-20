#ifndef ESCANER_H
#define ESCANER_H
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <string>
#include <utility>
#include <math.h>
#include <fstream>
#include <unistd.h>
#include <map>

using namespace std;
using namespace cv;

class escaner
{
public:
    int iMinH, iMaxH;
    int iMinS, iMaxS;
    int iMinV, iMaxV;
    float rotacion;
    float angulo;
    VideoCapture videocapture;
    vector<vector<int > > nube_puntos;
public:
    escaner();
    void triangulacion(int x, int y, int &_X, int &_Z);
    void media_puntos(vector<vector<Point> > contornos, map<int,int> &mPuntos);
    void calibrar(Mat &imgOriginal);
    void guardar();
    void ejecutar();
};

#endif // ESCANER_H
