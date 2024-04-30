/*
Q2 - Implemente um programa que, infinitamente, receba, como parâmetro de entrada, um número n e retorne a representação binária de n. Por exemplo, se n é igual a 12, a resposta deste programa deve ser “1100”. Seu programa para quando n for menor que zero
*/

int main(){

  int n;
  while (1) { // Loop infinito até que n seja menor que zero
        printf("Digite um numero inteiro (ou um numero negativo para sair): ");
        scanf("%d", &n);

        // Chamada da função para converter o número para binário
        decimalParaBinario(n);

        if (n < 0) // Verifica se n é menor que zero para sair do loop
            break;
    }


  return 0;
}

void decimalParaBinario(int n) {

  if(n < 0){
    printf("Numero invalido");
    return;
  }
  if(n == 0){
    printf("Representacao Binaria");
  }

  int binario[32]; // Vetor para armazenar os bits binários, tamanho máximo para um inteiro de 32 bits.
  int i = 0;

  // Converte para binário enquanto n for maior que zero
  for(i ; n > i; i++){
    binario[i] = n % 2;
    n = n / 2;
  }

  printf("Representacao binaria: ");
  // Imprimindo na ordem reversa.
  for(int j = i - 1; j >= 0 ; j--){
    printf("%d", binario[j]);
  }
  printf("\n");

}
