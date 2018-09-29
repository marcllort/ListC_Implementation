#include <stdio.h>
#include "list.h"

#define llargaria 10 
#define numAfegir 3 


int main (int argc, char** argv) {

	Llista llista;
	int ok, i;
	Element e1, e2, e3, e0;

	llista = LLISTABID_crea ();
  	ok = LLISTABID_vesInici (&llista);

	printf("Estat llista inicial: \n\n");
    //Mirem estat inicial de la llista
  	for(i = 0 ; i < llargaria; i++){
		e0.numero=i+2;

		ok = LLISTABID_inserirDavant (&llista, e0);
		LLISTABID_consulta (llista);
	}


	//Numeros a afegir ordenats
	e1.numero=1;
	e2.numero=6;
	e3.numero=16;

	ok = LLISTABID_inserirOrdenat (&llista, e1);
	ok = LLISTABID_inserirOrdenat (&llista, e2);
	ok = LLISTABID_inserirOrdenat (&llista, e3);
	
	printf("\n\nEstat llista final: \n\n");

  	ok = LLISTABID_vesInici (&llista);
	for(i = 0 ; i < llargaria+3 ; i++){
		LLISTABID_consulta (llista);
		LLISTABID_avanca (&llista);
	}
	printf("\n");

return 1;
}
