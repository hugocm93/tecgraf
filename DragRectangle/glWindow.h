/* 
 * File:   glWindow.h
 * Author: treinamento
 *
 * Created on September 18, 2015, 11:16 AM
 */
#include <cstdlib>
#include <iup/iup.h>
#include <iup/iupgl.h>


#ifndef GLWINDOW_H
#define	GLWINDOW_H

class glWindow {
public:
    glWindow( );
    void show();
    void hide();
private:
    Ihandle* dialog;
    static int redraw(Ihandle* ih);
    static int resize(Ihandle* ih, int width, int height);

};

#endif	/* GLWINDOW_H */

