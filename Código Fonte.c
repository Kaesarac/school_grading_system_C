#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int alt;
char nome[50];
int senha, op;
void Cadastro();
void Exibir();
void menu();
void Excluir();
void Alterar();
char turma1[41][40], turma2[41][40], prof[1][40], materia[1][40], escola[1][40];
int bimestreT1[40][4], bimestreT2[40][4], mediaT1[40], mediaT2[40], soma1 = 0, soma2 = 0, cont, col;

int main()
{
	unsigned int cp=1252;

	unsigned int cpin = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();

	SetConsoleCP(cp);
	SetConsoleOutputCP(cp);

	setlocale(LC_ALL, "Portuguese");
	system ("color F0");
	printf ("-----------------------------------\n");
	printf("\tCADASTRO DE NOTAS\n");
	printf ("-----------------------------------\n\n");
	printf ("Nome: ");
	scanf("%s", &nome);
	{
	Beep(400,250);
	}
	printf ("Senha: ");
	scanf("%d", &senha);
	{
	Beep(400,250);
	}

	if(senha==123)
	{
		printf("\n\n");


	printf("  					11  TTTTTT  DDD   SSS \n");
  printf(" 				       111    TT    D  D  S   \n");
  printf("  					11    TT    D  D  SSS \n");
  printf("  					11    TT    D  D    S \n");
  printf("				      111111  TT    DDD   SSS \n");
    printf("\n\n");
  printf("					FFFFF  PPPPP  OOOO  OOOO\n");
  printf("					F      P   P  O  O  O  O\n");
  printf("					FFF    PPPPP  O  O  O  O\n");
  printf("					F      P      O  O  O  O\n");
  printf("					F      P      OOOO  OOOO\n");


 	Beep(370,600);
	Beep(370,465);
	Beep(370,232);
	Beep(554,232);
	Beep(494,465);
	Beep(440,465);
	Beep(415,465);
	Beep(415,232);
	Beep(415,232);
	Beep(494,465);
	Beep(440,232);
	Beep(415,232);
	Beep(370,465);
				system("cls");




				printf ("-----------------------------------\n");
				printf("\tCADASTRO DE NOTAS\n");
				printf ("-----------------------------------\n\n");
				printf ("Seja bem-vindo (a), %s. \n\n", nome);
				printf("_____________________MENU_____________________\n\n");
				printf("1 - Cadastro de notas\n");
				printf("2 - Exibir dados\n");
				printf("3 - Alterar\n");
				printf("4 - Excluir\n");
				printf("5 - Informações do sistema\n");
				printf("6 - Sair\n");
				printf("_______________________________________________\n\n");










				scanf("%d", &op);


	}
	else{
			printf("\nSenha inválida.");
			}

	switch(op){
		case 1:
			Cadastro();
			break;
		case 2:
			Exibir();
			break;
        case 3:
            Alterar();
            break;
        case 4:
            Excluir();
            break;
        case 5:
        	Info();
        	break;
        case 6:

		system("cls");

		printf("\n					_______________0000000000000000_________________");
		printf("\n					____________000________________0000_____________");
		printf("\n					_________000_________________________00_________");
		printf("\n					_______00_______________________________0_______");
		printf("\n					_____00________000____________000_________0_____");
		printf("\n					___00_____0000000000000___000000000000_____00___");
		printf("\n					__0_____0000________________________0000_____0__");
		printf("\n					_0______0___________________00000000___0______0_");
		printf("\n					0__________________________00______00__________0     	AGRADECO               ");
		printf("\n					0___________000000_________00__00__00__________0       POR ACESSAR                ");
		printf("\n					0________000000000000______0__0000__0__________0       MEU SISTEMA!             ");
		printf("\n					0___________________00_____00__00__00__________0       ATÉ A PRÓXIMA :)           ");
		printf("\n					0__________________________000____000__________0");
		printf("\n					0____________________________000000____________0");
		printf("\n					0______________________________________________0");
		printf("\n					_0___________00000______________00000_____00__0_");
		printf("\n					__0____________00000000000000000000__0___0__0___");
		printf("\n					___0__________________00__0__00___0__0__0__0____");
		printf("\n					_____0________________00__0__00___0__0_0__0_____");
		printf("\n					_______00_____________00_____00___0___0___00000_");
		printf("\n					_________000___________000000____0000000___0__0_");
		printf("\n					_____________000________________0_______0__0__0_");
		printf("\n					________________000000000000000000__0000_00_00__");
		printf("\n					________________________________000__________0__");
		printf("\n					__________________________________00000000000");





        	break;
        default:
        	printf("Sinto muito! Você apresentou uma alternativa inexistente :(");
	}
}



void menu()
{
				system("cls");
				setlocale(LC_ALL, "Portuguese");
				printf ("-----------------------------------\n");
				printf("\tCADASTRO DE NOTAS\n");
				printf ("-----------------------------------\n\n");
				printf ("Seja bem-vindo (a), %s. \n\n", nome);
				printf("_____________________MENU_____________________\n\n");
				printf("1 - Cadastro de notas\n");
				printf("2 - Exibir dados\n");
				printf("3 - Alterar\n");
				printf("4 - Excluir\n");
				printf("5 - Sair\n");
				printf("_______________________________________________\n\n");
				scanf("%d", &op);

		switch(op){
		case 1:
			Cadastro();
			break;
		case 2:
			Exibir();
			break;
		case 3:
            Alterar();
            break;
        case 4:
            Excluir();
            break;
        case 5:
            break;



        		system("cls");

		printf("\n					_______________0000000000000000_________________");
		printf("\n					____________000________________0000_____________");
		printf("\n					_________000_________________________00_________");
		printf("\n					_______00_______________________________0_______");
		printf("\n					_____00________000____________000_________0_____");
		printf("\n					___00_____0000000000000___000000000000_____00___");
		printf("\n					__0_____0000________________________0000_____0__");
		printf("\n					_0______0___________________00000000___0______0_");
		printf("\n					0__________________________00______00__________0     	AGRADECEMOS               ");
		printf("\n					0___________000000_________00__00__00__________0       POR ACESSAR                ");
		printf("\n					0________000000000000______0__0000__0__________0       NOSSO SISTEMA!             ");
		printf("\n					0___________________00_____00__00__00__________0       ATÉ A PRÓXIMA :)           ");
		printf("\n					0__________________________000____000__________0");
		printf("\n					0____________________________000000____________0");
		printf("\n					0______________________________________________0");
		printf("\n					_0___________00000______________00000_____00__0_");
		printf("\n					__0____________00000000000000000000__0___0__0___");
		printf("\n					___0__________________00__0__00___0__0__0__0____");
		printf("\n					_____0________________00__0__00___0__0_0__0_____");
		printf("\n					_______00_____________00_____00___0___0___00000_");
		printf("\n					_________000___________000000____0000000___0__0_");
		printf("\n					_____________000________________0_______0__0__0_");
		printf("\n					________________000000000000000000__0000_00_00__");
		printf("\n					________________________________000__________0__");
		printf("\n					__________________________________00000000000");


        	break;

		default:
		printf("Sinto muito! Você apresentou uma alternativa inexistente :(");
	}
}





void Cadastro()
{
	system("cls");

	printf ("-----------------------------------\n");
	printf ("------AQUI É FEITO O CADASTRO------\n");
	printf ("-----------------------------------\n");

	setlocale(LC_ALL, "Portuguese");
	//Recebe o nome da Escola
	printf("Qual o nome da escola?\n");
	scanf("%s", escola[0]);

	//Recebe o nome do Professor
	printf("Qual o nome do professor?\n");
	scanf("%s", prof[0]);

	//Recebe a Matéria em questão
	printf("Qual a matéria?");
	scanf("%s",materia[0]);

	//Recebe os alunos das Turmas 1 e 2
	for(cont = 0; cont <2; cont++){
		printf("Insira o nome do aluno [%d] da Turma 1 \n", cont+1);
		scanf("%s", turma1[cont]);
		printf("\n");
		printf("Insira o nome do aluno [%d] da Turma 2 \n", cont+1);
		scanf("%s", turma2[cont]);
		printf("\n");
	}

	//Recebe as notas bimestrais de ambas turmas
	for(cont = 0; cont <2; cont++){
		for(col = 0; col < 2; col++){
			printf("Insira a nota do Bimestre [%d] do Aluno [%d] da Turma 1 \n", col+1, cont+1);
			scanf("%d", &bimestreT1[cont][col] );
			printf("\n");
			printf("Insira a nota do Bimestre [%d] do Aluno [%d] da Turma 2 \n", col+1, cont+1);
			scanf("%d", &bimestreT2[cont][col] );
			printf("\n");
		}
	}

	//Calcula a Média de cada aluno
	for(cont = 0; cont <2; cont++){
		   for(col = 0; col < 2; col++){
			   soma1 = soma1 + bimestreT1[cont][col];
			   soma2 = soma2 + bimestreT2[cont][col];
		   }
		   mediaT1[cont] = (soma1)/2;
		   soma1 = 0;
		   mediaT2[cont] =(soma2)/2;
		   soma2 = 0;
	}

	//Exibe todos os dados registrados
		printf("\nEscola: %s ", escola[0]);
		printf("\nProfessor: %s ", prof[0]);
		printf("\nMatéria: %s \n", materia[0]);
		printf("\n");

		printf("------------------------------------");
		printf("------------------------------------");

		printf("\nTurma 1: \n");
	for(cont = 0; cont<2; cont++){
		   printf("Aluno [%d] %s \n", cont+1, turma1[cont]);
		   printf("Média %d", mediaT1[cont]);
		   printf("\n");
	}
	printf("------------------------------------");
	printf("------------------------------------");


	printf("\nTurma 2: \n");
	for(cont = 0; cont<2; cont++){
		   printf("Aluno [%d] %s \n", cont+1, turma2[cont]);
		   printf("Média %d", mediaT2[cont]);
		   printf("\n");
	}

	printf("\nRetorne ao menu! ");
	printf("Digite 0 para voltar.\n");
	scanf("%d", &alt);

	if(alt==0)
	{
		menu();
	}


}

void Exibir()
{

	system("cls");
	printf ("-----------------------------------\n");
	printf ("--------------EXIBIÇÃO-------------\n");
	printf ("-----------------------------------\n");



	setlocale(LC_ALL, "Portuguese");
printf("\nEscola: %s ", escola[0]);
		printf("\nProfessor: %s ", prof[0]);
		printf("\nMatéria: %s ", materia[0]);
		printf("\n");

		printf("------------------------------------");
		printf("------------------------------------");

		printf("Turma 1: \n");
	for(cont = 0; cont<2; cont++){
		   printf("Aluno [%d] %s \n", cont+1,  turma1[cont]);
		   printf("Média %d", mediaT1[cont]);
		   printf("\n");
	}

	printf("------------------------------------");
	printf("------------------------------------");

	printf("Turma 2: \n");
	for(cont = 0; cont<2; cont++){
		   printf("Aluno [%d] %s \n", cont+1, turma2[cont]);
		   printf("Media %d", mediaT2[cont]);
		   printf("\n");
}

	printf("\nRetorne ao menu! ");
	printf("Digite 0 para voltar. \n");
	scanf("%d", &alt);

	if(alt==0)
	{
		menu();
	}



}

void Alterar()
{
	system("cls");
	printf ("-----------------------------------\n");
	printf ("--------ALTERAÇÃO DOS DADOS--------\n");
	printf ("-----------------------------------\n");




	setlocale(LC_ALL, "Portuguese");
    printf("Qual dado deseja alterar? \n");
    printf("\t1 - NOTAS \n");
    printf("\t2 - NOMES \n");
    printf("\t3 - NOME DA ESCOLA \n");
    printf("\t4 - MATÉRIA \n");
    printf("\t5 - PROFESSOR \n");
    printf("\t6 - SAIR \n");
    scanf("%d", &alt);
    switch(alt)
    {
       case 1:

           for(cont = 0; cont <2; cont++){
                for(col = 0; col < 2; col++){
                    printf("Insira a nota do Bimestre [%d] do Aluno [%d] da Turma 1 \n", col+1, cont+1);
                    scanf("%d", &bimestreT1[cont][col] );
                    printf("\n");
                    printf("Insira a nota do Bimestre [%d] do Aluno [%d] da Turma 2 \n", col+1, cont+1);
                    scanf("%d", &bimestreT2[cont][col] );
                    printf("\n");
                }
            }
        break;

        case 2:

            for(cont = 0; cont <2; cont++){
                printf("Insira o nome do aluno [%d] da Turma 1 \n", cont+1);
                scanf("%s", turma1[cont]);
                printf("\n");
                printf("Insira o nome do aluno [%d] da Turma 2 \n", cont+1);
                scanf("%s", turma2[cont]);
                printf("\n");
                }
        break;

        case 3 :

            printf("Qual o nome da escola?\n");
            scanf("%s", escola[0]);
            break;

        case 4 :

            printf("Qual a matéria?");
            scanf("%s",materia[0]);
            break;

        case 5 :

            printf("Qual o nome do professor?\n");
            scanf("%s", prof[0]);
            break;

        case 6:

          break;

    }
    printf("\nRetorne ao menu! ");
	printf("Digite 0 para voltar.\n");
	scanf("%d", &alt);

	if(alt==0)
	{
		menu();
	}

}

void Excluir()
{
	system("cls");



	printf ("-----------------------------------\n");
	printf ("---------------EXCLUIR-------------\n");
	printf ("-----------------------------------\n");










	setlocale(LC_ALL, "Portuguese");
    printf("Qual dado deseja Excluir? \n");
    printf("\t1 - NOTAS \n");
    printf("\t2 - NOMES \n");
    printf("\t3 - NOME DA ESCOLA \n");
    printf("\t4 - MATÉRIA \n");
    printf("\t5 - PROFESSOR \n");
    printf("\t6 - SAIR \n");
    scanf("%d", &alt);
    switch(alt){
case 1 :
    for(cont = 0; cont <2; cont++){
        for(col = 0; col < 2; col++){

            bimestreT1[cont][col] = 0;
            bimestreT2[cont][col] = 0;
            }
            mediaT1[cont] = 0;
            mediaT2[cont] = 0;
            }
            printf("\nDADOS EXCLUÍDOS\n");
    break;
case 2:
    for(cont = 0; cont <2; cont++){
        turma1[cont][cont] = ('\0');
        turma2[cont][cont] = ('\0');
	}
	printf("\nDADOS EXCLUÍDOS\n");
    break;
case 3:
    escola[0][0] = ('\0');
    printf("\nDADOS EXCLUÍDOS\n");
    break;
case 4:
    materia[0][0] = ('\0');
    printf("\nDADOS EXCLUÍDOS\n");
    break;
case 5:
    prof[0][0] = ('\0');
    printf("\nDADOS EXCLUÍDOS\n");
    break;
case 6:
    break;
    }
    printf("\nRetorne ao menu! ");
	printf("Digite 0 para voltar.\n");
	scanf("%d", &alt);

	if(alt==0)
	{
		menu();
	}
}













