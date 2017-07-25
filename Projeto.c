#include <stdio.h>
#include <stdlib.h>


int main()
{

/*Variáveis Declaradas*/

int n, i, j, k, nparalelo, nserie, opcao;	
float soma_inverso=0;
float paralelo=0;
float serie=0;
int vetor_paralelo[nparalelo];
int vetor_serie[nserie];



  printf("Quantos resistores existe em seu circuito?");
  scanf("%d", &n);
  system("cls");
              
  printf("Quantos resistores estao em serie?");
  scanf("%d", &nserie);
  system("cls");


        while(nserie > n){

              printf("Numero maior que o numero total de resistores");
              printf("Quantos resistores estao em serie?");
              system("cls");
              scanf("%d", &nserie);
            }

              for(i=0; i< nserie; i++){
              printf("Qual a resistencia do resistor em serie %d? ", i+1);	
              scanf("%d", &vetor_serie[i]);
              system("cls");
                }
                
              printf("Quantos resistores estao em paralelo?");
              scanf("%d", &nparalelo);
              system("cls");

        while((nserie+nparalelo) != n){

              printf("Valor invalido!\n");	
              printf("Quantos resistores estao em paralelo?");
              scanf("%d", &nparalelo);
              system("cls");
        }

              for(i=0; i<nparalelo; i++){
              printf("Qual a resistencia do resistor em paralelo %d? ", i+1);	
              scanf("%d", &vetor_paralelo[i]);
              system("cls");
                }
                
                for(j=0; j< nserie; j++){
                	
                	serie = serie + vetor_serie[j];
                }
                
                for(k=0; k<nparalelo; k++){
                    
                soma_inverso = soma_inverso + (1/vetor_paralelo[k]);   	
                }
                paralelo = 1/soma_inverso;

        while(1 == 1){
        	printf("O que voce deseja calcular?\n\n");
            printf("1-Resistencia total. \n");
            printf("2-Resistencia dos resistores em serie. \n");
            printf("3-Resistencia dos resistores em paralelo. \n");
            printf("4-Sair. \n");
            fflush(stdin);
            
            scanf("%d", &opcao);
        
                 switch(opcao){
                    case 1:{
                    printf("Resistencia Total = %.2f  \n\n", paralelo+serie);
                    break;
                    system("cls");                 
                    }

                    case 2:{
                    printf("Resistencia Serie = %.2f  \n\n", serie);
                    break;
                    system("cls"); 
                    }

                    case 3:{
                    printf("Resistencia Paralelo = %.2f \n\n", paralelo);
                    break;
                    system("cls");
                    	}

                    case 4:{
                    	
                    exit(0);	
                    break;
                   }

                   default:{
                   printf("Opcao invalida!\n");
                   }

	
}
	

}

	
}
