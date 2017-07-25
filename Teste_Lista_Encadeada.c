#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

/*Criar Menuhttp://slideplayer.com.br/slide/1219762/*/
void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});

}

void linha2();
void linha();

typedef struct endereco{
       int numero;
       char rua[30];
       char cidade[30];
       char bairro[30];
       char estado[30];
       
       
}Tendereco;

typedef struct cliente{
       char nome[35];
       char cpf[15];
       char telefone[20];
       int idade;
       char rg[30];
       char data[40];
       float valor;
       Tendereco listaEndereco;
       struct cliente *prox;
}Tcliente;

typedef struct campeonato{
	 char nome[30];
     char dataini[20];
     char datafim[30];
     
     struct campenato *prox;
}Tcamp;

typedef struct time{
	 char time[30];
     struct time *prox;
}Ttimes;



typedef struct listaCliente{
        Tcliente *inicio; 
}TlistaCliente;

void inserirCliente(TlistaCliente *L);
void listarCliente(TlistaCliente *L);
void buscarCliente(TlistaCliente *L);

void carregarBL(TlistaCliente *L);
void salvarBL(TlistaCliente *L);
/*CAMPEONATO*/

typedef struct listaCamp{
        Tcamp *inicio; 
}TlistaCamp;


void inserirCamp(TlistaCamp *B);
void listarCamp(TlistaCamp *B);

/*TIME*/
typedef struct listaTimes{
        Ttimes *inicio; 
}TlistaTime;

void inserirTimes(TlistaTime *T);
void listarTime(TlistaTime *T);


main(){
	
    
	int opcao, op_02, op_01;

	TlistaCliente L;
	L.inicio = NULL;

    TlistaTime T;
    T.inicio = NULL;

	TlistaCamp B;
    B.inicio = NULL;

    carregarBL(&L);

	while(1==1){
	    
	     
	     system("cls");
         system ("color 9f");

          system("title SISBL - SISTEMA CONTROLE DE BOLAO DE FUTEBOL");
	      system("cls");
          fflush(stdin);
          linha();
	      puts("\xBA========= BOLAO DE FUTEBOL ==========\xBA");
	      puts("\xBA 1 - CADASTRAR CAMPEONATO :          \xBA");
	      puts("\xBA 2 - CADASTRAR APOSTADOR:            \xBA");
	      puts("\xBA 3 - MOSTRAR PONTUACAO:              \xBA");
	      puts("\xBA 4 - LISTAR VENCEDOR DO BOLAO:       \xBA");
	      puts("\xBA 5 - SALVAR OS DADOS:                \xBA");
	      puts("\xBA 6 - CARREGAR OS DADOS DO BOLAO:     \xBA");
	      puts("\xBA 7 - ALTERAR OS DADOS DAS APOSTAS:   \xBA");
	      puts("\xBA 0 - SAIR                            \xBA");
          linha2();   
		  linha(); 

          printf("\xBA Digite uma opcao:                   \xBA\n");
		  linha2();
		  gotoxy(20,13);
		    scanf("%d", &opcao);
		     printf("\n\n");

				switch(opcao){
				 
					         case 1:
						     system("cls");
			              	 puts("+---------------------------------+");
			              	 puts("| 1-CADASTRAR CAMPEONATO          |");
			              	 puts("| 2-CADASTRAR TABELA              |");
			              	 puts("| 3-CADASTRAR TIMES               |");
			              	 puts("| 4-LISTAR CAMEONATO              |");
			              	 puts("| 5-LISTAR TIMES                  |");
			              	 puts("| 6-LISTAR TABELA                 |");
			              	 puts("| 7-SAIR                          |");
			              	 puts("+---------------------------------+");
			              	  fflush(stdin);
			              	   scanf("%d", &op_01);
			              	 
					              	 switch(op_01){
					              	 	
											 case 1:
		                                     inserirCamp(&B);
							                 break;
					                         
					                         case 2:
					                       	 		                           
											 break;
											 
											 case 3:
											 	inserirTimes(&T);
											 break;
											 
											 	
					                         case 4:
					                            listarCamp(&B);
					                         break;
		
		                                     case 5:
			                                    listarTime(&T);
			                                  break;
					                          
		                                     case 6:
			                                     
					                                 
					                         break;	
					         
					                         case 7: 
					                         break;	
		
		                                    
								              default:
												puts("+------------------------+");
										        puts("|     Opcao Invalida!    |");
										        puts("+------------------------+");
		
					                       
					                   }
				                     
		                               break;
		                               
							
							            case 2:
								
				                        system("cls");
				                       	puts("+---------------------------------+");
					              	    puts("| 1-CADASTRAR APOSTADOR           |");
					              	    puts("| 2-LISTAR APOSTADORES            |");
				                        puts("| 3-BUSCAR APOSTADOR              |");
					              	    puts("| 3-CADASTRAR APOSTA              |");
					              	    puts("| 4-SAIR                          |");
					              	    puts("+---------------------------------+");
				                       	fflush(stdin);
				                       	  scanf("%d", &op_02);
				                       	  
						                       	      switch(op_02){
						                       	      	
								                       	   	      case 1:
								                       	   	      	inserirCliente(&L);	
								                       	   	      break;
																			
								                                  case 2:
								                                  	listarCliente(&L);
								                       	   	      break;                        	   	
								                       	   	
								                       	   	      case 3:
					                                               buscarCliente(&L);
								                       	   	      break;
								                       	   	             
								                       	   	      case 4:
								                       	   	      break;
						                       	   	
				                                                  
													              default:
																	puts("+------------------------+");
															        puts("|     Opcao Invalida!    |");
															        puts("+------------------------+");
				                                              
													      }
				                    
									   
				
				                              
		
		
						break;
					
					case 3:
						
						break;
					
					case 4:
						
						break;
					
					case 5:
						salvarBL(&L);
						break;
                    case 6:
						carregarBL(&L);
						break;
					
					case 0:
		                exit(0);
		                break;
		                
		            default:
				   	puts("+------------------------+");
			        puts("|     Opcao Invalida!    |");
                    puts("+------------------------+");
		        } 
		        system(" pause");
		    }
		    getchar();
		}
		



void inserirCliente(TlistaCliente *L){ 
	system("cls");
    puts("+------------------------------------+");
    puts("|       01 - CADASTRAR CLIENTE       |");
    puts("+------------------------------------+");
     
    Tcliente *novo;
    novo = (Tcliente*) malloc(sizeof(Tcliente));
        
	fflush(stdin);
    printf("NOME: ");
	gets(novo->nome);
    printf("CPF: ");
	gets(novo->cpf);
    printf("RG: ");
	gets(novo->rg);
    printf("IDADE: ");
	scanf("%d", &novo->idade);
    fflush(stdin);
    printf("TELEFONE: ");
	gets(novo->telefone);
    printf("DATA APOSTA: ");
	gets(novo->data);
    printf("VALOR APOSTA: ");
	scanf("%f", &novo->valor);        
    fflush(stdin);
	   
	printf("\n>> ENDERECO\n");
    printf("RUA: ");
	gets(novo->listaEndereco.rua);
    fflush(stdin);
    printf("NUMERO: ");
	scanf("%d", &novo->listaEndereco.numero);
    fflush(stdin);
    printf("BAIRRO: ");
	gets(novo->listaEndereco.bairro);
    printf("CIDADE: ");
	gets(novo->listaEndereco.cidade);
    printf("ESTADO: ");
	gets(novo->listaEndereco.estado);
    fflush(stdin);
     
    novo->prox = NULL;
       
	if(L->inicio == NULL){
		L->inicio = novo;
    }else{
        Tcliente *temp;
        temp = L->inicio;
        while(temp->prox != NULL){ 
            temp = temp->prox;
        }
        temp->prox = novo;
     
    }
   
 }
 

void listarCliente(TlistaCliente *L){
	system("cls");
    puts("+------------------------------------+");
    puts("|         02 - LISTAR CLIENTE        |");
    puts("+------------------------------------+");
    
    Tcliente *novo;
    novo = L->inicio;
           
    while(novo != NULL){ 
        printf("NOME CLIENTE: %s\n", novo->nome); 
        printf("CPF: %s\n", novo->cpf);   
        printf("RG: %s\n", novo->rg);
        printf("IDADE: %d\n", novo->idade); 
        printf("DATA: %s\n", novo->data); 
        printf("TELEFONE: %s\n", novo->telefone);   
        printf("VALOR: %2.f\n", novo->valor);
    
        printf("\n>> ENDERECO\n\n");
        printf("RUA: %s\n", novo->listaEndereco.rua);
        fflush(stdin);
        printf("NUMERO: %d\n", novo->listaEndereco.numero);
        printf("BAIRRO: %s\n", novo->listaEndereco.bairro);
        printf("CIDADE: %s\n", novo->listaEndereco.cidade);
        printf("ESTADO: %s\n", novo->listaEndereco.estado);
        
        novo = novo->prox;
        puts("||||||||||||||||||||||||||||||||||||"); 
	} 
}


void buscarCliente(TlistaCliente *L){
    system ("cls");
    puts("+--------------------------------------+");
    puts("|         03 -  BUSCAR APOSTADOR       |");
    puts("+--------------------------------------+");
     
    Tcliente *novo;
    novo = L->inicio;
    char CPF[15];
     
    if(L->inicio == NULL){
        printf("\n>> ERRO! NAO HA CLIENTE(S) CADASTRADO(S)...\n\n");
        return;
    }else{
        printf("DIGITE O CPF PARA A BUSCA: ");
		fflush(stdin);
		gets(CPF);
		
        while(novo != NULL){
            if (!strcmpi(CPF, novo->cpf)){
                printf("NOME DO CLIENTE: %s\n", novo->nome);   
                printf("CPF: %s\n", novo->cpf);
                printf("TELEFONE: %s\n", novo->telefone);

                printf("\n>> ENDERECO\n\n");
                printf("RUA: %s\n", novo->listaEndereco.rua);
                printf("NUMERO: %d\n", novo->listaEndereco.numero);
                printf("BAIRRO: %s\n", novo->listaEndereco.bairro);
                printf("CIDADE: %s\n", novo->listaEndereco.cidade);
                printf("ESTADO: %s\n\n", novo->listaEndereco.estado);
                return;
            }
            novo = novo->prox;    
        }
    }
    printf("\n>> ERRO! CPF INVALIDO...\n\n");
}



/*CAMPEONATO*/

void inserirCamp(TlistaCamp *B){ 
	system("cls");
    puts("+------------------------------------+");
    puts("|       01 - CADASTRAR CANMPEONATO   |");
    puts("+------------------------------------+");
     
    Tcamp *novo;

    novo = (Tcamp*) malloc(sizeof(Tcamp));
        
	fflush(stdin);
    printf("NOME: ");
	gets(novo->nome);
    printf("DATA INICIAL: ");
	gets(novo->dataini);
    printf("DATA FIM: ");
	gets(novo->datafim);
       
    novo->prox = NULL;
       
	if(B->inicio == NULL){
		B->inicio = novo;
    }else{
        Tcamp *temp;
        temp = B->inicio;
        while(temp->prox != NULL){ 
            temp = temp->prox;
        }
        temp->prox = novo;
    }
 }


 void listarCamp(TlistaCamp *B){
	system("cls");
    puts("+------------------------------------+");
    puts("|      02 - LISTAR CAMPEONATO        |");
    puts("+------------------------------------+");
    
    Tcamp *novo;
    novo = B->inicio;
           
    while(novo != NULL){ 
        printf("CAMPEONATO: %s\n", novo->nome); 
        printf("DATA INICIAL: %s\n", novo->dataini);   
        printf("DATA FINAL: %s\n", novo->datafim);
        
        
        novo = novo->prox;
        puts("||||||||||||||||||||||||||||||||||||"); 
	} 
}

/*TIMES*/

void inserirTimes(TlistaTime *T){ 
	system("cls");
    puts("+------------------------------------+");
    puts("|       02 - CADASTRAR TIMES         |");
    puts("+------------------------------------+");
     
    Ttimes *novo;

    novo = (Ttimes*) malloc(sizeof(Ttimes));
        
	fflush(stdin);
    printf("TIME: ");
	gets(novo->time);
    
       
    novo->prox = NULL;
       
	if(T->inicio == NULL){
		T->inicio = novo;
    }else{
        Ttimes *temp;
        temp = T->inicio;
        while(temp->prox != NULL){ 
            temp = temp->prox;
        }
        temp->prox = novo;
    }
 }


 void listarTime(TlistaTime *T){
	system("cls");
    puts("+------------------------------------+");
    puts("|      05 - LISTAR TIMES             |");
    puts("+------------------------------------+");
    
    Ttimes *novo;
    novo = T->inicio;
           
    while(novo != NULL){ 
        printf("CAMPEONATO: %s\n", novo->time); 
        
        
        
        novo = novo->prox;
        puts("||||||||||||||||||||||||||||||||||||"); 
	} 
}



void salvarBL(TlistaCliente *L){
	
     FILE *arq;
     arq = fopen("bolao.dat", "wb");
        fwrite(&L, sizeof(struct listaCliente), 1, arq);
        fclose(arq);     
}


void carregarBL(TlistaCliente *L){
     FILE *arq;
     arq = fopen("bolao.dat", "rb");
     if(arq != NULL ) {
          fread(L, sizeof(struct listaCliente), 1, arq);
          fclose(arq);     
     }
}



void linha(){
	printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
}

void linha2(){
	printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBc\n");
}

