#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct cadastro{
	    int codigo;
	    char autor[45], editora[45], titulo[45];
};

int main()
{
	
	   setlocale(LC_ALL,"Portuguese");
	   
	   int digite, cont=1,i;
	   struct cadastro novo[5];
	   
	   printf(".......OLÁ, SEJA BEM VINDO!......\n\n");
	   system("pause");
	   
	   do{
	   
	   printf("Digite 1 para INSERIR NOVO CADASTRO\n");
	   printf("Digite 2 para VER OS CADASTROS\n");
	   printf("Digite 0 para ENCERRAR\n");
	   printf("\n");
				scanf("%d", &digite);
				fflush(stdin);
				system("cls");
				
				switch(digite){
				   
				  case 1:
				  	
				  	 if(cont <= 5){
			
				  	
				   	  printf("CADASTRAR UM NOVO LIVRO:\n\n"); 
				  	   printf("Código:%d\n",cont);
				  	   
				   	  printf("Digite o título do Livro:");
				   	  fgets(novo[cont].titulo,45,stdin);
				   	  fflush(stdin);
				   	  printf("\n");
				   	  
				   	  printf("Digite o nome do Autor(a):");
										fgets(novo[cont].autor,45,stdin);
										fflush(stdin);
										printf("\n");
										
				   	  printf("Digite o nome da Editora:");
				   	  fgets(novo[cont].editora,45,stdin);
				   	  fflush(stdin);
				   	  printf("\n");
				   	  
				   	  cont++;
				   	  
				   	  system("cls");
				   	}
				   	
				   	else{
				   		 
				   		 printf("......SISTEMA DE CADASTRO LOTADO.......\n\nNÃO É POSSÍVEL ARMAZENAR MAIS INFORMAÇÕES\n\n");
								}
				   	
				   break;
							
							case 2:							
							  
									if(cont ==1){
										printf("\n.....LISTA VAZIA.....\n\n");
									}
									
									else {
										printf("\n....CONSULTAR CADASTRO:....");
							   printf("\n");
							    for(i=1; i<cont; i++){   
										
										
							   	  printf("Código:%d\n",i);
							   	  printf("Título:%s\n",novo[i].titulo);
							   	  printf("Autor(a):%s\n",novo[i].autor);
							   	  printf("Editora:%s\n",novo[i].editora);
							   }
										}
							 
							break;
							
							case 0:
							   printf("......ENCERRAR O PROGRAMA........");
							break;
							printf("\n");
							default:
							   printf(".....OPÇÃO INVÁLIDA.......\n\n");							  
			}
			
	}while(digite != 0);
	  
			 return (0);
	
}

