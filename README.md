# bccpolya

Descrição do problema:
Desenvolver uma função em C que calcule a aproximação da raiz quadrada de um número real.
------------------------------------------------------------------------------------------
Linguagem matemática:

v1 = 1
f(x) = [v1+(x/v1))/2 = v2
v3 = f(x)/2
v4 = v3/2
v5 = v4/2
------------------------------------------------------------------------------------------
Português Estruturado:
algoritimo
 função raizq: real
 
 var 
    num, a1, a2: real
 
 
 inicio 
{
 		 a1 = 1.0
     a2 = 0.0
        faca
                a2 = (a1+(num/a1))/2
                a1= (a2 + (num/a2))/2
                 a2 = (a1+(num/a1))/2
                a1= (a2 + (num/a2))/2
        enquanto (abs(a1 - a2) > 0)

        
fimfunção

var 
  num: real

inicio 
	
escraval (" Digite um numero: ")
  leia (num);

se (num < 0) nentão
  escreval("numero invalido")
	senão 
escreval("A raiz quadrada é,raizq(num));
fimse

fimalgoritimo
-------------------------------------------------------------------------------






