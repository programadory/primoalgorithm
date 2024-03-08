/*
* Primo Algorithm - Crivo of Erastotenes algorithm
* @programdory 2024
*/
#include <stdio.h>
#include <stdbool.h>
/* Rules:
  
  * Primo desconsidera o um (1)
  * Primos sao divisivel apenas por si mesmo ou por um. (1)
  * Apenas numeros naturais sao classificados como primos.
  
  * Visto as regras de divisibilidade dos numberos primos, observe as regras basicas de divisibilidade de numeros naturais.
  
  Divisibilidade por 2: todo número par é divisível por 2. Os números pares são aqueles terminados em 0, 2, 4, 6 e 8.
  
  Divisibilidade por 3: um número é divisível por 3 se a soma dos seus algarismos der um número divisível por 3.

  Divisibilidade por 4: um número é divisível por 4 se ele for divisível duas vezes por 2 ou, então, se seus dois últimos algarismos forem divisíveis por 4.

  Divisibilidade por 5: todo número terminado em 0 ou 5 é divisível por cinco.

  Divisibilidade por 6: se um número for par e também divisível por 3, será divisível por 6.

  Divisibilidade por 7: um número é divisível por 7 se a diferença entre o dobro do último algarismo e o restante do número resultar em um número múltiplo de 7.
  
    Numeros primos: 2,3,5,7,11,13,17,19,23,29,37,31,37,41,43,47,53,59
*/

bool isPrime(int num){
  return (
    !(num > 2 && num%2 == 0) &&    //Elimina auto divisao e Verifica divisao por 2
    !(num>=6 && num%3 == 0) &&     //Elimina um numero que nao dobra por 2 e Verifica divisao por 3
    !(num%4 == 0) &&               //Verifica divisao por 4
    !(num >= 10 && num%5 == 0) &&  //So atende casas decimais e verifica divisao por 5
    !(num%2 == 0 && num%3 == 0) && //Verifica divisao por 2 e por 3 o que resulta na divisao por 6
    !(num > 10 && num%7 == 0)      //So atende as dezenas e verifica divisao por 7
  ) ? true : false; //Retorna verdadeiro se tudo for (!)falso, ou, retorna falso se tudo for verdadeiro.
}

int main(void){
  
  unsigned int select_primo;
  
  printf("Find primo > ");
  scanf("%d", &select_primo);
  
  if(select_primo>1 && isPrime(select_primo)) //Eliminando o 1 e chamando a funcao pra verificar o primo
    printf("%d e primo!\n", select_primo); //Imprimindo
  else
    printf("Opa, esse numero ai nao e primo :3\n"); //Imprimindo
  
  return 0;
}

/* Se voce quiser entender como funciona copia isso para a versao antiga direto no main()
    
    if(select_primo>1){
    printf("%d divbytwo....:%d\n", select_primo, divbytwo(select_primo));
    printf("%d divbythree..:%d\n", select_primo, divbythree(select_primo));
    printf("%d divbyfour...:%d\n", select_primo, divbyfour(select_primo));
    printf("%d divbyfive...:%d\n", select_primo, divbyfive(select_primo));
    printf("%d divbysix....:%d\n", select_primo, divbysix(select_primo));
    printf("%d divbyseven..:%d\n", select_primo, divbyseven(select_primo));
  }*/