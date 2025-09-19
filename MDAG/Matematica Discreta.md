# Algebra degli Insiemi
**Insieme**: Collezione [ben definita]{Determinabile se un oggetto appartine all'insieme} di oggetti, detti elementi dell'insieme.
## Modi di Rappresentazione di Insiemi
1. **Elenco completo degli elementi**:
	$A=\{ mario, marco, claudio\}$
	$A=\{1, 3, 5\} = \{5, 1, 3\}$
	$\mathbb{N}=\{0, 1, 2, 3, \dots\}$
	$B=\{0, 1, \{0, 1\}\}$ Gli insiemi posso contenere altri insiemi
	Dato $x=\{0, 1\}$, allora $B=\{0, 1, x\}$
	$y=\{\{0, 1\}\}$
2. **A partire da un criterio**:
	$A=\{studenti\ di\ informatica\}$
	$x=\{radici\ dell'equazione\ x^2-1=0\} = \{-1, 1\}$
	$\mathbb{Z}=\{numeri\ interi\}$
	$\mathbb{Q}=\{numeri\ razionali\}$
	$\mathbb{R}=\{numeri\ reali\}$
	$\mathbb{C}=\{numeri\ complessi\}$
3. **Simbolicamente**:
	Sia $x$ un elemento di un insieme $A$, allora $x \in A$, altrimenti $x \notin A$
	Sia $P$ una proprietà per $x \in A$, $P(x)$ rappresenta che $x$ soddisfa $P$
		$A=\{x | P(x)\}$: $x$ è tale che $P(x)$ sia rispettata

	$A=\{x \in \mathbb{R} | x^2-1=0\} = \{-1, 1\}$
	$\mathbb{N}=\{x \in \mathbb{Z} | x \geq 0\} = \{0, 1, 2, 3, \dots\}$


**Cardinalità**: la cardinalità di un insieme $A$ si scrive $|A|$ e rappresenta il numero dei suoi elementi
	$|A|=|\{0, 1\}|=2$
	$|\{\{0, 1\}\}|=1$
	$|\mathbb{N}|=\infty$

**Sottoinsiemi**: un insieme $B$ è sottoinsieme di $A$ se ogni elemento di $B$ è anche un elemento di $A$: $B \subseteq A$, altrimenti $B \not\subseteq A$
	Sia $A$ un insieme che: $x \in A \iff \{x\} \subseteq A$
![[sottoinsieme.svg]]
	$\{0, 1\} \subseteq \mathbb{N} \subseteq \mathbb{X} \subseteq \mathbb{Q} \subseteq \mathbb{R} \subseteq \mathbb{C}$
	

**Insieme vuoto**: un insieme privo di elementi
	$\emptyset \in A$ per qualiasi insieme $A$
	$|\emptyset | = 0$
	$|\{\emptyset \}| = 1$

Due insiemi $A$ e $B$ sono **uguali** se e solo se: $A \subseteq B$ e $B \subseteq A$

Siano $A$ e $B$ due insiemi. L'**intersezione** di $A$ e $B$ è un insieme:
$A \cap B := \{x | c \in A \land x \in B\}$
![[intersezione.svg]]
_es_. $X=\{1,2,3,4,5\}$, $A_{1} =\{1,2,3\}$, $A_{2}=\{3,4,5\}$, $A_{3}=\{4,5\}$
$A_{1} \cap A_{2} = \{3\}$
$A_{2} \cap A_{4} = \{4,5\}$
$A_{1} \cap A_{3} = \emptyset$
$A_{i} \cap X = A_{i}, i=1,2,3$

Siano $A$ e $B$ due insiemi, si dicono **disgiunti** se $A \cap B = \emptyset$

Siano $A$ e $B$ due insiemi, l**unione** di $A$ e $B$ è un insieme:
$A \cup B := \{x | x \in A \lor x \in B\}$
![[unione.svg]]

_es._ $A_{1} \cup A_{2} = \{1,2,3,4,5\}$
$A_{1} \cup A_{3} = \{1,2,3,4,5\}$
$A_{i} \cup X = X, i=1,2,3$

Siano $A_{1}, A_{2}, \dots, A_{n}$ insiemi, l'intersezione tra questi è un insieme:
$A_{1} \cap A_{2} \cap \dots \cap A_{n} = \cap^{n}_{i=1} A_{i} := \{x | x \in A_{1} \land x \in A_{2} \land \dots \land x \in A_{n}\}$
Siano $A_{1}, A_{2}, \dots, A_{n}$ insiemi, l'unione tra questi è un insieme:
$A_{1} \cup A_{2} \cup \dots \cup A_{n} = \cup^{n}_{i=1} A_{i} := \{x | x \in A_{1} \lor x \in A_{2} \lor \dots \lor x \in A_{n}\}$

Si possono, quindi,  intersecare e unire un numero illimitato di insiemi

Proprietà di $\cup \text{ e } \cap$:
0. **Commutativa**:
   $A \cap B = B \cap A$
   $A \cup B = B \cup A$
1. **Associativa**:
   $(A \cap B) \cap C = A \cap (B \cap C)$
   $(A \cup B) \cup C = A \cup (B \cup C)$
2. **Idempotente**: 
   $A \cap A = A$,    $A \cap \emptyset = \emptyset$
   $A \cup A = A$,   $A \cup \emptyset = A$
3. **Distributiva**:
   $A \cap (B \cup C) = (A \cap B) \cup (A \cap C)$
![[prop distributiva 1.svg]]
   $A \cup (B \cap C) = (A \cup B) \cap (A \cup C)$
![[prop distributiva 2.svg]] **TODO: chiedi se è giusto**

Siano $X$ e $A$ due insiemi, la **differenza** tra $X$ e $A$ è un insieme:
$X \setminus A := \{x \in X | x \notin A\} \subset X$
![[differenza.svg]]
_es._ $A_{1} \setminus \set A_{3} = \{ 1, 2, 3 \}$
$A_{1}\setminus A_{2} = \{ 1, 2 \}$
$X\setminus A_{1} = \{ 4, 5 \}$

Sia $A$ un sottoinsieme di $X$, un **complemento** di $A$ in $X$ è:
$C_{X}(A) := \{ x \in X  | x \not\in A\} = X\setminus A$

#### Teorema di De Morgan:
Siano $A$ e $B$ sottoinsiemi di $X$, allora:
$C_{X}(A \cap B) = C_{X}(A) \cup C_{X}(B)$
$C_{X}(A \cup B) = C_{X}(A) \cap C_{X}(B)$
_es._ $C_{X}(A_{1} \cap A_{2}) = C_{X}(\{ 3 \}) = \{ 1,2,4,5 \}$
$C_{X}(A_{1}) \cup C_{X}(A_{2}) = \{ 4,5 \} \cup \{ 1, 2 \} = \{ 1, 2, 4, 5 \}$ 


Sia $A$ un insieme, si dice **insieme delle parti** di $A$ un insieme in cui gli elementi sono i sottoinsiemi di $A$:
$P(A) := \{ x | x \subseteq A \}$
_es._ $A=\{ a, b \}$
$P(A) = \{ \emptyset, \{ a \}, \{ b \}, \{ a, b \} \}$
Se $|A| = n$, allora $|P(A)| = 2^n$
Dati $A$ e $B$ ue insiemi, si ha $A=B \iff P(A) = P(B)$

Siano $A_{1}, A_{2}, \dots, A_{n}$ sottoinsiemi di un insieme $A$: ($\{ A_{i} \}_{i=1}^{n}$), è un **tricomprimento** se:
$\cup^n_{i=1} = (A_{1} \cup A_{2} \cup \dots \cup A_{n}) = A$
_es._ $\{ A_{1}, A_{2} \}$ è un tricomprimento di $X$ perchè $A_{1} \cup A_{2} = X$
$\mathbb{N} = \{ \text{numeri pari} \} \cup \{ \text{numeri dispari} \} = \{ \{ \text{numeri pari} \}, \{ \text{numeri dispari} \} \}$ è un tricomprimento

Sia $\{ A_{i} \}^n_{i=1}$ un tricomprimento di $A$, $\{ A_{i} \}^n_{i=1}$ è **partizione** di $A$ se:
0. $\{ A_{i} \}^n_{i=1}$ è un tricomprimento
1. $A_{i} \neq 0, i=1,2,\dots, n$
2. $A_{i} \cap A_{j} = \emptyset, i\neq j, i,j = 1,2,\dots,n$
_es._ $\{ A_{1} \cap A_{3} \}$ è una partizione di $X$, perchè:
	0. $A_{1} \cup A_{2} = X$
	1. $A_{1} \neq \emptyset, A_{2} \neq \emptyset$
	2. $A_{1} \cap A_{2} = \emptyset$
$\{ A_{1}, A_{2} \}$ non è una partizione di $X$ perchè $A_{1} \cap A_{2} \neq \emptyset$
# Relazioni tra Insiemi
Siano $A$ e $B$ due insiemi, il **prodotto cartesiano** tra $A$ e $B$ è uninsieme di coppie ordinate:
$A\times B := \{ (a, b) | \forall a \in A \land b \in B \}$
_es._ $A=\{ 1,2,3 \}, B=\{ 3,4 \}$
$A\times B = \{ (1, 3), (1, 4), (2, 3), (2, 4), (3, 3), (3, 4) \}$
$B\times A=\{ (3, 1), (3, 2), (3, 3), (4, 1), (4, 2), (4, 3) \}$

Siano $A$ e $B$ due insiemi non vuoti, una **relazione** tra $A$ e $B$ è un sottoinsieme di $A\times B$:
$R \subseteq A\times B$
_es._ $A=\{ 1, 2, 3 \}, B=\{ 3, 4, 5 \}$
$R_{1}=\{ (1, 3), (2, 4), (3, 4) \} \subseteq A\times B$
$R_{2} = \{ (1, 3), (1, 4) \}\subseteq A\times B$

Sia $R \subseteq A\times B$ una relazione tra $A$ e $B$, se $(a, b) \subseteq R$, di dice $a \mathrel{\underset{R}{\sim}} b$
Se $A = B$, e $R \subseteq A\times A$ è una relazione in $A$:
1. $R$ è una **relazione simmetrica** per $a,b \in A$
   $a \mathrel{\underset{R}{\sim}} b$ allora $b \mathrel{\underset{R}{\sim}} a$
2. $R$ è una **relazione riflessiva** per ogni $a \in A$:
   $a \mathrel{\underset{R}{\sim}} a$
3. $R$ è una **relazione transitiva** per $a, b, c \in A$ se $a \mathrel{\underset{R}{\sim}} b$ e $b \mathrel{\underset{R}{\sim}} c$, allora $a \mathrel{\underset{R}{\sim}} c$
Una relazione $R \subseteq A\times A$ si dice di **equivalenza** se vengono rispettate tutte le condizioni soprastanti

Esiste una corrispondenza biunivoca tra le relazioni di quivalenza di $A$ e le partizioni di $A$

Siano $A$ e $B$ insiemi non vuoti, una **funzione** con dominio $A$ e codominio $B$ è un sottoinsieme $F \subseteq A \times B$ tale che per ogni $a \in A$ esiste uno ed un unico $b \in B$ tale che $(a, b) \in F$.
_es._ $A=\{ 1, 2, 3 \}, B=\{ a, b, c \}$
$R_{1}=\{ (1, a), (2, a), (3, b) \} \subseteq A\times B$ è una funzione
$R_{2}=\{ (1, a), (1, b), (2, c), (3, b) \} \subseteq A\times B$ non è una funzione perchè per $1 \in A$ esistono $(1, a), (1, b) \in R_{2}$

$A = \mathbb{R}, \mathbb{R} \times \mathbb{R}$
$R=\{ x, x^2+1 \in \mathbb{R} \times \mathbb{R} | x \in \mathbb{R} \} \subseteq \mathbb{R} \times \mathbb{R}$ è una funzione
	$f: \mathbb{R} \to \mathbb{R}$
	$x \mapsto f(x) = x^2+1$

Sia $F \subseteq A \times B$ una funzione, allora per ogni $a \in A$ esiste un unico $B \in B$ tale che $(a, b \in F)$.
$f: A \to B$
	$a \mapsto f(a)$
$b$ viene chiamato **immagine** di $a$

Per verificare che una corrispondenza si una funzione:
1. **Ovunque definita**: Ogni elemento di $A$ deve avere un'immagine
2. **Funzionale**: Ogni elemento di $A$ ha un'unica immagine
Una funzione che rispetta queste due condizioni si dice **ben definita**
_es._ $f: \mathbb{R} \to \mathbb{R}$
$\forall x \in \mathbb{R}, x \mapsto f(x) = \frac{1}{x}$
$0 \in \mathbb{R}$ non ha alcuna immagine $\Rightarrow f$ non è nua funzione, mentre:
$f': \mathbb{R} \setminus \{ 0 \} \to \mathbb{R}$
$x \mapsto \frac{1}{x}$ è una funzione

Sia $f: A \to B$ una funzione e $X \subseteq A$:
$f(X) := \{ b \in B | \exists x \in A, b = f(x) \} = \{ f(x) | \forall x \in X \}$
![[funzione.svg]]
$f: A \to B, a \mapsto f(a)$ se $b \in B$ tale che $b = f(a)$, $b$ è una **controimmagine** di $a$

Per $b \in B$, questo è l'**insieme delle controimmagini**:
$f^{-1}(\{ b \}) := \{ a \in A | f(a) = b \}$

Per $Y \subseteq B$, queste sono le controimmagini di $Y$ sotto $f$:
$f'(\{ Y \}) = \{ a \in A | f(a) \in Y \}$
![[controimmagini.svg]]
	$f(Y) := \{ f(a) | \forall a \in Y \}$
	$^f|_{Y}: Y \to f(Y) \subseteq B$

