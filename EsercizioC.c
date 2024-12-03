#include <stdio.h> // inserisco la libreria standard e la libreria per le operazioni matematiche
#include <math.h>

int main(void)
{
    /*
     MOLTIPLICAZIONE!
    */
    printf("Hello, EpicCoder\n");
    int x = 0; //dichiaro la variabile x come numero intero e la inizializzo a 0
    int y = 0; //dichiaro la variabile y
    int z; //dichiaro la variabile z senza inizializzarlo, il risultato non cambia se lo metto z = 0 al momento contiene qualcosa di non specificato
    printf("Moltiplicazione con valori in virgola mobile inseriti dall'utente \n");
    printf("inserisci il valore di X:\n");
    scanf("%d",&x); // attesa dell'input dall'utente che viene assegnato alla variabile x, %f vuol dire che il programma si aspetto un numero con la virgola
    printf("inserisci il valore di Y:\n");
    scanf("%d",&y);
    printf("Hai inserito i seguenti valori:\nx -> %d,\ny -> %d,\n",x,y); //printf con i valori inseriti
    
    z= x * y; //il vero scopo del programmino, il calcolo delle variabili.
   
    printf("il totale della moltiplicazione è:\nz -> %d\n",z); //stampo il totale
    
    /*
     CALCOLO DELLA MEDIA!
    */
    printf("calcoliamo la media tra due valori inseriti dall'utente\n");
    float a = 0; //dichiaro la variabile x come intero e la inizializzo a 0
    float b = 0; //dichiaro la variabile y
    float c; //dichiaro la variabile "c" come numero in virgola mobile senza inizializzarlo, il risultato non cambia se lo metto = 0
    
    printf("inserisci il valore di A:\n");
    scanf("%f",&a); // attesa dell'input dall'utente, in questo caso vediamo un %d perchè stiamo lavorando con interi
    printf("inserisci il valore di B:\n");
    scanf("%f",&b);
    printf("Hai inserito i seguenti valori: \n a -> %f,\n b -> %f, \n",a,b); //printf con i valori inseriti
    
    c=(a + b)/2; //calcolo della media.
   
    printf("il calcolo della media è: c -> %f \n",c); //stampo il totale
    
    /*
     CALCOLO DELLA MEDIA UTILIZZANDO UN ARRAY VARIABILE! CHE FIGATA!!! :)
    */
    printf("calcolo della media tra numeri imprecisati inseriti dall'utente\n");
    int d,i;
    float media = 0.0;
    float somma = 0.0;
    
    printf("inserisci il numero di valori interessati per il calcolo della media:\n");
    scanf("%d",&d); // attesa dell'input dall'utente, in questo caso vediamo un %d perchè stiamo lavorando con interi
    float array[d]; //dichiaro un Array dinamico in virgola mobile, gli spazi necessari vengono assegnati dall'utente
    
    // la parte interessante il riempimento dell'array tramite ciclo for
    
    printf("Inserisci %d numeri:\n", d);
    for (i=0;i<d;i++)
        {
        scanf("%f", &array[i]);
        }
    
    //stampo i valori inseriti all'interno dell'array
    
    for (int i=0;i<d;i++)
        {
        printf("Hai inserito il seguente numero: %f\n", array[i]);
        }
    
    //somma dei valori all'interno dell'array
    
    for (int i=0; i<d; i++)
        {
        somma = somma + array[i];
    /* qui utilizziamo due variabili e spostiamo gli elementi da una variabile all'altra, per ogni elemento spostato eseguiamo la somma, ho cercato la guida online per risolvere questo ragionamento */
        }
    
    // calcolo media
    media = somma/d;
    
    printf("il calcolo della media tra i valori da te inseriti è -> %f\n",media); //stampo il totale
    
    return 0; // ritorno 0 se tutto è andato correttamente
}
