#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Ex1 --> Fa�a uma fun��o recursiva que calcule e retorne o fatorial de um n�mero inteiro N. */
int fatorial(int n){
	if(n < 2) {
		return 1;
	}
	return n * fatorial(n - 1);	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex2 --> Fa�a uma fun��o recursiva que calcule e retorne o N-�simo termo da sequ�ncia Fibonacci. 
        Alguns n�meros desta sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...        */
int fibonacci(int n){
	if(n < 2){
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex3 --> Fa�a uma fun��o recursiva que permita inverter um n�mero inteiro N. Ex: 123 - 321 */
int inverte(int n){
	if((n / 10) == 0){
		return n;
	}
	return inverte(n / 10) + (n % 10) * pow(10, abs(log10(n)));
}

int inverteSig(int n){
	if(n < 0){
		return -1 * inverte(n * -1);
	}
	return inverte(n);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex4 --> Fa�a uma fun��o recursiva que permita somar os elementos de um vetor de inteiros. */
int somaVetor(int vet[], int n){
	if(n == 1){
		return vet[0];
	}
	return vet[n - 1] + somaVetor(vet, n - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex5 --> Crie uma fun��o recursiva que receba um n�mero inteiro positivo N e calcule o somat�rio dos n�meros de 1 a N */
int soma1aN(int n){
	if(n == 1){
		return 1;
	}
	return n + soma1aN(n - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex6 --> Crie um programa em C, que contenha uma fun��o recursiva que receba dois inteiros positivos k e n e calcule kn. 
Utilize apenas multiplica��es. O programa principal deve solicitar ao usu�rio os valores de k e n e imprimir o resultado
da chamada da fun��o. */	
int potenciakn(int k, int n){
	if(n == 1){
		return k;
	}
	return k * potenciakn(k, n - 1);			
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex7 --> Crie um programa em C que receba um vetor de n�meros reais com 100 elementos. Escreva uma fun��o recursiva que
inverta ordem dos elementos presentes no vetor. */
float inverteVetor(float vet[], int n){
	int aux;
	if(n % 2 == 0){
		aux = 0;
	}
	else{
		aux = -1;
	}
	float interna(float vet[], int n, int i){
		if(n == i){
			return vet[n];
		}
		float aux;
		interna(vet, n - 1, i + 1);
		aux = vet[n-1];
		vet[n-1] = vet[i+1];
		vet[i+1] = aux;
	}
	return(interna(vet, n, aux));
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex8 --> m�ximo divisor comum dos inteiros x e y � o maior inteiro que � divis�vel por x e y. Escreva uma fun��o recursiva mdc em C, 
que retorna o m�ximo divisor comum de x e y. O mdc de x e y � definido como segue: se y � igual a 0, ent�o mdc(x,y) � x; 
caso contr�rio, mdc(x,y) � mdc (y, x%y), onde % � o operador resto.*/
int maxDivCom(int a, int b){
	if( b == 0){
		return a;
	}
	maxDivCom(b, a % b);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex9 --> Escreva uma fun��o recursiva que determine quantas vezes um d�gito K ocorre em um n�mero natural N. 
Por exemplo, o d�gito 2 ocorre 3 vezes em 762021192 */
int sumMatches(int n, int k, int i){
	if(n % 10 == k){
		i++;
	}
	if(n % 10 == n){
		return i;
	}
	sumMatches(n / 10, k, i);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex10 --> A multiplica��o de dois n�meros inteiros pode ser feita atrav�s de somas sucessivas. Proponha um algoritmo recursivo
Multip_Rec(n1,n2) que calcule a multiplica��o de dois inteiros */
int multRec(int a, int b){
	if(a == 0 || b == 0){
		return 0;
	}
	if(b == 1){
		return a;
	}
	return a + multRec(a, b - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex11 --> Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e imprima todos os n�meros naturais de 0 
at� N em ordem crescente. */

int retNaturais(int n){
	if(n == -1){
		return 0;               
	}	
	1 + retNaturais(n - 1);
	printf("%d ", n);	
}

int retNaturaisSig(int n){
	if(n < 0){
		return retNaturais(n * -1);
	}
	return retNaturais(n);
}	
/*----------------------------------------------------------------------------------------------------------*/

/* Ex12 --> Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e imprima todos os n�meros naturais de 
0 at� N em ordem decrescente */
int retNaturaisDec(int n){
	if(n == -1){
		return 0;
	}
	printf("%d ", n);
	retNaturaisDec(n - 1);
}

int retNaturaisDecSig(int n){
	if(n < 0){
		return retNaturaisDec(n * -1);
	}
	return retNaturaisDec(n);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex13 --> Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo par N e imprima todos os n�meros pares 
de 0 at� N em ordem crescente. */
int retSeqPar(int n){
	if(n < 0){
		return 0;
	}
	2 + retSeqPar(n - 2);
	printf("%d ", n);
}

int retSeqParSig(int n){
	if(n < 0){
		return -1 * retSeqPar(n);
	}
	return retSeqPar(n);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex14 --> Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo par N e imprima todos os n�meros pares
de 0 at� N em ordem decrescente. */
int retSeqParDec(int n){
	if(n == 0){
		printf("%d ", 0);
		return 0;
	}
	if(n % 2 == 0){
		printf("%d ", n);	
	}
	retSeqParDec(n - 1);
}
int retSeqParDecSig(int n){
	if(n < 0){
		return -1 * retSeqParDec(n);
	}
	return retSeqParDec(n);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex15 --> A fun��o fatorial duplo � definida como o produto de todos os n�meros naturais �mpares de 1 at� algum
n�mero natural �mpar N. Assim, o fatorial duplo de 5 � 5!! = 1 * 3 * 5 = 15 */

int fatDuplo(int n){
	if(n == 1){
		return 1;
	}
	if(n % 2 == 0){
		return 0;
	}
	return n * fatDuplo(n - 2);	
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex16 --> O fatorial qu�druplo de um n�mero N � dado por (2n)!/n! Fa�a uma fun��o recursiva que receba um n�mero 
inteiro positivo N e retorne o fatorial qu�druplo desse n�mero. */
int fatQuadruplo(int n){
	int interna(int n, int k){
		if(n == k){
			return  k;
		}
		return n * interna(n - 1, k);
	}
	return interna(2 * n, n + 1);	
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex17 --> O superfatorial de um n�mero N � definida pelo produto dos N primeiros fatoriais de N. Assim, o superfatorial de 4 �
sf(4) = 1! * 2! * 3! * 4! = 288. Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e retorne o superfatorial 
desse n�mero. */
int superFat(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	int interna(int n){
		if(n == 0 || n == 1){
			return 1;
		}
		return n * interna(n - 1);
	}
	return interna(n) * superFat(n - 1);
	
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex18 --> O hiperfatorial de um n�mero N, escrito H(n), � definido por H(n) = 1^1 * 2^2 * ... * (n - 1)^ n - 1 * n^n
Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e retorne o hiperfatorial desse n�mero. */
long int hiperFat(int n){
	if(n == 1 || n == 0){
		return 1;
	}
	long int interna(int n, int k){
		if(k == 1){
			return n;
		}
		return n * interna(n, k - 1);
	}
	
	return interna(n, n) * hiperFat(n - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex19 --> Um fatorial exponencial � um inteiro positivo N elevado � pot�ncia de N-1, que por sua vez � elevado
� pot�ncia de N-2 e assim em diante. Ou seja, n ^ (n - 1) ^ (n - 2) ^ ...^ 1. Fa�a uma fun��o recursiva que receba
um n�mero inteiro positivo N e retorne o fatorial exponencial desse n�mero.*/

unsigned int fatExp(int n){
	if(n == 0){
		exit(0);
	}
	if(n == 1 || n == 2){
		return n;
	}	
	unsigned int interna(int n, int k){
		if(k == 1){
			 return n;
		}
		return interna(n * interna(n, k - 1), k - 1);
	}
	return interna(n, n - 1);
 }
/* ----------------------------------------------------------------------------------------------------------*/

/* Ex20 --> Os n�meros tribonacci s�o definidos pela seguinte recurs�o: 
F(n) = 0 se n = 0; F(n) = 0 se n = 1; F(n) = 1 se n = 2; F(n) = F(n - 1) + F(n - 1) + F(n - 3) se n > 2
Fa�a uma fun��o recursiva que receba um n�mero N 
e retorne o N-�simo termo da sequ�ncia de tribonacci. */

int tribonacci(int n){
	if(n == 0 || n == 1){
		return 0;
	}
	if(n == 2){
		return 1;
		
	}
	return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex21 --> Os n�meros tetranacci iniciam com quatro termos pr�-determinados e a partir da� todos os demais n�meros s�o
obtidos pela soma dos quatro n�meros anteriores. Os primeiros n�meros tetranacci s�o: 
0, 0, 0, 1, 1, 2, 4, 8, 15, 29, 56, 108, 208... Fa�a uma fun��o recursiva que receba um n�mero N e retorne o 
N-�simo termo da sequ�ncia de tetranacci. */
int tetranacci(int n){
	if(n == 0 || n == 1 || n == 2){
		return 0;
	}
	if(n == 3){
		return 1;
	}
	return tetranacci(n - 1) + tetranacci(n - 2) + tetranacci(n - 3) + tetranacci(n - 4);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex22 -->  A sequ�ncia de Padovan � uma sequ�ncia de naturais P(n) definida pelos valores iniciais
P(0) = P(1) = p(2) = 1 e a seguinte rela��o recursiva: P(n) = P(n - 2) + P(n - 3) se n > 2
Alguns valores da sequ�ncia s�o: 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, 28...
Fa�a uma fun��o recursiva que receba um n�mero N e retorne o N-�simo termo da sequ�ncia de Padovan. */
int padovan(int n){
	if(n == 0 || n == 1 || n == 2){
		return 1;
	}
	return padovan(n - 2) + padovan(n - 3);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex23 --> Os n�meros de Pell s�o definidos pela seguinte recurs�o: P(n) = 0 se n = 0; P(n) = 1 se n = 1;
P(n) = 2P(n - 1) + P(n - 2) Alguns n�meros desta sequ�ncia s�o: 0, 1, 2, 5, 12, 29, 70, 169, 408, 985...
Fa�a uma fun��o recursiva que receba um n�mero N e retorne o N-�simo n�mero de Pell.*/

int pell(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	return 2 * pell(n - 1) + pell(n - 2);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex24 --> Os n�meros de Catalan s�o definidos pela seguinte recurs�o: C(n) = 1 se n = 0; 2(2n - 1)C(n - 1)/n + 1 se n > 0
Alguns n�meros desta sequ�ncia s�o: 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786...
Fa�a uma fun��o recursiva que receba um n�mero N e retorne o N-�simo n�mero de Catalan. */
int catalan(int n){
	if(n == 0){
		return 1;
	}
	return 2 * (2 * n - 1) * catalan(n - 1) / (n + 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex25 --> Uma palavra de Fibonacci � definida por  f(n) = b se n = 0; f(n) = a se n = 1; f(n - 1) + f(n - 2)
Aqui + denota a concatena��o de duas strings. Esta sequ�ncia inicia com as seguintes palavras:
b, a, ab, aba, abaab, abaababa, abaababaabaab, ...  Fa�a uma fun��o recursiva que receba um n�mero N e
retorne a N-�sima palavra de Fibonacci.*/
char * palaFibonacci(int n){

	char * interna(int n, char * menos1, char * menos2){
		if(n == 0){
			return menos2;
		} 
		if(n == 1){
			return menos1;	
		} 
	    int tamMenos1 = strlen(menos1); 
		int tamMenos2 = strlen(menos2);
		char aux[tamMenos1];
		strcpy(aux,menos1);
		char auxMenos1[tamMenos1 + tamMenos2 + 1];
		strcpy(auxMenos1,menos1);
		strcat(auxMenos1,menos2);
		return interna(n - 1, auxMenos1, aux);
	}
	char * a = "a"; char * b = "b";
	return interna(n, a, b);
}

/*----------------------------------------------------------------------------------------------------------*/

/* Ex26 --> Desenvolva algoritmos recursivos para cada um dos seguintes problemas:
a)Impress�o de um n�mero natural em base binaria
b)Multiplica��o de dois n�meros naturais atrav�s de somas consecutivas.
c)Invers�o de uma string.
d)Gerador da sequencia:
   (a) F(1)=1
   (b) F(2)=2
   (c) F(n)= 2*F(n-1)+3*F(n-2) <= f�rmula Geral Usando a formula podemos identificar que F(3)=2*F(2)+3*F(1) F(3)=4+3=7
(e)Verificar se uma palavra � pal�ndromo
(f)Busca sequencial em um veto desordenado que retorna a posi��o da primeira ocorr�ncia de um elemento procurado
usando uma estrat�gia similar a da busca binaria. Dica: Se n�o � o elemento do meio, procure dos dois lados e retorne
o menor dos �ndices encontrados. Se for o elemento do meio, continue a busca apenas do lado esquerdo, retornando a 
posi��o de l� se encontrar e o meio sen�o encontrar*/ 
 
/* a) Impress�o de um n�mero natural em base binaria*/ 
void binario(int n){
	int nBits = 1;
	int m = n;
	while(m > 1){    /* Calcula quantidade de bits do numero n*/
		nBits++;
		m /= 2;
	}

	int * interna(int n, int i, int * vet){
		if(n < 2){
			vet[i] = n;
			return vet;
		} 
		vet[i] = (n % 2);
		return interna(n / 2, i + 1, vet);
	}
	
	int i = 0;
	int v[nBits];
	int * vetor = interna(n, i, v);
	
	int j;
	for(j = nBits - 1; j >= 0; j--){
		printf("%d",vetor[j]);
	}
}


/* b) Multiplica��o de dois n�meros naturais atrav�s de somas consecutivas.*/  
int multSomas(int a, int b){
	int interna(int a, int aux, int b){
		if(a == 0 || b == 0) return 0;
		if(b == 1) return a;
		a += aux;
		interna(a, aux, b - 1);	
	}
	return interna(a, a, b);
	
}

/* c) Invers�o de uma string.*/
void inverteString(char * str){
	char * interna(char * s, char * aux, int i, int tam){
		if(tam == -1){
			return aux;
		}
		aux[i] = s[tam];
		interna(s, aux, i + 1, tam - 1);
	}
	int t = strlen(str) - 1;
	char strAux[t + 1];
	printf("%s",interna(str, strAux, 0, t));
}	

/* d) Gerador da sequencia:
   (a) F(1)=1
   (b) F(2)=2
   (c) F(n)= 2*F(n-1)+3*F(n-2) <= f�rmula Geral Usando a formula podemos identificar que F(3)=2*F(2)+3*F(1) F(3)=4+3=7*/
int sequencia(int n){
	if(n == 1) return 1;
	if(n == 2) return 2;
	return 2 * sequencia(n - 1) + 3 * sequencia(n - 2);
}

/* e) Verificar se uma palavra � pal�ndromo. */
int palindromo(char * str){
	int interna(char * s, char * aux, int i, int tam, int teste){
		if(tam == -1){
			if(teste > 0) return 1;
			return teste;
		}
		aux[i] = s[tam];
		if(aux[i] != s[i]){
			teste++;
		}
		interna(s, aux, i + 1, tam - 1, teste);
	}
	int t = strlen(str) - 1;
	char strAux[t + 1];
	interna(str, strAux, 0, t, 0);
} 
 
/* f) Busca sequencial em um vetor desordenado que retorna a posi��o da primeira ocorr�ncia de um elemento procurado
usando uma estrat�gia similar a da busca binaria. Dica: Se n�o � o elemento do meio, procure dos dois lados e retorne
o menor dos �ndices encontrados. Se for o elemento do meio, continue a busca apenas do lado esquerdo, retornando a 
posi��o de l� se encontrar e o meio sen�o encontrar */

int buscaSeq(char * v, char ele){
	int interna(char * vet, char e, int m, int n){
		int esquerda(char * vet, char e, int m, int i){
			if(vet[i] == e)	return i;
			if(i == m - 1 && vet[i] != e)return -1;
			return esquerda(vet, e, m, i + 1);
		}		
		int direita(char * vet, char e, int m, int i, int n){
			if(vet[m + i] == e)	return m + i;
			if(m + i == n && vet[m + i] != e) return -1;
			return direita(vet, e, m, i + 1, n);
		}	
		int i, esq, dir;
		if(vet[m] == e){
			if(n == 1 || n == 2) return 0;
			i = 0;
			esq = esquerda(vet, e, m, i);
			if(esq == -1) return m;
			return esq;
		}
		i = 0;
		if(n == 1)	return -1;		
		if(n == 2) return direita(vet, e, m, i, n);
		esq = esquerda(vet, e, m, i);
		i = 0;
		dir = direita(vet, e, m, i, n);
		if(esq == -1 && dir == -1) return -1;
		if(esq == -1 && dir != -1) return dir;
		if(dir == -1 && esq != -1) return esq; 
		if(esq < dir) return esq;
		return dir;
	}
	
	int tam = strlen(v);
	int meio;
	if(tam == 1){
		meio = 0;	
	}
	if(tam >= 2){
		if(tam % 2 == 0) meio = tam / 2 - 1;
		else meio = tam / 2;
	}
	return interna(v, ele, meio, tam);
}
 
/*----------------------------------------------------------------------------------------------------------*/
 
/* 28) A multiplica��o � Russa consiste em:
a) - Escrever os n�meros A e B, que se deseja multiplicar na parte superior das colunas.
b) - Dividir A por 2, sucessivamente, ignorando o resto at� chegar � unidade, escrever os resultados da coluna A.
c) - Multiplicar B por 2 tantas vezes quantas se haja dividido A por 2, escrever os resultados sucessivos na coluna B.
d) - Somar todos os n�meros da coluna B que estejam ao lado de um n�mero �mpar da coluna A.
Exemplo: 27 � 82

		 A    B   Parcelas
		27   82    82
		13   164   164
		6    328   -
		3    656   656
		1    1312  1312
		---------------
		Soma:     2214

Programar em C um algoritmo recursivo que permita fazer � multiplica��o a russa de 2 entradas; 

*/
 
int multRussa(int a, int b){
	int interna(int a, int b, int soma){
		if(a == 0) return soma;
		if(a % 2 != 0) soma += b;
		b = b * 2;
		return interna(a / 2, b, soma);		
	}
	int soma = 0;
	interna(a, b, soma);
} 

/*----------------------------------------------------------------------------------------------------------*/

/* 29) Implemente, usando a linguagem C, a fun��o h definida recursivamente por: 

    h(m,n) = m + 1 se n = 1
    	   = n - 1 se m = 1	
           = h(m, n - 1) + h(m - 1, n) se m > 1 e n > 1
*/

int h(int m, int n){
	if(m < 1 || n < 1) return -1;
	if(n == 1) return m + 1;
	if(m == 1) return n - 1;
	return h(m, n - 1) + h(m - 1, n);	
}

/*----------------------------------------------------------------------------------------------------------*/

/* 30) A fun��o de Achermann � definida recursivamente nos n�meros n�o negativos como segue:

      A(m, n) = n + 1 se m = 0
              = A(m - 1, 1) se m > 0 e n = 0
              = A(m - 1, A(m, n - 1)) se m > 0 e n > 0
 */
 
int A(int m, int n){
	if(m < 0 || n < 0) return -1;
	if(m == 0) return n + 1;
	if(m > 0 && n == 0) return A(m - 1, 1);
	if(m > 0 && n > 0) return A(m - 1, A(m, n - 1));	
} 
	
/*----------------------------------------------------------------------------------------------------------*/

/* 31) Escreva, usando a linguagem C, uma fun��o recursiva, SomaSerie(i,j,k: inteiro): inteiro, que devolva a 
soma da s�rie de valores do intervalo [i,j], com incremento k. */

int somaSerie(int i, int j, int inc){
	if(j - i <= 0){
		printf("PRECISA HAVER UM INTERVALO!");
		exit(0);
	}
	if(i + inc >= j){
		printf("O INCREMENTO IGUALOU OU EXTRAPOLOU O LIMITE DO INTERVALO. A SOMA DOS ELEMENTOS DO INTERVALO EH ");
	 	return i + j;
	}
	int interna(int elemento, int limite, int incremento, int soma){
		if(elemento > limite) return soma;
		soma += elemento;
		elemento += incremento;
		return interna(elemento, limite, incremento, soma);
	}
	int it = 1;	
	int soma = 0;
	return interna(i, j, inc, soma);
}

/*----------------------------------------------------------------------------------------------------------*/

/* 32) Fa�a uma fun��o recursiva, em linguagem C, que calcule o valor da s�rie S descrita a seguir para um valor
n>0 a ser fornecido como par�metro para a mesma. 

		S = (1 + 1^2)/1 = 2 + 5/2 + 10/3 + ... + (1 + n^2) / n
		
Escreva uma fun��o recursiva em C que exibe todos os elementos em um array de inteiros, separados por espa�o.
*/

float somaSerie2(int n){
	float interna(int n, float soma){
		if(n == 0){
			return soma;	
		} 
		soma += ((1.0 + pow(n, 2.0)) / n);
		return interna(n - 1, soma);
	}
	float soma = 0.0;
	return interna(n, soma);	
}



















