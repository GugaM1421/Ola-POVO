//FUNCAO ULTILIZADAS PARA FAZER O JOGO:
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 

int main()
{
    const NUM_ITENS = 20; // ESSA CONSTANTE E USADA PARA GERAR OS NUMEROS ALEATORIOS QUE CONSEQUENTEMENTE IRA SORTEAR A PALAVRA.
    
    // ESSES SAO OS TEMAS E DENTRO OS INTENS
    char animal[20][12] = {"TATU","RAPOSA","MACACO","GATO","CACHORRO",
                        "BOI","CABRA","COBRA","PEIXE","BALEIA",
                        "GOLFINHO","PORCO","HIPOPOTAMO","COELHO","PATO",
                        "VACA","BODE","JACARE","OVELHA","LEAO"
    };
    
    char nome[20][12] = {"MIGUEL","EMERSON","GUSTAVO","DAVI","LUANA",
                        "ZULEIDE","LUCAS","GABRIEL","JANAINA","JASSIARA",
                        "EDUARDA","VIRÃ“RIA","GABRIELLA","JANIELLY","AMANDA",
                        "ANA","PAULA","LARRISA","FERNANDA","APARECIDA"
    };
    
    char frutas[20][12] = {"ABACATE","BANANA","AMORA","ABACAXI","MELANCIA",
	                     "MARACUJA","CAQUI","JABUTICABA","CARAMBOLA","CEREJA",
						 "FRAMBOESA","GOIABA","JACA","LARANJA","LIMAO","MAMAO",
						 "MORANGO","PESSEGO","PITAYA","SERIGUELA"
	};
    
    char paises[20][12] = {"NORUEGA","BRASIL","ARGENTINA","INGLATERRA","ESPANHA",
	                     "COLOMBIA","VENEZUELA","CHINA","CANADA","AFRICA","IRLANDA",
						 "ALEMANHA","CHILE","HOLANDA","SINGAPURA","URUGUAI","ANGOLA",
						 "FIRLANDIA","JAMAICA","KUWAIT"
	};
    
     char timesdefutebol[20][12] = {"FLAMENGO","BOTAFOGO","BARCELONA","LIVERPOOL",
	                                "CORINTHIANS","CHELSEA","SPORT","PALMEIRAS","CRUZEIRO",
									"TOTTENHAM","MILAN","JUVENTUS","BRAGANTINO","INDEPENDENTE",
									"FLUMINENSE","BAHIA","FORTALEZA","ARSENAL","PSG","AJAX"
	};
       	
	 char creditos[5][12] = {"\n,"GUSTAVO"};
    
    
    int i; // VARIAVEL DE IMCREMENTO 
    int opc = 0; // VARIAVEL PARA O USUARIO ESCOLHER SE QUER INICAR NOVO JOGO OU SAIR. 
    int tema = 0; // VARIAVEL PARA O USUARIO ESCOLHER A OPACAO DE TEMAS.
    char dica[20]; // VARIAVEL PARA MOSTRAS A DICA DO JOGO.
    char palavra[12]; //VARIAVEL PARA ESCOLHER A PALAVRA NA HORA DO JOGO
    char acertos[12]; // QUANTIDADE DE ACERTOS.
    char palpite; // VARIAVEL PARA O USUARIO FAZER O PALPITE. EX: MIGUEL
    int contemPalpite = 0; // VARIAVEL PARA CONFERIR SE TEM A LETRA QUE O USUARIO DIGITOU NO PALPITE.
    char voltarMenu; // VARIAVEL PARA VOLTAR AO MENU PRINCIPAL 
    
    while(opc != 2){ 
        
        // VARIAVEIS USADAS DENTRO DOS FOR
        
        char letrasUsadas[26]; // VARIAVEL PARA CHECAR SE A LETRA JA FOI USADA, SE SIM, VAI ARMAZENAR AS LETRAS USADAS
        int numLetrasUsadas = 0; // VARIAVEL COM A MESMA LOGICA, USADA PARA QUARDAR QUANTAS LETRAS QUE JA FORAM USADAS
        int usada; // VARIAVEL DE INCREMENTO
        
        int erros = 0; // VARIAVEL USADA PRA GUARDAR OS ERROS DO USUARIO, ERROS = 6 ENCERRA A EXECUSAO 
        
        //executar menus e sub menus
        
        
        
        
        do{ // { DO && WHILE } SERVE APENAS PARA MOSTRAR O MENU PRINCIPAL
            
            system("cls"); // USADO PARA LIMPAR O CONSOLE 
            
            for(i = 0;i < strlen(letrasUsadas);i++){  // USADO PARA PREENCHER TODOS OS 26 SLOOTS DO VETOR " LETRASUSADAS", POIS SAO 26 LETRAS NO ALFABETO
                letrasUsadas[i] = '*';                // STRLEN USADO PARA SABER O TAMANHO DA PALAVRA 
            }
            
            printf(
					"#################################### Forca #####################################");
					
					
				
                    printf("                                                                      \n");
                    printf("                                                                      \n");
                    printf("         *--------*         *----*          *-----*          *----*   \n");
                    printf("         |__.  .__|       |        |       |   .__.|       |        | \n");
                    printf("            |  |          |  *--*  |       |   |           |  *--*  | \n");
                    printf("            |  |          |  |  |  |       |   |  *-*      |  |  |  | \n");
                    printf("         *--*  |          |  *--*  |       |   |  | |      |  *--*  | \n");
                    printf("         |     |          |        |       |   *--* |      |        | \n");
                    printf("         *-----*            *----*          *------*         *----*   \n");
                    printf("                                            \n");
                    printf("                           -------->>> DA <<<--------                                               \n");
                    printf("                                                    \n");
                    printf("                                                                                                \n");
                    printf("      *--------*       *----*          *---------*        *----------*             * *           \n");
                    printf("      |              |        |        |         |        |          |            /   *          \n");
                    printf("      |              |  *--*  |        |   ______|        |   _______|           /     *         \n");
                    printf("      |-------*      |  |  |  |        |   *              |  |                  /       *         \n");
                    printf("      |              |  *--*  |        |    *             |  |_______          /_________*        \n");
                    printf("      |              |        |        |     *            |          |        /           *       \n");
                    printf("      |                *----*          |      *           |__________|       /             *       \n");
                    printf("                             \n");
					printf("                             \n");			
								
								
								
					
					printf("\n\n ESCOLHA A OPCAO ABAIXO: ");			
			        printf("\n\n 1 - INICIAR JOGO: ");
			        printf("\n\n 2 - SAIR: ");
			        printf("\n\n  OPCAO  ESCOLHIDA: ");
			        scanf("%d", &opc);
			
			if(opc == 1){ // SE O USUARIO ESCOLHER O NUMERO 1, INIARA O JOGO E SERA EXECUTADO O CODIGO DENTRO DO IF
			    
			    do{
			        system("cls");  // LIMPAR O CONSOLE
			        
			        printf(
							"#################################### Forca #####################################");
					printf("                                                                                     \n");
					printf("       * * * * *          *----*         *--*         *--*                           \n");
					printf("       *        *       |        |      |                |                           \n");
					printf("       *        *       |  *--*  |      |   |*      /|   |                           \n");
					printf("       * * * * *        |  |  |  |      |   | *    / |   |                           \n");
					printf("       *        *       |  *--*  |      |   |  *  /  |   |                           \n");
					printf("       *        *       |        |      |   |   */   |   |                           \n");
					printf("       * * * * *          *----*         *-*          *-*                            \n");
					printf("                                                                                     \n");
					printf("       *--------*       *----*        *-----*        *----*       *--*               \n");
					printf("       |__.  .__|     |        |     |   .__.|     |        |     |  |               \n");
					printf("          |  |        |  *--*  |     |   |         |  *--*  |     |  |               \n");
					printf("          |  |        |  |  |  |     |   |  *-*    |  |  |  |     |  |               \n");
					printf("       *--*  |        |  *--*  |     |   |  | |    |  *--*  |     |__|               \n");
					printf("       |     |        |        |     |   *--* |    |        |      __                \n");
					printf("       *-----*          *----*        *------*       *----*       |__|               \n");
					printf("                                                                                     ");				
					printf("\n\n ESCOLHA O TEMA PARA JOGAR: ");
					printf("\n\n 1 - ANIMAIS: ");
					printf("\n\n 2 - NOMES: ");
					printf("\n\n 3 - FRUTAS: ");
					printf("\n\n 4 - PAISES: ");
					printf("\n\n 5 - TIMES DE FUTEBOL: ");
					printf("\n\n TEMA ESCOLHIDO: ");
					scanf(" %d", &tema);
			    }while(tema < 1 || tema > 5);
			    
			    srand(time(NULL));

			    
			    switch(tema){ // SWITCH COM O TEMA ESCOLHIDO PELO USUARIO
			        
			        case 1:
			            strcpy(dica,"Animal"); // STRCPY SERVE PARA COPIAR "ANIMAL" PARA DICA
			            strcpy(palavra,animal[rand() % NUM_ITENS]);
			            break;
			            
			        case 2: // MESMA LOGICA
			            strcpy(dica,"Nome");
			            strcpy(palavra,nome[rand() % NUM_ITENS]);
			            break;
			        
					case 3: // MESMA LOGICA
					    strcpy(dica,"frutas");
						strcpy(palavra,frutas[rand() % NUM_ITENS]);
						break;
						
					case 4: // MESMA LOGICA
					    strcpy(dica,"paises");
						strcpy(palavra,paises[rand() % NUM_ITENS]);
						break;
					
					case 5: // MESMA LOGICA
					    strcpy(dica,"timesdefutebol");
						strcpy(palavra,timesdefutebol[rand() % NUM_ITENS]);
						break;
								    
			            default:
			                break;
			    }
			}else if(opc == 2){
			    break;
			}
            
            
        } while(opc != 1 && opc != 2);
        
        //desenha a forca
        
        for (i = 0; i < strlen(palavra); i++) { // PRENCHER ACERTOS COM AS CARACTERES QUE O USUARIO ESCOLHER 
				acertos[i] = '*';
			}
			
		acertos[strlen(palavra)] = '\0';
		
		while (strcmp(palavra, acertos) != 0 && erros != 6) {

				system("cls"); // LIMPAR O CONSOLE 

				printf(
						"#################################### Forca #####################################");
				printf("\n\n  Dica: %s   Letras usadas: ", dica);

				for (i = 0; i < numLetrasUsadas; i++) { // AQUI MOSTRA AS LETRAS QUE JA FORAM USADAS
					printf("%c ", letrasUsadas[i]);

				}

				switch (erros) { // CADA CASE VAI DESENHAR UMA FORCA DIFERENTE
				case 0:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####            \n");
					printf("  ####            \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					break;
				case 1:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####       *    \n");
					printf("  ####      ***   \n");
					printf("  ##       *o o*  \n");
					printf("  ##       * ^ *  \n");
					printf("  ##         *    \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					printf("  ##              \n");
					break;
				case 2:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####       *    \n");
					printf("  ####      ***   \n");
					printf("  ##       *o o*  \n");
					printf("  ##       * ^ *  \n");
					printf("  ##         *    \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##              \n");
					printf("  ##              \n");
					break;
				case 3:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####       *    \n");
					printf("  ####      ***   \n");
					printf("  ##       *o o*  \n");
					printf("  ##       * ^ *  \n");
					printf("  ##         *    \n");
					printf("  ##         |    \n");
					printf("  ##        /|    \n");
					printf("  ##       / |    \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##              \n");
					printf("  ##              \n");
					break;
				case 4:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####       *    \n");
					printf("  ####      ***   \n");
					printf("  ##       *o o*  \n");
					printf("  ##       * ^ *  \n");
					printf("  ##         *    \n");
					printf("  ##         |    \n");
					printf("  ##        /|\\  \n");
					printf("  ##       / | \\ \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##              \n");
					printf("  ##              \n");
					break;
				case 5:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####       *    \n");
					printf("  ####      ***   \n");
					printf("  ##       *o o*  \n");
					printf("  ##       * ^ *  \n");
					printf("  ##         *    \n");
					printf("  ##         |    \n");
					printf("  ##        /|\\  \n");
					printf("  ##       / | \\ \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##        /     \n");
					printf("  ##       /      \n");
					break;
				case 6:
					printf("\n\n");
					printf("  ##########***##  \n");
					printf("  ####       *    \n");
					printf("  ####      ***   \n");
					printf("  ##       *X X*  \n");
					printf("  ##       * ^ *  \n");
					printf("  ##         *    \n");
					printf("  ##         |    \n");
					printf("  ##        /|\\   \n");
					printf("  ##       / | \\  \n");
					printf("  ##         |    \n");
					printf("  ##         |    \n");
					printf("  ##        / \\   \n");
					printf("  ##       /   \\  \n");
					break;
				}
				printf("  ##               \n");
				printf("  #######################\n\n  ");

				//DESENHA OS ESPACOS PARA AS LETRAS
				for (i = 0; i < strlen(palavra); i++) {
					if (acertos[i] == '*') {
						printf("_ ");
					} else {
						printf("%c ", acertos[i]);
					}
				}

				if (strcmp(palavra, acertos) != 0 && erros != 6) { // MAIS UMA VEZ CHECA SE O USUARIO GANHOU OU PERDEU USANDO STRCMP

					usada = 0;

					printf("\n\n  DIGITE SEU PALPITE: "); // PEGA E GUARDA O PALPITE DO USUARIO
					scanf(" %c", &palpite);
					palpite = toupper(palpite); // ESSA FUNCAO "TOUPPER" E USADA PARA CONVERTE O ALFABETO DE MINUSCULO PARA MAIUSCULO 
					                           // DESSA FORMA TANTO FAZ ESCREVER MAIUSCULO OU MINUSCULO

					//CHECA SE A LETRA JA FORAM USADA
					for (i = 0; i < 26; i++) {
						if (letrasUsadas[i] == palpite) {
							usada = 1;
						}
					}

					//SE NAO FORAM USADA
					if (usada == 0) {
						letrasUsadas[numLetrasUsadas] = palpite;
						numLetrasUsadas++;

						contemPalpite = 0;

						// IMCREMENTO 1 ACERTO
						for (i = 0; i < strlen(palavra); i++) {
							if (palpite == palavra[i]) {
								acertos[i] = palpite;
								contemPalpite = 1;
							}
						}

						if (contemPalpite == 0) { // TODAS AS VEZES QUE O USUARIO ERRAR VAI CONTAR 1 AO ERRO 
							erros++;
						}
					}

				}

			}

			if (erros == 6) {
				printf("\n\n  VOCE PERDEU! =(\n  A PALAVRA ERA:  %s", palavra);
			} else {
				printf("\n\n  VOCE GANHOU! :D A PALAVRA ERA:  %s", palavra);
  			}
  			
  			  printf("\n\n****************** CREDITOS ABAIXO *****************");
  			  
  			  int i;
  			  for(i=0; i<7; i++){
  			  	printf("%s\n\n",creditos[i]);
				}

			printf("\n\n  DIGITE ALGUMA COISA PARA VOLTAR AO MENU! ");
			scanf(" %c", &voltarMenu);
        
    }

    return 0;
}