#include <stdio.h>   // biblioteca para entrada e saída (printf, scanf)
#include <math.h>    // biblioteca matemática (pow, sqrt, sin, cos, etc)
#include <stdlib.h>   // biblioteca padrão


int main() {
   double num1, num2, num3,num4, resultado, media;
   int operador;
   char continuar;

              // Menu de opções
   do {  //função para colocar a calculadora em loop 
       
   printf("\n=== CALCULADORA CIENTIFICA ===\n");
   printf("1 - Soma\n");
   printf("2 - Subtração\n");
   printf("3 - Multiplicação\n");
   printf("4 - Divisão\n");
   printf("5 - Potência (a^b)\n");
   printf("6 - Raiz Quadrada\n");
   printf("7 - Seno\n");
   printf("8 - Cosseno\n");
   printf("9 - Tangente\n");
   printf("10 - Logaritmo natural (ln)\n");
   printf("11 - Logaritmo base 10\n");
   printf("12 - Exponencial (e^x)\n");
   printf("13 - Media Aritmetica\n");
   printf("14 - Valor Absoluto\n");
   printf("15 - Arredondar para o menor numero inteiro\n");
   printf("16 - Arredondar para o inteiro mais proximo\n");
   printf("17 - Arredondar para o maior valor inteiro que não é maior que x\n");
   printf("18 - Fatorial de um número\n");
   printf("19 - Arco seno\n");
   printf("20 - Arco Cosseno\n");
   printf("21 - Arco Tangente\n");
   printf("22 - Resto da divisão\n");
   printf("23 - Sair\n");
   printf("Escolha uma opção (1 a 23): ");
   scanf(" %d", &operador);
  
   switch (operador) {
      case 1:  // Soma
      printf("Digite o primeiro número: ");
   scanf("%lf", &num1);
    printf("Digite o segundo número: ");
   scanf("%lf", &num2);
        resultado = num1 + num2;    // Função para somar dois números
        printf("Resultado: %.2f\n", resultado);
        break;
        
        
        
        
        
        case 2:  // Subtração
         printf("Digite o primeiro número: ");
   scanf("%lf", &num1);
    printf("Digite o segundo número: ");
   scanf("%lf", &num2);
        resultado = num1 - num2;  // Função para subtrair dois números
        printf("Resultado: %.2f\n", resultado);
        break;
        
        
        
        
        
        case 3:   // Multiplicação
         printf("Digite o primeiro número: ");
   scanf("%lf", &num1);
    printf("Digite o segundo número: ");
   scanf("%lf", &num2);
        resultado = num1 * num2; // Função para multiplicar dois números

        printf("Resultado: %.2f\n", resultado);
        break;
        
        
        
        

        
        case 4:  // Divisão
         printf("Digite o primeiro número: ");
   scanf("%lf", &num1);
    printf("Digite o segundo número: ");
   scanf("%lf", &num2);
        if (num2 !=0) { // Função que impede divisão por zero
            resultado = num1 / num2; // Função para dividir dois números
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro: Divisão por zero!\n");
        }
        break;
        
        
        
        
        
        case 5: // Potência
         printf("Digite o primeiro número: ");
   scanf("%lf", &num1);
    printf("Digite o segundo número: ");
   scanf("%lf", &num2);
        resultado = pow(num1, num2); // Função para calcular potência
        printf("Resultado: %.2f\n", resultado);
        break;
        
        
        
        
        
        
        case 6: // Raiz quadrada
         printf("Digite o primeiro número: ");
   scanf("%lf", &num1);
        if (num1 >= 0){ // raiz só existe para números >= 0
            resultado = sqrt(num1); // Função para calcular raiz quadrada
            printf("Resultado: %.2f\n", resultado);
        }else{
            printf("Erro raiz de numero negativo!\n");
        }
            break;
            
            
        
            
            
            
        case 7: // Seno
         printf("Digite o angulo em graus: ");
   scanf("%lf", &num1);
        resultado = sin(num1 * M_PI / 180); // Função para calcular seno
        printf("Resultado: %.4f\n", resultado);
        break;
        
        
        
        
        
        case 8: // Cosseno
         printf("Digite o angulo em graus: ");
   scanf("%lf", &num1);
        resultado = cos(num1 * M_PI / 180); // Função para calcular cosseno
        printf("Resultado: %.4f\n", resultado);
        break;
        
        
        
        
        
        case 9: // Tangente
         printf("Digite o angulo em graus: ");
   scanf("%lf", &num1);
        resultado = tan(num1 * M_PI / 180); // Função para calcular tangente
        printf("Resultado: %.4f\n", resultado);
        break;
        
        
        
        
        
        case 10: // Logaritmo natural
         printf("Digite um número para ver o seu logaritmo natural: ");
   scanf("%lf", &num1);
        if (num1 > 0){
            resultado = log(num1); // Função para calcular logaritmo natural
            printf("Resultado: %.3f\n", resultado);
        }else{
            printf("Erro logaritimo de numero negativo!\n");
        }
            break;
        
        
        
        
        
            case 11: // Logaritmo base 10
            printf("Digite um número para ver o seu logaritmo de base 10: ");
             scanf("%lf", &num1);
        if (num1 > 0){
                resultado = log10(num1); // Função para calcular logaritmo base 10
                printf("Resultado: %.2f\n", resultado);
        }else{
            printf("Erro logaritmo de numero não positivo!\n");
        }
            break;
            
            
            
        
            
            case 12: // Exponencial
            printf("Digite o expoente x para a função (e^x): ");
            scanf("%lf", &num1);
            resultado = exp(num1); // Função para calcular exponencial 
            printf("Resultado: %.2f\n", resultado);
            break;
            
            
            
            
            
            
            case 13: // Média aritmética
            printf("Digite o primeiro número: ");
            scanf("%lf", &num1);
            printf("Digite o segundo número: ");
            scanf("%lf", &num2);
            printf("Digite o terceiro número: ");
            scanf("%lf", &num3);
            printf("Digite o quarto número: ");
            scanf("%lf", &num4);
            
            media = (num1 + num2 + num3 + num4 ) / 4.0; // Função para calcular média aritmética
            printf("Resultado: %.2f\n", media);
            break;
            
            
            
            
            
            case 14: // Valor absoluto
            printf("Digite um número para ver o seu valor absoluto: ");
            scanf("%lf", &num1);
            resultado = abs(num1); // Função para calcular valor absoluto
            printf("Resultado: %.2f\n", resultado);
            break;
            
            
            
            
            case 15: // Arredondar para o menor numero inteiro
            printf("Digite um número: ");
            scanf("%lf", &num1);
            resultado = ceil(num1); // Função para arredondar para o menor numero inteiro
            printf("Resultado: %.2f\n", resultado);
            break;
            
            
            
            
            
            case 16: // Arredondar para o inteiro mais próximo
            printf("Digite um número: ");
            scanf("%lf", &num1);
            
            resultado = round(num1); // Função para arredondar para o inteiro mais proximo
            printf("Resultado: %.2f\n", resultado);
            break;
            
            
            
            case 17: // Arredondar maior numero inteiro que não é maior que x
            printf("Digite um número: ");
            scanf("%lf", &num1);
            resultado = floor(num1); // Função para arredondar para o maior valor inteiro que não é maior que x
            printf("Resultado: %.2f\n", resultado);
            break;
            
            
            
            case 18: // Fatorial
                printf("Digite um número para ver o seu fatorial: ");
                scanf("%lf", &num1);
            if (num1 < 0 || floor(num1) != num1) { // só funciona para inteiros positivos
                printf("Erro numero negativo!");
            } else { 
                int n = (int)num1;
                long long fat = 1; // começa o fatorial em 1
                for (int i = 1; i <= n; i++) { // Multiplica de 1 até n
            fat *= i;
                }
                printf("Resultado: %.2lld\n", fat);
            }
            break;
            
            
            
            case 19: // Arco seno 
             printf("Digite um numero entre -1 e 1 para ver o seu arco do seno: ");
   scanf("%lf", &num1);
   if (num1 < -1 || num1 > 1) {
        printf("Erro! O valor deve estar entre -1 e 1.\n");
    } else {
        
        resultado = asin(num1); // Função para calcular arco seno
        resultado = resultado * 180 / M_PI;
        printf("Resultado: %.2f\n", resultado);
    }
        break;
            
            
            case 20: // Arco cosseno
            printf("Digite um numero entre -1 e 1 para ver o seu arco do cosseno: ");
   scanf("%lf", &num1);
   if (num1 < -1 || num1 > 1) {
        printf("Erro! O valor deve estar entre -1 e 1.\n");
    } else {
        
        resultado = acos(num1); // Função para calcular arco cosseno
        resultado = resultado * 180 / M_PI;
        printf("Resultado: %.2f\n", resultado);
    }
            break;
            
            
            
            
            
            case 21: // Arco tangente
             printf("Digite um numero real para ver o seu arco da tangente: ");
   scanf("%lf", &num1);
        resultado = atan(num1); // Função para calcular arco tangente
        resultado = resultado * 180 / M_PI;
        printf("Resultado: %.2f\n", resultado);
        break;    
            
          
          
           
           
           case 22: // Resto da divisão
    printf("Digite o primeiro número inteiro: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%lf", &num2);
    if ((int)num2 != 0) { //Função para calcular módulo (resto da divisão)
        int resto = (int)num1 % (int)num2;
        printf("O resto da divisão é: %d\n", resto);
    } else {
        printf("Erro: divisão por zero!\n");
    }
        break;
           
            
            
            case 23: // Sair 
            printf("Saindo da calculadora, obrigado por utilizar!!");
            return 0; //encerra a calculadora
            break;
            
            
            
            
            
        default: // caso a escolha for inválida
        printf("Opção invalida!\n");
   }
   // Pergunta se o usuário quer continuar
   printf("Deseja realizar outra operação? (s/n) s=sim n=não: ");
   scanf("%s", &continuar);

} while (continuar == 's' || continuar == 'S'); // Função que continua o programa se digitar 's'
   
   printf("Obrigado por utilizar a calculadora!!");
   
   return 0; // fim do programa

 }