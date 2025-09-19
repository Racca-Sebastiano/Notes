# Sistemi Numerici
$\mathbb{N}$ = numeri naturali = $\{0, 1,2,3\}$
$\mathbb{Z}$ = numeri interi = $\mathbb{N} \cup \{-n | n \in \mathbb{N}, n\neq 0 \}$
$\mathbb{Q}$ = numeri razionali = $\{\frac{p}{q} | p,q \in \mathbb{Z}, q \neq 0\}$ dove $\frac{p}{q} = \frac{p'}{q'}$ se $pq' = p'q$
$\mathbb{R}$ = numeri reali = $\{classi\ di\ equivalenza\ di\ successioni\ di\ Cauchy\ di\ numeri\ razionali\}$
	_es._ $\pi$ ~ 3.1
		 ~ 3.14
		 ~ 3.141
		.......
		Questa è una successione di numeri irrazionali, delle approssimazioni per difetto sempre più precise, quindi una **successione di Cauchy**
	ma anche:
		$\pi$      ~ 3.2
			~ 3.15
			~ 3.142
			......
			Sono due successioni equivalenti che tendono allo stesso valore, sono quindi **classi di equivalenza**
	_es._ $A(n) = (1 + \frac{1}{n})^n$, un'altra successione di Cauchy, in particolare quella che definisce $e$
		$A_{1}=2$, $A_{2}=\frac{9}{4}$, ...
	Le successioni di Cauchy servono anche per approssimare l'evevamento a potenza con numeri reali
		_es._ $2^\pi$: $2^{3.1} = 2^\frac{31}{10} = \sqrt[10]{2^{31}}$
			  $2^{3.14} = 2^\frac{314}{100} = \sqrt[100]{2^{314}}$
			  .....

$\sqrt{ 2 } \notin \mathbb{Q}$, perchè?
	dim. per assurdo:
	supponiamo che $\sqrt{ 2 } \in \mathbb{Q}$
	$\sqrt{ 2 } = \frac{p}{q}$  , $p, q \in \mathbb{Z}$, non entrambi pari
	$\sqrt{ 2 }q = p$
	$2q^2=p^2$ -> $p^2$ allora è pari, quindi anche $p$ -> $p=2m$
	$2q^2 = 4m^2$ -> anche $q^2$ è pari, quindi anche $q$.
	Contraddizione, la supposizione iniziale è falsa

## Proprietà di $\mathbb{R}$
$\mathbb{R}$ ammette operazioni di somma e prodotto con le seguenti proprità:
1. **Commutativa**: $a+b = b+a\ \ \ \forall a,b \in \mathbb{R}$
2. **Associativa**: $(a+b)+c=a+(b+c)\ \ \ \forall a,b,c \in \mathbb{R}$
3. **Numero neutro** (esistenza dello $0$): $\exists\ 0 \in \mathbb{R}$ [T.c.]{Tale che} $\forall a \in \mathbb{R}\ \ \ a+0=a$
4. **Numero opposto**: $\forall a \in \mathbb{R}, \exists -a \in \mathbb{R}$ T.c. $a+(-a) = 0$
5. **Commutativa**: $a*b=b*a\ \ \ \forall a,b \in \mathbb{R}$
6. **Associativa**: $(a*b) *c = a * (b*c)\ \ \ \forall a,b,c \in R$
7. **Numero neutro** (1): $\exists\ 1 \in \mathbb{R}$ T.c. $\forall a \in \mathbb{R}, a*1 = a$
8. **Numero inverso**: $\forall a \in \mathbb{R}, a\neq 0, \exists\ a^{-1}$ T.c. $a*a^{-1} = 1$
9. **Distributiva**: $(a+b)* c = ac+bc\ \ \ \forall a,b,c \in \mathbb{R}$

Un **campo** è un insieme $K$ dotato di due operazioni $+, *$ che soddisfano le proprietà.
Quindi:
	$\mathbb{N}$ non è un campo in quanto non soddisfa la proprietà 4;
	$\mathbb{Z}$ non è un campo in quanto non soddisfa la proprietà 8;
	$\mathbb{Q}$ è un campo in quanto soddisfa tutte le proprietà;
	$\mathbb{R}$ è un campo in quanto soddisfa tutte le proprietà;
