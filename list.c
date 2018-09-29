#include "list.h"
#include <stdio.h>


Llista	LLISTABID_crea () {
    Llista l;
    int err = 1;
    l.elements = 0;
    l.pri = (Node*) malloc (sizeof(Node));
    if (l.pri != NULL) {
        l.ult = (Node*) malloc (sizeof(Node));
        if (l.ult != NULL) {
            l.pdi = l.pri;
            l.pri->seg = l.ult;
            l.pri->ant = NULL;
            l.ult->ant = l.pri;
            l.ult->seg = NULL;
            err = 0;
        } else {
            free(l.pri);
        }
    }

    if (err == 1) {
        l.pri = NULL;
        l.ult = NULL;
        l.pdi = NULL;
    }
    return l;
}


int LLISTABID_inserirOrdenat (Llista * l, Element e2){
    
    
    return 1;
}


int	LLISTABID_inserirDarrere (Llista * l, Element e) {    
    Node * n;
    if (l->pdi == l->ult) return 0;

    n = (Node*) malloc (sizeof(Node));

    if (n == NULL) return 0;

    n->e = e;
    n->seg = l->pdi->seg;
    n->ant = l->pdi;

    l->pdi->seg->ant = n;
    l->pdi->seg = n;
    l->elements++;

    return 1;
}

int LLISTABID_inserirDavant (Llista * l, Element e) {
    Node * n;

    if (l->pdi == l->pri) return 0;

    n = (Node*) malloc (sizeof(Node));

    if (n == NULL) return 0;

    n->e = e;
    n->seg = l->pdi;
    n->ant = l->pdi->ant;

    l->pdi->ant->seg = n;
    l->pdi->ant = n;
    l->elements++;

    return 1;
}


void LLISTABID_consulta (Llista l) {

   
}


int LLISTABID_elimina (Llista * l) {
    

    return 1;
}


int LLISTABID_avanca (Llista * l) {

    
    return 1;
}


int LLISTABID_retrocedeix (Llista * l) {

    
    return 1;
}


int LLISTABID_vesInici (Llista * l) {

    return 1;
}


int LLISTABID_vesFinal (Llista * l) {

    return 1;
}


int LLISTABID_buida (Llista l) {
  
    return 1;
}


int LLISTABID_inici (Llista l) {
    return 1;
}


int LLISTABID_final (Llista l) {
    return 1;
}


void LLISTABID_destrueix (Llista * l) {
    
}
