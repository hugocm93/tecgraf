/* 
 * File:   MyWindow.h
 * Author: treinamento
 *
 * Created on September 18, 2015, 9:39 AM
 */

#include <iup/iup.h>
#include <cstdlib>
#include <iostream>

#ifndef MYWINDOW_H
#define	MYWINDOW_H

class MyWindow {
public:
    MyWindow( );
    void show();
    void hide();
private:
    static int calcular(Ihandle* ih);
    Ihandle *dialog;
};

#endif	/* MYWINDOW_H */

