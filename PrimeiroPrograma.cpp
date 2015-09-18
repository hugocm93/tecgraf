
#include <cstdlib>
#include <iostream>
#include <iup/iup.h>

using namespace std;

Ihandle *textR;
Ihandle *textI;
Ihandle *textIti;
Ihandle *textW;
Ihandle *textH;

int calcular(Ihandle* ih){

    cout << IupGetAttribute(textR, IUP_VALUE) << endl;
    cout << IupGetAttribute(textI, IUP_VALUE) << endl;
    cout << IupGetAttribute(textIti, IUP_VALUE) << endl;
    cout << IupGetAttribute(textW, IUP_VALUE) << endl;
    cout << IupGetAttribute(textH, IUP_VALUE) << endl;

return IUP_DEFAULT;

}

void createWindow( ){

    // Initiating adding lowest hbox
    Ihandle *calcularButton = IupButton("Calcular", NULL);
    Ihandle *sairButton = IupButton("Sair", NULL);
    Ihandle *lowerHBox = IupHbox(sairButton,calcularButton, NULL);
    IupSetCallback(sairButton, "ACTION", (Icallback) IupClose);
    IupSetCallback(calcularButton, "ACTION", (Icallback) calcular);

    // Initiating adding second lowest hbox
    textR = IupText(NULL);
    textI = IupText(NULL);
    Ihandle *lowerHBox2 = IupHbox(IupLabel("Constante"),IupLabel(" C: "),IupLabel("R:"), textR, IupLabel("I:"),textI, NULL);
    

    // Initiating adding third lowest hbox
    textIti = IupText(NULL);
    Ihandle *lowerHBox3 = IupHbox(IupLabel("Número de iterações:"), textIti ,NULL); 
    

    // Initiating adding forth lowest hbox
    textW = IupText(NULL);
    IupSetAttribute(textW, IUP_MASK, IUP_MASK_UINT);

    textH = IupText(NULL);
    IupSetAttribute(textH, IUP_MASK, IUP_MASK_UINT);

    Ihandle *lowerHBox4 = IupHbox(IupLabel("Dimensão da imagem"),IupLabel(" W:"),textW ,IupLabel("H:"),textH, NULL);
    

    //add everything to a vbox
    Ihandle *vBox1 = IupVbox(lowerHBox4,lowerHBox3,lowerHBox2,lowerHBox, NULL);

    //set constraints
    IupSetAttribute(lowerHBox, "GAP", "5");
    IupSetAttribute(lowerHBox, "MARGIN", "3x3");

    IupSetAttribute(lowerHBox2, "GAP", "5");
    IupSetAttribute(lowerHBox2, "MARGIN", "3x3");

    IupSetAttribute(lowerHBox3, "GAP", "5");
    IupSetAttribute(lowerHBox3, "MARGIN", "3x3");

    IupSetAttribute(lowerHBox4, "GAP", "5");
    IupSetAttribute(lowerHBox4, "MARGIN", "3x3");

    IupSetAttribute(vBox1, "GAP", "5");
    IupSetAttribute(vBox1, "MARGIN", "3x3");

    IupSetAttribute(calcularButton, IUP_ALIGNMENT, "ARIGHT");
    IupSetAttribute(lowerHBox, IUP_ALIGNMENT, "ARIGHT");


    //create dialog
    Ihandle *dialog = IupDialog(vBox1);
    IupSetAttribute(dialog, "TITLE", "First Program");


    //show dialog
    IupShow(dialog);
}

int main(int argc, char **argv){

    IupOpen(&argc, &argv);

    createWindow();

    IupMainLoop();

    IupClose();

    return 0;
}





