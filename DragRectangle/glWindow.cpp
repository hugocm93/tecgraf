/* 
 * File:   glWindow.cpp
 * Author: treinamento
 * 
 * Created on September 18, 2015, 11:16 AM
 */

#include "glWindow.h"
#include<iostream>

int glWindow::redraw( Ihandle* ih )
{
    IupGLMakeCurrent( ih );

    std::cout << "redraw" << std::endl;

    IupGLSwapBuffers( ih );

    return IUP_DEFAULT;
}

int glWindow::resize( Ihandle* ih, int width, int height )
{
    IupGLMakeCurrent( ih );

    std::cout << "resize" << std::endl;

    IupGLSwapBuffers( ih );

    return IUP_DEFAULT;
}

glWindow::glWindow( )
{
    Ihandle *canvas = IupGLCanvas( NULL );
    Ihandle *vBox1 = IupVbox( canvas, NULL );
    dialog = IupDialog( vBox1 );

    IupSetAttribute( canvas, IUP_BUFFER, "DOUBLE" );
    IupSetAttribute( canvas, "RASTERSIZE", "600x600" );
    IupSetAttribute( vBox1, "GAP", "5" );
    IupSetAttribute( vBox1, "MARGIN", "5x5" );

    IupSetCallback( canvas, IUP_ACTION, ( Icallback ) redraw );
    IupSetCallback( canvas, IUP_RESIZE_CB, ( Icallback ) resize );


    IupMap( dialog );
    IupGLMakeCurrent( canvas );

}

void glWindow::show( )
{
    IupShow( dialog );

}

void glWindow::hide( )
{
    IupHide( dialog );
}
