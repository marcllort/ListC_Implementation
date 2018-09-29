
#include <stdlib.h>

typedef struct{
    int numero; 
}Element;

typedef struct n {
    Element e;
    struct n * seg;
    struct n * ant;
}Node;

typedef struct {
    Node * pri;
    Node * pdi;
    Node * ult;
    int elements;
}Llista;


Llista		LLISTABID_crea ();
int LLISTABID_inserirOrdenat (Llista * l, Element e);
int 		LLISTABID_inserirDavant (Llista * l, Element e);
int			LLISTABID_inserirDarrere (Llista * l, Element e);
void			LLISTABID_consulta (Llista l);
int 		LLISTABID_elimina (Llista * l);
int 		LLISTABID_avanca (Llista * l);
int 		LLISTABID_retrocedeix (Llista * l);
int 		LLISTABID_vesInici (Llista * l);
int 		LLISTABID_vesFinal (Llista * l);
int 		LLISTABID_buida (Llista l);
int 		LLISTABID_inici (Llista l);
int 		LLISTABID_final (Llista l);
void 		LLISTABID_destrueix (Llista * l);