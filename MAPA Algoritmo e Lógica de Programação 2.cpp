#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct contatos{
int codigo;
char nome[35], telefone[20],email[40];
};

int main(){
int escolha, contador = 0, i;
struct contatos pessoa[5];


do{
printf("Escolha 1 para CADASTRAR\n");
printf("Escolha 2 para LISTAR\n\n");
printf ("Escolha 0 para ENCERRAR\n\n");
scanf("%d", &escolha);
 fflush(stdin);




switch(escolha){
case 1:

if(contador <= 4 ){

printf("CADASTRO DE CONTATO\n");

printf("C%cdigo: %d\n",162,contador);

printf("Informe o nome: ");

fgets(pessoa[contador].nome, 35, stdin);

fflush(stdin);

printf("Informe o telefone: ");

fgets(pessoa[contador].telefone, 20, stdin);

fflush(stdin);

printf("Informe o email: ");

fgets(pessoa[contador].email, 40, stdin);

printf("\n");

contador++;

}else{

printf("Agenda Lotada...\n\n");

}
break;
case 2:

if(contador == 0){

printf("Agenda Vazia....\n\n");

} else {

printf("LISTA DE CONTATOS\n");

for(i=0; i<contador; i++){

printf("Código: %d\n", i);

printf("nome: %s", pessoa[i].nome);

printf("telefone: %s", pessoa[i].telefone);

printf("email: %s\n", pessoa[i].email);

}

}

break;
case 0:

printf("Encerramento do Programa\n");

break;

default:

printf("Opção Inválida");
}

}while(escolha != 0);

return(0);

}
