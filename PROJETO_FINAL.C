#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
 void tabuleiro (char casas2[3][3]){ // função para mostrar o tabuleiro do jogo da velha
    system("cls");
    printf("\t\t\t____________________________________________________________________________________________________________\n");
    printf("\t\t\t                                   BEM VINDO AO JOGO DA VELHA - DIVIRTA-SE \n\n");
    printf("\t\t\t\t\t\t\t\t\t  %c  | %c |  %c \n", casas2[0][0], casas2[0][1], casas2 [0][2]); // exibir o tabuleiro jogo da velha
    printf("\t\t\t\t\t\t\t\t\t -------------\n");                                            // exibir o tabuleiro jogo da velha
    printf("\t\t\t\t\t\t\t\t\t  %c  | %c |  %c \n", casas2[1][0], casas2[1][1], casas2 [1][2]); // exibir o tabuleiro jogo da velha
    printf("\t\t\t\t\t\t\t\t\t -------------\n");                                            // exibir o tabuleiro jogo da velha
    printf("\t\t\t\t\t\t\t\t\t  %c  | %c |  %c \n\n", casas2[2][0], casas2[2][1], casas2 [2][2]); // exibir o tabuleiro jogo da velha

}

main (){
     /** PROJETO DE APO
    TEMA: ALIMENTAÇÃO SAUDÁVEL
    DESELVOLVIDO POR: STHEFANY ALBUQUERQUE GU3003612 E MILENA CARECHO GU3003434 TURMA B
    1.o SEMESTRE - TECNÓLOGO EM ANÁLISE E DESENVOLVIMENTO DE SISTEMAS
    IFSP - CAMPUS GUARULHOS - GUARULHOS - SP
    **/

    //MANUAL DO USUARIO - EXPLICA A "MISSÃO" DO PROGRAMA E O QUE ESPERAR DE CADA 'MODULO'
    setlocale(LC_ALL,"portuguese");



    void LINHA(char C, int Z); /** DECLARAÇÃO DA FUNÇÃO LINHA **/
    char NOME[50]; // variavel para ler o nome do usuario
    int OPC, CONT=0; // variavel para escolha das opções do menu
    float ALTURA, PESO, IMC;
    char ESC;
    char RESP;
    char CERT='S';
    int CERTO=0,ERRADO=0,CONTP=1,TOTP=1;

    int i, j; // variaveis para limpar a matriz jogo da velha
    int vez; // variavel para jogada valida jogo da velha
    int cont_jogadas; // variavel contadora de jogadas jogo da velha
    int l, c; // variavel de linha e coluna jogo da velha
    char res; // variavel de resposta para saber se o usuario vai jogar novamente jogo da velha
    char casas[3][3] = { {'1', '2', '3'},
                         {'4', '5', '6'},
                         {'7', '8', '9'},}; // matriz jogo da velha


 printf("\t\t\t   .--------------------------------------------------------------------------------------------------------------.\n");
 printf("\t\t\t   |                                              PROJETO FINAL                                                   |\n");
 printf("\t\t\t   |                                       ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨                                          |\n");
 printf("\t\t\t   |                                      ________________________________                                        |\n");
 printf("\t\t\t   |                                     |   TEMA: ALIMENTAÇÃO SAUDAVEL   |                                       |\n");
 printf("\t\t\t   |                                     |      DESENVOLVIDO POR          |                                       |\n");
 printf("\t\t\t   |                                     |      MILENA  & STHEFANY        |                                       |\n");
 printf("\t\t\t   |                                     |________________________________|                                       |\n");
 printf("\t\t\t   |                                                                                                              |\n");
 printf("\t\t\t   |--------------------------------------------------------------------------------------------------------------|\n");
 printf("\t\t\t                                                  Digite seu nome: ");
 scanf("%s",&NOME);
 system("cls");

 printf("\n");
 printf("\t\t\t                                          SEJA BEM VINDO(A) \"%s\"                                            \n", NOME);
 printf("\t\t\t   .-------------------------------------------------------------------------------------------------------.\n");
 printf("\t\t\t   |                                 ESCOLHA UMA OPÇÃO DO MENU ABAIXO                                      |\n");
 printf("\t\t\t   |                           __________________________________________                                  |\n");
 printf("\t\t\t   |                          |              MENU PRINCIPAL              |                                 |\n");
 printf("\t\t\t   |                          |__________________________________________|                                 |\n");
 printf("\t\t\t   |                          |          1 - CALCULE SEU IMC             |                                 |\n");
 printf("\t\t\t   |                          |__________________________________________|                                 |\n");
 printf("\t\t\t   |                          |          2 - RESPONDA O QUIZ             |                                 |\n");
 printf("\t\t\t   |                          |__________________________________________|                                 |\n");
 printf("\t\t\t   |                          |          3 - JOGUE O JOGO DA VELHA       |                                 |\n");
 printf("\t\t\t   |                          |__________________________________________|                                 |\n");
 printf("\t\t\t   |                          |          4 - MANUAL                      |                                 |\n");
 printf("\t\t\t   |                          |__________________________________________|                                 |\n");
 printf("\t\t\t   |                                                                                                       |\n");
 printf("\t\t\t   |-------------------------------------------------------------------------------------------------------|\n");

 printf("\n");
 printf("\t\t\t                                        DIGITE A OPÇÃO DESEJADA: ");
 scanf("%d", &OPC);
 system("cls");

switch(OPC){
    case 1:
        printf("\t\t\t                                     BEM VINDO (A) A CALCULADORA DE IMC \"%s\"                                     \n", NOME);
        printf("\t\t\t   .--------------------------------------------------------------------------------------------------------------.\n");
        printf("\t\t\t   |                                                                                                              |\n");
        printf("\t\t\t   |                                                                                                              |\n");
        printf("\t\t\t   |                      A seguir %s poderá calcular o seu Indice de Massa Corporal - (IMC).                     |\n", NOME);
        printf("\t\t\t   |                     O IMC serve para avaliar o peso do indivíduo em relação à sua altura                     |\n");
        printf("\t\t\t   |                                                                                                              |\n");
		printf("\t\t\t   *--------------------------------------------------------------------------------------------------------------*\n");
		getchar();printf ("\t\t\t                          Pressione qualquer tecla para continuar...                                      ");
	    getchar();system ("cls");

	    do{
             printf("\t\t\t _____________________________________________________________________________________________________________\n");
		     printf("\t\t\t                               Digite a sua altura (em metros, utilizando da virgula): ");
			       do{
			         scanf("%f", &ALTURA);
			       }while(ALTURA <= 0);

            printf("\t\t\t                                    Digite o seu peso (em kg): ");
			       do{
			           scanf("%f", &PESO);
			       }while(PESO <= 0);

		        IMC=((PESO))/((ALTURA*ALTURA));
		        if(IMC<=18.50){
              printf("\t\t\t                               Seu IMC é %.2f o que caracteriza  Deficit de peso\n", IMC);
		        }else{
		          if(IMC<25.00){
              printf("\t\t\t                               Seu IMC é %.2f o que caracteriza  Peso Normal\n", IMC);
		          }else{
		            if(IMC<30.00){
              printf("\t\t\t                               Seu IMC é %.2f o que caracteriza  Excesso de Peso\n", IMC);
		            }else{
		              if(IMC>=30.00)
              printf("\t\t\t                               Seu IMC é %.2f o que caracteriza Obesidade\n", IMC);
		            }
		          }
		        }
            printf("\t\t\t _____________________________________________________________________________________________________________\n");
		    printf("\t\t\t                                Deseja calcular outro IMC.                                                    \n");
		    printf("\t\t\t                                 Sim = (S)                                                                  \n\n");
		    printf("\t\t\t                                 Não = (N).                                                                 \n\n");
		    printf("\t\t\t                               Digite a sua opcão: ");
		    scanf("%s",&ESC);
            system("cls");
    	}while((ESC=='s') || (ESC =='S'));

    	if((ESC == 'N') || (ESC == 'n')){
            return  main();
    	}

    break;

    case 2:
            printf("\t\t\t __________________________________________________________________________________________________________________\n");
			printf("\t\t\t          \"%s\", descubra se você realmente têm e sabe o que é uma alimentção saudável.\n\n", NOME);
			printf("\t\t\t O quiz é formado por 10 perguntas que envolvem aspectos e o conhecimentos  de quem têm uma alimentação saudável.  \n\n");
			printf("\t\t\t                                    Boa sorte e diverta-se aprendendo!!!                                           \n\n");
			printf("\t\t\t __________________________________________________________________________________________________________________\n\n");
			getchar();printf ("                        Pressione qualquer tecla para continuar...\n\n");
			getchar();system ("cls");
			printf("\t\t\t ____________________________________________________________________________________________________________________\n");
			printf("\t\t\t|                                          PERGUNTA N. %.2d                                                           |\n", CONTP++);
			printf("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf("\t\t\t|                                        O QUE É GORDURA TRANS:                                                     |\n");
			printf("\t\t\t|___________________________________________________________________________________________________________________|\n");

			printf ("\t\t\t                 (A) É O TIPO DE GORDURA ENCONTRADA NOS ALIMENTOS DE ORIGEM ANIMAL, COMO MANTEIGA E QUEIJO          \n");
			printf ("\t\t\t                 (B) É UM TIPO DE GORDURA FORMADA POR UM PROCESSO DE HIDROGENAÇÃO NATURAL OU INDUSTRIAL,            \n");
            printf ("\t\t\t                               PORTANTO, ESTÁ PRESENTE EM ALIMENTOS INDUSTRIALIZADOS                                \n");
			printf ("\t\t\t                 (C) É UM INDIVIDUO QUE NÃO SE RECONHECE COM A IDENTIDADE DE GENERO DESIGNADA EM SEU NASCIMENTO     \n");
			printf ("\t\t\t                 (D) É CONSIDERADA A GORDURA QUE FAZ BEM Á SAÚDE                                                    \n");
            printf ("\t\t\t____________________________________________________________________________________________________________________\n");
			printf ("\t\t\t                                           Qual a resposta certa?  ");
			scanf ("%s",&RESP);
			if ((RESP=='b')||(RESP=='B'))
			{
				printf ("\t\t\t Resposta correta!\n");
				printf ("\t\t\t Gordura trans é uma gordura vegetal que passa por um processo de hidrogenação natural ou industrial.\n");
                printf ("\t\t\t Sua presença nos alimentos tem o intuito de melhorar a textura e aumentar o prazo de validade, conservando por mais tempo.\n");
                printf ("\t\t\t Algumas carnes e leite já possuem essa gordura naturalmente, mas em pequena quantidade.\n");
                printf("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				CERTO++;
			}
			else
			{
				printf ("\t\t\t Resposta errada\n");
				printf ("\t\t\t Resposta correta: Letra \"B\"\n");
				printf ("\t\t\t Gordura trans é uma gordura vegetal que passa por um processo de hidrogenação natural ou industrial.\n");
                printf ("\t\t\t Sua presença nos alimentos tem o intuito de melhorar a textura e aumentar o prazo de validade, conservando por mais tempo.\n");
                printf ("\t\t\t Algumas carnes e leite já possuem essa gordura naturalmente, mas em pequena quantidade.\n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
                ERRADO++;
			}
			getchar();printf ("\t\t\t                                    Pressione qualquer tecla para continuar");
			getchar();system("cls");
			printf("\t\t\t _____________________________________________________________________________________________________________________\n");
		    printf("\t\t\t|                                                   PERGUNTA N. %.2d                                                    |\n", CONTP++);
			printf("\t\t\t|_____________________________________________________________________________________________________________________|\n");
			printf("\t\t\t|                      AS GORDURAS TRANS, PRODUZIDAS INDUSTRIALMENTE, PODEM SER ENCONTRADAS EM:                       |\n");
			printf("\t\t\t|_____________________________________________________________________________________________________________________|\n");
			printf ("\t\t\t                 (A) BOLOS, BOLACHAS, BATATAS FRITAS                                                                  \n");
			printf ("\t\t\t                 (B) SUMOS, CHÁS, BEBIDAS ENERGÉTICAS                                                                 \n");
			printf ("\t\t\t                 (C) ARROZ, MASSA, AÇÚCAR                                                                             \n");
            printf ("\t\t\t______________________________________________________________________________________________________________________\n");
			printf ("\t\t\t                                           Qual a resposta certa?  ");
			scanf ("%s",&RESP);
			if ((RESP=='a')||(RESP=='A'))
			{
			    printf ("\t\t\t Resposta correta!\n");
				printf ("\t\t\t Pode ser encontrada e alimentos industrializados, como sorvetes, batatas fritas, salgadinhos de pacote\n");
                printf ("\t\t\t pastéis, bolos, biscoitos, entre outros; bem como as gorduras hidrogenadas e margarinas \n");
                printf ("\t\t\t e os alimentos preparados com estes ingredientes.\n");
                printf("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				CERTO++;
			}
			else
			{
				printf ("\t\t\t Resposta errada\n");
				printf ("\t\t\t Resposta correta: Letra \"A\"\n");
				printf ("\t\t\t Pode ser encontrada e alimentos industrializados, como sorvetes, batatas fritas, salgadinhos de pacote\n");
                printf ("\t\t\t pastéis, bolos, biscoitos, entre outros; bem como as gorduras hidrogenadas e margarinas \n");
                printf ("\t\t\t e os alimentos preparados com estes ingredientes.\n");
                printf("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				ERRADO++;
			}
			getchar();printf ("\t\t\t                                    Pressione qualquer tecla para continuar");
			getchar();system("cls");

			printf("\t\t\t ____________________________________________________________________________________________________________________\n");
			printf("\t\t\t|                                          PERGUNTA N. %.2d                                                           |\n", CONTP++);
			printf("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf("\t\t\t|                        PARA CONSUMIR MENOS SAL, DE FORMA SAUDÁVEL, PODEMOS:                                       |\n");
			printf("\t\t\t|___________________________________________________________________________________________________________________|\n");

			printf ("\t\t\t                 (A) TEMPERAR OS COZINHADOS COM MUITO MOLHO DE SOJA                                                 \n");
			printf ("\t\t\t                 (B) COMPRAR BATATAS FRITAS DE PACOTE, POIS TÊM POUCO SAL ADICIONADO                                \n");
			printf ("\t\t\t                 (C) TEMPERAR A COMIDA COM VÁRIAS ERVAS AROMÁTICAS E TEMPEROS NATURAIS                              \n");
            printf ("\t\t\t____________________________________________________________________________________________________________________\n");
			printf ("\t\t\t                                           Qual a resposta certa?  ");
			scanf ("%s",&RESP);
			if ((RESP=='c')||(RESP=='C'))
			{
                printf ("\t\t\t Resposta correta!\n");
				printf ("\t\t\t Apesar do alardeado resultado de um acordo entre o governo e a indústria, que reduziu o teor de sal nos alimentos\n");
                printf ("\t\t\t o consumidor brasileiro ainda consome mais que o dobro da substância recomendado pela Organização Mundial da Saúde (OMS) \n");
                printf ("\t\t\t Dessa forma, temperar a comida com ervas e temperos naturais podem ajudar a controlar o consumo e adicionar mas sabor ao alimento \n");
                printf("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				CERTO++;
			}
			else
			{

				printf ("\t\t\t Resposta errada!\n");
				printf ("\t\t\t Resposta correta: Letra \"C\"\n");
				printf ("\t\t\t Apesar do alardeado resultado de um acordo entre o governo e a indústria, que reduziu o teor de sal nos alimentos\n");
                printf ("\t\t\t o consumidor brasileiro ainda consome mais que o dobro da substância recomendado pela Organização Mundial da Saúde (OMS) \n");
                printf ("\t\t\t Dessa forma, temperar a comida com ervas e temperos naturais podem ajudar a controlar o consumo e adicionar mas sabor ao alimento \n");
                printf("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				ERRADO++;
			}

						getchar();printf ("\t\t\t                                    Pressione qualquer tecla para continuar");
			getchar();system("cls");

			printf("\t\t\t ____________________________________________________________________________________________________________________\n");
			printf("\t\t\t|                                          PERGUNTA N. %.2d                                                           |\n", CONTP++);
			printf("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf("\t\t\t|                                        O QUE SÃO NUTRIENTES?                                                      |\n");
			printf("\t\t\t|___________________________________________________________________________________________________________________|\n");

			printf ("\t\t\t                 (A) FONTE DE AUMENTO DE PESO                                                                       \n");
			printf ("\t\t\t                 (B) SUBSTÂNCIAS ESSENCIAIS PARA O FUNCIONAMENTO DO ORGANISMO.                                      \n");
			printf ("\t\t\t                 (C) ALIMENTOS DAS CÉLULAS MORTAS                                                                   \n");
            printf ("\t\t\t____________________________________________________________________________________________________________________\n");
			printf ("\t\t\t                                           Qual a resposta certa?  ");
			scanf ("%s",&RESP);
			if ((RESP=='b')||(RESP=='B'))
			{
				printf ("\t\t\t Resposta correta!\n");
				printf ("\t\t\t Nutriente é qualquer elemento ou composto químico necessário para o metabolismo de um organismo vivo.\n");
                printf ("\t\t\t Os nutrientes compõem os alimentos. Nutrientes são essenciais para a vida e são formados pelos elementos químicos. \n");
                printf("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				CERTO++;
			}
			else
			{
				printf ("\t\t\t Resposta errada\n");
				printf ("\t\t\t Resposta correta: Letra \"B\"\n");
				printf ("\t\t\t Nutriente é qualquer elemento ou composto químico necessário para o metabolismo de um organismo vivo.\n");
                printf ("\t\t\t Os nutrientes compõem os alimentos. Nutrientes são essenciais para a vida e são formados pelos elementos químicos. \n");
                printf("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				ERRADO++;
			}
                getchar();printf ("\t\t\t                                    Pressione qualquer tecla para continuar");
			getchar();system("cls");

			printf("\t\t\t ____________________________________________________________________________________________________________________\n");
			printf("\t\t\t|                                          PERGUNTA N. %.2d                                                           |\n", CONTP++);
			printf("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf("\t\t\t|                       EM QUE OS NUTRIENTES PODEM AJUDAR PARA UMA ALIMENTAÇÃO SAUDÁVEL?                            |\n");
			printf("\t\t\t|___________________________________________________________________________________________________________________|\n");

			printf ("\t\t\t                 (A) FORNECER ENERGIA                                                                               \n");
			printf ("\t\t\t                 (B) ENGORDAR                                                                                       \n");
			printf ("\t\t\t                 (C) NÃO AJUDA EM NADA                                                                              \n");
            printf ("\t\t\t____________________________________________________________________________________________________________________\n");
			printf ("\t\t\t                                           Qual a resposta certa?  ");
			scanf ("%s",&RESP);
			if ((RESP=='a')||(RESP=='A'))
			{
				printf ("\t\t\t Resposta correta!\n");
				printf ("\t\t\t Os nutrientes podem ser do tipo energético, construtor ou regulador e com isso fornecem energia para o funcionamento do organismo\n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				CERTO++;
			}
			else
			{
				printf ("\t\t\t Resposta errada\n");
				printf ("\t\t\t Resposta correta: Letra \"A\"\n");
				printf ("\t\t\t Os nutrientes podem ser do tipo energético, construtor ou regulador e com isso fornecem energia para o funcionamento do organismo\n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				ERRADO++;
			}

            getchar();printf ("\t\t\t                                    Pressione qualquer tecla para continuar");
			getchar();system("cls");

            printf("\t\t\t ____________________________________________________________________________________________________________________\n");
			printf("\t\t\t|                                          PERGUNTA N. %.2d                                                           |\n", CONTP++);
			printf("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf("\t\t\t|                                    QUAL DOS ALIMENTOS ABAIXO NOS DÁ ENERGIA?                                      |\n");
			printf("\t\t\t|___________________________________________________________________________________________________________________|\n");

			printf ("\t\t\t                 (A) BERINJELA                                                                                      \n");
			printf ("\t\t\t                 (B) REFRIGERANTE                                                                                   \n");
			printf ("\t\t\t                 (C) CHOCOLATE                                                                                      \n");
            printf ("\t\t\t                 (D) QUEIJO BRANCO                                                                                  \n");
            printf ("\t\t\t____________________________________________________________________________________________________________________\n");
			printf ("\t\t\t                                           Qual a resposta certa?  ");
			scanf ("%s",&RESP);
			if ((RESP=='c')||(RESP=='C'))
			{
				printf ("\t\t\t Resposta correta!\n");
				printf ("\t\t\t Os nutrientes energéticos possuem como função fornecer energia as células. \n");
                printf ("\t\t\t Carboidratos - Os carboidratos são fontes de energia essenciais para o organismo.  \n");
                printf ("\t\t\t Eles podem ser encontrados no açúcar, mel, pães, arroz, milho e massas.\n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				CERTO++;
			}
			else
			{
				printf ("\t\t\t Resposta errada\n");
				printf ("\t\t\t Resposta correta: Letra \"C\"\n");
				printf ("\t\t\t Os nutrientes energéticos possuem como função fornecer energia as células. \n");
                printf ("\t\t\t Carboidratos - Os carboidratos são fontes de energia essenciais para o organismo.  \n");
                printf ("\t\t\t Eles podem ser encontrados no açúcar, mel, pães, arroz, milho e massas.\n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				ERRADO++;
            }

            getchar();printf ("\t\t\t                                    Pressione qualquer tecla para continuar");
            getchar();system("cls");



            printf("\t\t\t ___________________________________________________________________________________________________________________\n");
			printf("\t\t\t|                                          PERGUNTA N. %.2d                                                           |\n", CONTP++);
			printf("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf("\t\t\t|                                  COMER FIBRAS É MUITO BOM PARA O:                                                 |\n");
			printf("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf ("\t\t\t                 (A) SISTEMA DIGESTÓRIO                                                                             \n");
			printf ("\t\t\t                 (B) SISTEMA RESPIRATÓRIO                                                                           \n");
			printf ("\t\t\t                 (C) SISTEMA LINFÁTICO                                                                              \n");
            printf ("\t\t\t____________________________________________________________________________________________________________________\n");
			printf ("\t\t\t                                           Qual a resposta certa?  ");
			scanf ("%s",&RESP);

			if ((RESP=='a')||(RESP=='A'))
			{
				printf ("\t\t\t Resposta correta!\n");
				printf ("\t\t\t O consumo de fibras ajuda a controlar os níveis de açúcar no sangue ao regular os níveis de insulina,\n");
				printf ("\t\t\t  ajuda a reduzir os níveis de colesterol no sangue\n");
                printf ("\t\t\t e também o risco de alguns tipos de cancro. As fibras melhoram a função intestinal, e evitam muitos factores de risco cardiovascular\n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				CERTO++;
			}
			else
			{
				printf ("\t\t\t Resposta errada\n");
				printf ("\t\t\t Resposta correta: Letra \"A\"\n");
				printf ("\t\t\t Resposta correta!\n");
				printf ("\t\t\t O consumo de fibras ajuda a controlar os níveis de açúcar no sangue ao regular os níveis de insulina,\n");
				printf ("\t\t\t  ajuda a reduzir os níveis de colesterol no sangue \n");
                printf ("\t\t\t e também o risco de alguns tipos de cancro. As fibras melhoram a função intestinal, e evitam muitos factores de risco cardiovascular\n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				ERRADO++;
			}
			getchar();printf ("\t\t\t                                    Pressione qualquer tecla para continuar");
            getchar();system("cls");

            printf ("\t\t\t ___________________________________________________________________________________________________________________\n");
			printf ("\t\t\t|                                          PERGUNTA N. %.2d                                                           |\n", CONTP++);
			printf ("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf ("\t\t\t|                                 QUAIS SÃO OS BENEFÍCIOS DA VITAMINA A                                             |\n");
			printf ("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf ("\t\t\t                 (A) PREVENÇÃO DE DOENÇAS COMO CEGUEIRA NOTURNA E FORTALECE O SISTEMA IMUNOLÓGICO                   \n");
			printf ("\t\t\t                 (B) PREVENÇÃO DE OSTEOPOROSE                                                                       \n");
			printf ("\t\t\t                 (C) PREVENÇÃO DE ANEMIA E LESÕES DA PELE E PROBLEMAS DO SISTEMA NERVOSO                                                                              \n");
            printf ("\t\t\t____________________________________________________________________________________________________________________\n");

			printf ("\t\t\t                                           Qual a resposta certa?  ");
			scanf ("%s",&RESP);
			if ((RESP=='a')||(RESP=='A'))
			{
				printf ("\t\t\t Resposta correta!\n");
				printf ("\t\t\t A vitamina A, que escolhe alimentos de cores vivas para se alojar, tem funções muito importantes no corpo das pessoas  \n");
                printf ("\t\t\t dentre elas, a melhora na visão, auxílio no crescimento, contribuição na formação dos dentes, na formação de colágeno, \n");
                printf ("\t\t\t além de ser necessária para a renovação celular.  \n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				CERTO++;
			}
			else
			{
				printf ("\t\t\t Resposta errada\n");
				printf ("\t\t\t Resposta correta: Letra \"A\"\n");
				printf ("\t\t\t Resposta correta!\n");
				printf ("\t\t\t A vitamina A, que escolhe alimentos de cores vivas para se alojar, tem funções muito importantes no corpo das pessoas  \n");
                printf ("\t\t\t dentre elas, a melhora na visão, auxílio no crescimento, contribuição na formação dos dentes, na formação de colágeno, \n");
                printf ("\t\t\t além de ser necessária para a renovação celular.  \n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				ERRADO++;
			}
			getchar();printf ("\t\t\t                                    Pressione qualquer tecla para continuar");
            getchar();system("cls");

            printf ("\t\t\t ___________________________________________________________________________________________________________________\n");
			printf ("\t\t\t|                                          PERGUNTA N. %.2d                                                           |\n", CONTP++);
			printf ("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf ("\t\t\t|                 POR DIA, DEVEMOS INGERIR AÇÚCARES COMO FRUTOSE, LACTOSE, NUMA QUANTIDADE MÁXIMA DE:               |\n");
			printf ("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf ("\t\t\t                 (A) 20G DE AÇÚCAR                                                                                   \n");
			printf ("\t\t\t                 (B) 35G DE AÇÚCAR                                                                                   \n");
			printf ("\t\t\t                 (C) 25G DE AÇÚCAR                                                                                   \n");
            printf ("\t\t\t_____________________________________________________________________________________________________________________\n");

			printf ("\t\t\t                                           Qual a resposta certa?  ");
			scanf ("%s",&RESP);

			if ((RESP=='c')||(RESP=='C'))
			{
				printf ("\t\t\t Resposta correta!\n");
				printf ("\t\t\t Diante dos comprovados prejuízos que o excesso de açúcar tem provocado, a Organização Mundial da Saúde (OMS) estabeleceu uma nova diretriz:  \n");
                printf ("\t\t\t incentivar os países a reduzirem o consumo de açúcar para até 5% da dieta diária da população. \n");
                printf ("\t\t\t Na vida prática, isso significa consumir no máximo 25 gramas do doce por dia.  \n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				CERTO++;
			}
			else
			{
				printf ("\t\t\t Resposta errada\n");
				printf ("\t\t\t Resposta correta: Letra \"C\"\n");
				printf ("\t\t\t Diante dos comprovados prejuízos que o excesso de açúcar tem provocado, a Organização Mundial da Saúde (OMS) estabeleceu uma nova diretriz:  \n");
                printf ("\t\t\t incentivar os países a reduzirem o consumo de açúcar para até 5% da dieta diária da população. \n");
                printf ("\t\t\t Na vida prática, isso significa consumir no máximo 25 gramas do doce por dia.  \n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				ERRADO++;
			}
			getchar();printf ("\t\t\t                                    Pressione qualquer tecla para continuar");
            getchar();system("cls");


            printf ("\t\t\t ___________________________________________________________________________________________________________________\n");
			printf ("\t\t\t|                                          PERGUNTA N. %.2d                                                           |\n", CONTP++);
			printf ("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf ("\t\t\t|                 QUAL A QUANTIDADE DE PROTEINA QUE SE DEVE INGERIR DIARIAMENTE:                                    |\n");
			printf ("\t\t\t|___________________________________________________________________________________________________________________|\n");
			printf ("\t\t\t                 (A) 0,8 GRAMAS POR KG DE PESO CORPORAL                                                              \n");
			printf ("\t\t\t                 (B) 2 KG POR KG DE PESO CORPORAL                                                                                    \n");
			printf ("\t\t\t                 (C) 10 GRAMAS POR KG DE PESO CORPORAL                                                                                    \n");
            printf ("\t\t\t_____________________________________________________________________________________________________________________\n");

			printf ("\t\t\t                                           Qual a resposta certa?  ");
			scanf ("%s",&RESP);
			if ((RESP=='a')||(RESP=='A'))
			{
				printf ("\t\t\t Resposta correta!\n");
				printf ("\t\t\t A ingestão diária recomendada é de 0,8 gramas por quilograma de peso corporal  \n");
                printf ("\t\t\t Isso equivale a cerca de 10% das calorias diárias.  \n");
                printf ("\t\t\t Para obter sua ingestão diária recomendada, multiplique o seu peso (em quilos) pelo número 0,8.  \n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				CERTO++;
			}
			else
			{
				printf ("\t\t\t Resposta errada\n");
				printf ("\t\t\t Resposta correta: Letra \"A\"\n");
				printf ("\t\t\t A ingestão diária recomendada é de 0,8 gramas por quilograma de peso corporal  \n");
                printf ("\t\t\t Isso equivale a cerca de 10% das calorias diárias.  \n");
                printf ("\t\t\t Para obter sua ingestão diária recomendada, multiplique o seu peso (em quilos) pelo número 0,8.  \n");
                printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
				ERRADO++;
			}
			getchar();printf ("\t\t\t                                    Pressione qualquer tecla para continuar");
            getchar();system("cls");

			printf("\n");
            printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");
            printf ("\t\t\t                                             Participante: %s\n", NOME);
            printf ("\t\t\t	                                     Perguntas respondidas: %d\n", CONTP-1+TOTP-1);
            printf ("\t\t\t	                                     Total de acertos.....: %d\n", CERTO);
            printf ("\t\t\t	                                     Total de erros.......: %d\n", ERRADO);
            printf ("\t\t\t	                                     Pontuacao total......: %d\n\n", CERTO);
            printf ("\t\t\t __________________________________________________________________________________________________________________\n\n\n");

            printf("\t\t\t                                           Aperte 'N' para voltar ao Menu principal ");
            scanf("%s",&ESC);
            if((ESC == 'N') || (ESC == 'n')){
            system("cls");
            return  main();
    	}


            getchar();
    break;

    case 3:

    do {
        cont_jogadas = 1;
        for (i=0; i<=2;i++){
            for (j=0; j<=2; j++){
                casas[i][j] = ' ';
            }
        }
        do {

            tabuleiro(casas);
            if (vez%2 == 0 ){       //aqui verá qual jogador esta jogando
                printf("\n\n\t\t\t\t\t\t\t\t\tJogador X\n");
            } else {
                printf("\n\n\t\t\t\t\t\t\t\t\tJogador O\n");
            }
            printf("\n\n\t\t\t\t\t\t\t\t\tDigite a linha: ");
            scanf("%i", &l);
            printf("\t\t\t\t\t\t\t\t\tDigite a coluna: ");
            scanf("%i", &c);
                if (l < 1 || c < 1 || l > 3 || c > 3){
                     l = 0;
                     c = 0;                         // jogada invalida
                } else if (casas[l-1] [c-1] != ' '){
                     l = 0;                         // jogada invalida
                     c = 0;
                     }else {
                        if (vez%2==0) {
                            casas[l-1] [c-1] ='X';
                        }else {
                            casas[l-1] [c-1] ='O';
                        }
                        vez++;
                        cont_jogadas++;
                     }
                     //condição de vitoria
                     if (casas[0][0] == 'X' && casas [0][1] == 'X' && casas[0][2] == 'X') {cont_jogadas = 11; }
                     if (casas[1][0] == 'X' && casas [1][1] == 'X' && casas[1][2] == 'X') {cont_jogadas = 11; }
                     if (casas[2][0] == 'X' && casas [2][1] == 'X' && casas[2][2] == 'X') {cont_jogadas = 11; }
                     if (casas[0][0] == 'X' && casas [1][0] == 'X' && casas[2][0] == 'X') {cont_jogadas = 11; }
                     if (casas[0][1] == 'X' && casas [1][1] == 'X' && casas[2][1] == 'X') {cont_jogadas = 11; }
                     if (casas[0][2] == 'X' && casas [1][2] == 'X' && casas[2][2] == 'X') {cont_jogadas = 11; }
                     if (casas[0][0] == 'X' && casas [1][1] == 'X' && casas[2][2] == 'X') {cont_jogadas = 11; }
                     if (casas[0][2] == 'X' && casas [1][1] == 'X' && casas[2][0] == 'X') {cont_jogadas = 11; }

                     if (casas[0][0] == 'O' && casas [0][1] == 'O' && casas[0][2] == 'O') {cont_jogadas = 12; }
                     if (casas[1][0] == 'O' && casas [1][1] == 'O' && casas[1][2] == 'O') {cont_jogadas = 12; }
                     if (casas[2][0] == 'O' && casas [2][1] == 'O' && casas[2][2] == 'O') {cont_jogadas = 12; }
                     if (casas[0][0] == 'O' && casas [1][0] == 'O' && casas[2][0] == 'O') {cont_jogadas = 12; }
                     if (casas[0][1] == 'O' && casas [1][1] == 'O' && casas[2][1] == 'O') {cont_jogadas = 12; }
                     if (casas[0][2] == 'O' && casas [1][2] == 'O' && casas[2][2] == 'O') {cont_jogadas = 12; }
                     if (casas[0][0] == 'O' && casas [1][1] == 'O' && casas[2][2] == 'O') {cont_jogadas = 12; }
                     if (casas[0][2] == 'O' && casas [1][1] == 'O' && casas[2][0] == 'O') {cont_jogadas = 12; }
        }while(cont_jogadas <= 9 ); // laço de repetição que limita a quantidade de jogadas a 9
        tabuleiro(casas);
            if (cont_jogadas==10){
                printf("\t\t\t\t\t\t\t\t\tJogo empatado\n");
            }if (cont_jogadas==11){
                printf("\t\t\t\t\t\t\t\t\tJogador X venceu!\n");
            }if (cont_jogadas==12){
                printf("\t\t\t\t\t\t\t\t\tJogador O venceu!\n");
            }
        printf("\n\t\t\t____________________________________________________________________________________________________________\n");
        printf("\t\t\t\t\t\t\t\t\tDeseja jogar novamente ? [S/N] ");
        scanf("%s", &res);
    } while (res=='s'); // laço de repetição para ver se o usuario quer jogar novament
            if((res == 'N') || (res == 'n')){
            system("cls");
            return  main();
    	}



    break;
    case 4:
         printf("\t\t\t   .--------------------------------------------------------------------------------------------------------------.\n");
    printf("\t\t\t   |                                              MANUAL DO USUARIO                                               |\n");
    printf("\t\t\t   |                                            SAÚDE E ENTRETENIMENTO                                            |\n");
    printf("\t\t\t   |                                                 1º SEMESTRE                                                  |\n");
    printf("\t\t\t   |                             TECNÓLOGO EM ANÁLISE E DESENVOLVIMENTO DE SOFTWARE                               |\n");
    printf("\t\t\t   |                                 IFSP - CAMPUS GUARULHOS - GUARULHOS - SP                                     |\n");
    printf("\t\t\t   |                                                                                                              |\n");
    printf("\t\t\t   |                                       ______________________________                                         |\n");
    printf("\t\t\t   |                                      |                              |                                        |\n");
    printf("\t\t\t   |                                      |          MODULO 01           |                                        |\n");
    printf("\t\t\t   |                                      |       CALCULO DO IMC         |                                        |\n");
    printf("\t\t\t   |                                      |______________________________|                                        |\n");
    printf("\t\t\t   | ____________________________________________________________________________________________________________ |\n");
    printf("\t\t\t   ||                                                                                                            ||\n");
    printf("\t\t\t   || IMC ou índice de massa corporal, é um método simples e amplamente difundido de se medir a gordura corporal.||\n");
    printf("\t\t\t   || A medida foi desenvolvida na Bélgica pelo astrônomo, matemático, estatístico e sociólogo, Adolphe Quételet.||\n");
    printf("\t\t\t   ||          É calculado dividindo o peso do indivíduo em quilos pelo quadrado de sua altura em metros         ||\n");
    printf("\t\t\t   ||____________________________________________________________________________________________________________||\n");
    printf("\t\t\t   |                                       ______________________________                                         |\n");
    printf("\t\t\t   |                                      |                              |                                        |\n");
    printf("\t\t\t   |                                      |           MODULO 02          |                                        |\n");
    printf("\t\t\t   |                                      | QUIZ SOBRE HABITOS SAUDAVEIS |                                        |\n");
    printf("\t\t\t   |                                      |______________________________|                                        |\n");
    printf("\t\t\t   | ____________________________________________________________________________________________________________ |\n");
    printf("\t\t\t   ||                                                                                                            ||\n");
    printf("\t\t\t   ||                          TESTE SEUS CONHECIMENTOS EM RELAÇÃO A HABITOS SAUDAVEIS                           ||\n");
    printf("\t\t\t   ||                     VEJA SE VOCÊ ESTA NO CAMINHO CERTO PARA ADQUIRIR QUALIDADE DE VIDA                     ||\n");
    printf("\t\t\t   ||____________________________________________________________________________________________________________||\n");
    printf("\t\t\t   |                                       ______________________________                                         |\n");
    printf("\t\t\t   |                                      |                              |                                        |\n");
    printf("\t\t\t   |                                      |           MODULO 03          |                                        |\n");
    printf("\t\t\t   |                                      |         JOGO DA VELHA        |                                        |\n");
    printf("\t\t\t   |                                      |______________________________|                                        |\n");
    printf("\t\t\t   | ____________________________________________________________________________________________________________ |\n");
    printf("\t\t\t   ||                                                                                                            ||\n");
    printf("\t\t\t   ||        A compulsão alimentar normalmente se origina da necessidade de preencher um 'buraco' interior       ||\n");
    printf("\t\t\t   ||        produzido por algum estresse ou problema, por isso sentimos uma sensação de prazer que 'anula'      ||\n");
    printf("\t\t\t   ||             momentaneamente a dor que sentimos. O ideal é buscar outras fontes de prazer.                  ||\n");
    printf("\t\t\t   ||  Neste modulo está disponivel o jogo da velha, chame um amigo, se divirta e  distraia sua mente.           ||\n");
    printf("\t\t\t   ||____________________________________________________________________________________________________________||\n");
    printf("\t\t\t   |______________________________________________________________________________________________________________|\n");

           printf("\t\t\t                                           Aperte 'N' para voltar ao Menu principal ");
            scanf("%s",&ESC);

            if((ESC == 'N') || (ESC == 'n')){
            system("cls");
            return  main();
            }
        system("cls");
    break;
 }


}

