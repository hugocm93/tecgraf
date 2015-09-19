/* 
 * File:   main.cpp
 * Author: treinamento
 *
 * Created on September 18, 2015, 11:12 AM
 */


#include "glWindow.h"

using namespace std;

/*
 * 
 */
int main( int argc, char** argv )
{
    IupOpen(&argc, &argv);
    
    IupGLCanvasOpen();
    
    glWindow *window = new glWindow();
    
    window->show();
    
    IupMainLoop();
    
    delete window;
    
    IupClose();
    
    return EXIT_SUCCESS;
}

