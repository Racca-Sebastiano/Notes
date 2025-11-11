"L'informatica non è la scienza dei calcolatori.", Dijkstra
L'informatica è lo studio degli algoritmi.
# Algoritmi
**def. algoritmo**: Un insieme ordinato di operazioni non ambigue ed effettivamente computabili che, quando eseguito, produce un risultato e si arresta in un tempo finito.

**Agente di calcolo**: chi esegue i programmi, una volta i "computer" erano le persone, dagli anni '50 la Olivetti crea il primo dispositivo elettromagnetico programmabile

# I primi agenti di calcolo
## La pascalina
Inventata da Pascal nel 1642.
Addizionatore meccanico, quasi come una calcolatrice
Non è programmabile, fa solo addizioni. La logica di funzionamento è hardwired.
## Babbage
La macchina di Babbage nel 1840.
Solo ideata, non realizzata
Dati e istruzioni memorizzati su schede perforate bidirezionali, è programmabile.
Macchina Turing complete.
Ada Lovelace scrive i primi programmi per questa macchina.
## Macchina di Turing
Introduce il concetto di macchina universale: un modello atratto di calcolatore.
Può calcolare tutte le funzioni calcolabili.
Esistono problemi che non possono essere risolti sistematematicamente in modo algoritmico.
# Macchina di Von Neumann (EDVAC)
EDVAC: Electronic Discrete Variable Automatic Calculator.
Logica programmabile.
Rappresentazione dei numeri binaria.
### Architettura
Conta 6000 valvole e 12000 diodi, ed è composto da:
* Una memoria primaria pari a 1024 parole di 44 bit (circa 5.5 KB)
* Una memoria secondaria a nastro magnetico per la lettura/scrittura
* Una unità di controllo con un oscilloscopio
* Un'unità di gestione che riceve le istruzioni dall'unità di controllo e dalla
memoria e di smistarle alle altre unità;
* Un'unità ALU che esegue le operazioni aritmetiche logiche su due operandi
e trasmette alla memoria il risultato
* Eseguiva un'addizione in 864 10-6s e una moltiplicazione in 2,9 10-3s
![[macchina_von_neumann.png]]
### Istruzioni
* Aritmetiche e logiche (ADD, OR, ...)
* Confronto (CMP)
* Copia fra memoria e registri (LOAD, STORE)
* Salto condizionato (JEQ, JNZ, ...)
* Salto incondizionato (JMP)

# I primi linguaggi di Programmazione
## Psedo-codice
Creato dagli esseri umani per gli esseri umani.
Pensato per comunicare un algoritmo, non per eseguirlo.
## Assembly
Rapporto 1:1 tra istruzione assembly e istruzione macchina
Linguaggio di basso livello di [seconda generazione]{Non si spostano più fili ma si scrive il codice}
Linguaggio specifico per le CPU, cambia la CPU cambiano le istruzioni
![[assembly.png]]
## Fortran (Formular Translator)
Per IBM 704.
Se cambia la macchina è sufficiente ricompilare il programma per l'hardware relativo.
Linguaggio di terza generazione.
## C
Il C è:
* **Compilato**: da linguaggio ci a codice macchina
* **Imperativo**: insieme di istruzioni pensate come ordini per il compilatore
* **Strutturato**: codice sorgente orgnizzato in blocchi racchiusi da delimitatori
* **Fortemente Tipizzato**: ogni variabile deve avere un tipo esplicito
## Compilatore
![[c_compiler.png]]
