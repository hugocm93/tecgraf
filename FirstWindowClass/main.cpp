/* 
 * File:   main.cpp
 * Author: treinamento
 *
 * Created on September 18, 2015, 9:34 AM
 */

#include "MyWindow.h"

using namespace std;

int main( int argc, char** argv )
{
    IupOpen(&argc, &argv);
    
    MyWindow *window = new MyWindow();
    
    window->show();
    
    IupMainLoop();
    
    delete window;
    
    IupClose();
    
     return EXIT_SUCCESS;
}

