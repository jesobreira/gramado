

// gws.h - 

// ## GWS - Gramado Window Server ##



//void gwsEnableTextCursor ();
//void gwsDisableTextCursor ();


//abrir o servidor de janelas. 
int gwsOpen();

//fechar o servidor de janelas
int gwsClose();


// Registrar um window manager.
int gwsRegisterWindowManager( int pid );

int init_gui ();

void gramado();
int init_gramado();

//
//fim.
//

