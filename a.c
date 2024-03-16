#include <stdio.h>

int main() {

  int num_1, num_2;
  int opcao, resultado;

  printf("Digite o valor 1: ");
  scanf("%d", &num_1);
  printf("Digite o valor 2: ");
  scanf("%d", &num_2);

  fflush(stdin);

  do {
    printf("Digite uma opção:\n");  //oque o usuário vê
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Sair\n");
    scanf(" %d", &opcao);

    switch (opcao) {                // oque a maquina lê e entende.
      case 1:
        printf("Opção 1: Adição\n");
        resultado = num_1 + num_2;
        
        break;
      case 2:
        printf("Opção 2: Subtração\n");
        resultado = num_1 - num_2;
        
        break;
      case 3:
        printf("Opção 3: Multiplicação\n");
        resultado = num_1 * num_2;
        
        break;
      case 4:
        printf("Opção 4: Divisão\n");
        resultado = num_1 / num_2;
        
        break;
      case 5:
        printf("Saindo...\n");
        break;
      default:
        printf("Opção inválida. Tente novamente.\n");         // ou seja aqui vemos como funciona a visão USUÁRIO X MAQUINA e como cada um se entende.
    }
  } while (printf("**Resultado**: **%d\n", resultado), opcao != 5); // primeiro o while termina o loop executa o valor, e se o  usuário digitar 5, 
                                                              // ele vai ver que a variavel vai ser true e vai finalizar o loop com o switch.

  return 0;
}
