# Genesi dell'Informatica
"Automatica Informazione" -> Informatica (o computer science)
## Paradigmi di calcolo
- **Diitale**:  formalizzato da Turing
- **Reversibile**: algoritmi bidirezionali (crypting) e senza perdite di informazioni (compressione lossless)
- **Analogico**: abbandonato commercialmente a favore del digitale
- **Quantistico**: tutto ciò che è reversibile può essere trasformato in un algoritmo quantistico
- Probabilistico, ...

Nel 1936 Turing pubblica un paper in cui viene menzionata per la prima volta la parola *computer*, riferendosi ai computatori del tempo: gli umani, coloro che svolgevano i calcoli
# Memoria del calcolatore
Ogni cella di memoria è identificata da un indirizzo.

Il **Program Counter** (P.C.) contiene la cella di memoria con la prossima istruzione da eseguire.
L'**Instruction Register** (I.R.) contiene una copia dell'istruzione da eseguire.
Questi due registri sono direttamente nella CPU.
## Bits
bit (binary digit) = cifre binarie = $\{0, 1\}$
## Operazioni
Elenco porte logiche:
- AND: congiunzione logica
  ![[and gate.svg]]
  
| Input 1 | Input 2 | Output |
| ------- | ------- | ------ |
| 0       | 0       | 0      |
| 0       | 1       | 0      |
| 1       | 0       | 0      |
| 1       | 1       | 1      |
- OR
  ![[or gate.svg]]

| Input 1 | Input 2 | Output |
| ------- | ------- | ------ |
| 0       | 0       | 0      |
| 0       | 1       | 1      |
| 1       | 0       | 1      |
| 1       | 1       | 1      |
* XOR
  ![[xor gate.svg]]

| Input 1 | Input 2 | Output |
| ------- | ------- | ------ |
| 0       | 0       | 0      |
| 0       | 1       | 1      |
| 1       | 0       | 1      |
| 1       | 1       | 0      |
* NOT
  ![[not gate.svg]]
  

| Input | Output |
| ----- | ------ |
| 0     | 1      |
| 1     | 0      |

## Flip-Flops
Usati per memorizzare singoli bit in memoria (RAM).
Sono **circuiti sequenziali**, reiterano l'output usandolo come input per stabilizzare il bit ad un valore (a differenza dei circuiti combinatori come gli addizionatori)
![[flip-flop.svg]]

| Input 1 | Input 2 | Output                                                    |
| ------- | ------- | --------------------------------------------------------- |
| 0       | 0       | [x]{Mantiene lo stato precedente}                         |
| 0       | 1       | [0]{Forza l'output a 0}                                   |
| 1       | 0       | [1]{Forza l'output a 1}                                   |
| 1       | 1       | [?]{Da non usare! L'output oscilla tra risultati incerti} |
