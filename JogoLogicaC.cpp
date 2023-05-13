#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int montarTela();

int main() {
	montarTela();
	return 0;
}

int montarTela() {
	//Gera um numero randomico a cada execução do programa
	srand(time(NULL));

	//Gera um numero entre 0 - 99
	int numeroRandomico = rand() % 100;
	printf("****************************************\n");
	printf("* Digite o valor ate acertar *\n");
	printf("****************************************\n");

	int entradaUser;
	int melhorarDica;
	int Dica = 0;
	//Laço infinito até a entrada do usuario ser igual ao numero randomico
	while (1) {

		if (Dica == 1)
			printf("* Dica: O numero esta entre %d - %d *\n", numeroRandomico - 5, numeroRandomico + 5);
		else if (Dica == 2)
			printf("* Dica: O numero esta entre %d - %d *\n", numeroRandomico - 3, numeroRandomico + 3);
		else if (Dica == 3)
			printf("* Dica: O numero esta entre %d - %d *\n", numeroRandomico - 2, numeroRandomico + 2);
		else if (Dica >= 4)
			printf("* Dica: O numero esta entre %d - %d *\n", numeroRandomico - 1, numeroRandomico + 1);
		else
			printf("* Dica: O numero esta entre %d - %d *\n", numeroRandomico - 10, numeroRandomico + 10);

		printf("Digite um valor:");
		scanf_s("%d", &entradaUser);

		if (entradaUser == numeroRandomico)
		{
			printf("Parabens voce ganhou O JOGO!"); break;
		}
		else {
			printf("Numero errado!\n");
			printf("Deseja melhorar a dica?\n");
			printf("[ 1 ] - Sim / [ 2 ] - Nao\n");
			scanf_s("%d", &melhorarDica);
			if (melhorarDica == 1)
				Dica++;
		}
	}
	return 0;
}
