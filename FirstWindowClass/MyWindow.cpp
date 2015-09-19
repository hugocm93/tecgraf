/* 
 * File:   MyWindow.cpp
 * Author: treinamento
 * 
 * Created on September 18, 2015, 9:39 AM
 */

#include "MyWindow.h"

int MyWindow::calcular( Ihandle* ih )
{
    Ihandle * textR = (Ihandle*)IupGetAttribute( ih, "textR" );
    Ihandle * textI = (Ihandle*)IupGetAttribute( ih, "textI" );
    Ihandle * textIti = (Ihandle*)IupGetAttribute( ih, "textIti" );
    Ihandle * textW = (Ihandle*)IupGetAttribute( ih, "textW" );
    Ihandle * textH = (Ihandle*)IupGetAttribute( ih, "textH" );

    std::cout << IupGetAttribute( textR, IUP_VALUE ) << std::endl;
    std::cout << IupGetAttribute( textI, IUP_VALUE ) << std::endl;
    std::cout << IupGetAttribute( textIti, IUP_VALUE ) << std::endl;
    std::cout << IupGetAttribute( textW, IUP_VALUE ) << std::endl;
    std::cout << IupGetAttribute( textH, IUP_VALUE ) << std::endl;

    return IUP_DEFAULT;
}

MyWindow::MyWindow( )
{
    // Initiating adding lowest hbox
    Ihandle *calcularButton = IupButton( "Calcular", NULL );
    Ihandle *sairButton = IupButton( "Sair", NULL );
    Ihandle *lowerHBox = IupHbox( sairButton, calcularButton, NULL );
    IupSetCallback( sairButton, "ACTION", ( Icallback ) IupClose );
    IupSetCallback( calcularButton, "ACTION", ( Icallback ) calcular );
    
    // Initiating adding second lowest hbox
    Ihandle * textR = IupText( NULL );
    Ihandle * textI = IupText( NULL );
    Ihandle *lowerHBox2 = IupHbox( IupLabel( "Constante" ), IupLabel( " C: " ), IupLabel( "R:" ), textR, IupLabel( "I:" ), textI, NULL );
    
    // Initiating adding third lowest hbox
    Ihandle * textIti = IupText( NULL );
    Ihandle *lowerHBox3 = IupHbox( IupLabel( "Número de iterações:" ), textIti, NULL );
    
    // Initiating adding forth lowest hbox
    Ihandle * textW = IupText( NULL );
    IupSetAttribute( textW, IUP_MASK, IUP_MASK_UINT );
    Ihandle * textH = IupText( NULL );
    IupSetAttribute( textH, IUP_MASK, IUP_MASK_UINT );
    Ihandle *lowerHBox4 = IupHbox( IupLabel( "Dimensão da imagem" ), IupLabel( " W:" ), textW, IupLabel( "H:" ), textH, NULL );
    
    //add everything to a vbox
    Ihandle *vBox1 = IupVbox( lowerHBox4, lowerHBox3, lowerHBox2, lowerHBox, NULL );
    
    //set constraints
    IupSetAttribute( lowerHBox, "GAP", "5" );
    IupSetAttribute( lowerHBox, "MARGIN", "3x3" );
    IupSetAttribute( lowerHBox2, "GAP", "5" );
    IupSetAttribute( lowerHBox2, "MARGIN", "3x3" );
    IupSetAttribute( lowerHBox3, "GAP", "5" );
    IupSetAttribute( lowerHBox3, "MARGIN", "3x3" );
    IupSetAttribute( lowerHBox4, "GAP", "5" );
    IupSetAttribute( lowerHBox4, "MARGIN", "3x3" );
    IupSetAttribute( vBox1, "GAP", "5" );
    IupSetAttribute( vBox1, "MARGIN", "3x3" );
    IupSetAttribute( calcularButton, IUP_ALIGNMENT, "ARIGHT" );
    IupSetAttribute( lowerHBox, IUP_ALIGNMENT, "ARIGHT" );
    
    //create dialog
    dialog = IupDialog( vBox1 );
    IupSetAttribute( dialog, "TITLE", "First Program" );
    IupSetAttribute( dialog, "textR", ( char* ) textR );
    IupSetAttribute( dialog, "textI", ( char* ) textI );
    IupSetAttribute( dialog, "textIti",( char* ) textIti );
    IupSetAttribute( dialog, "textW", ( char* ) textW );
    IupSetAttribute( dialog, "textH", ( char* ) textH );
}

void MyWindow::show( )
{
    IupShow( dialog );
}

void MyWindow::hide( )
{
    IupHide( dialog );
}

