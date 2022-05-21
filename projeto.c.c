#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<conio.h>

int opcao = 0;
int nome[50];
int data[15];
int cpf[13];
int endereco[50];
int complemento[30];
int bairro[30];
int cidade[20];
int estado[10];
int cep[12];
int telefone[12];
int email[50];
char comorbidade[50];



void TelaLogin(){

    char login[15] = "adm";
    char login1[15];
    char senha[15] = "123";
    char senha1[15];
    int login_efetuado = 0; //0 - Falso e  1 - Verdadeiro

    while(!login_efetuado){
        printf("Digite o Login: ");
        scanf("%s", login1);

        printf("Digite a Senha: ");
        scanf("%s", senha1);

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\nVOCE ESTA LOGADO!\n\n");
            login_efetuado = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");  
              
    }

}


void MostrarMenu(){
    FILE *file;
    file=fopen("string.txt","r");
    if (file==NULL)

    printf("****************************************************************************\n\n");
    printf("****************************** SEJA BEM VINDO ******************************\n\n");
    printf("****************************************************************************\n\n");

    printf("1) - Cadastro De Paciente\n");
    printf("2) - SAIR DO SISTEMA\n\n");    
    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &opcao);

    getchar();    

}

void CadastroPaciente(){

    printf("\n\nAdicione os dados do Paciente\n");
    printf("\n Digite o Nome Completo:");
    fgets(nome,50,stdin);
    printf("\n Digite a Data de Nascimento (dd/mm/aaaa):");
    fgets(data,15,stdin);
    printf("\n Digite o Cpf:");
    fgets(cpf,13,stdin);
    printf("\n Digite o Endereco:");
    fgets(endereco,50,stdin);
    printf("\n Digite o Complemento:");
    fgets(complemento,30,stdin);
    printf("\n Digite o Bairro:");
    fgets(bairro,30,stdin);
    printf("\n Digite a Cidede:");
    fgets(cidade,20,stdin);
    printf("\n Digite o Estado:");
    fgets(estado,10,stdin);
    printf("\n Digite o Cep:");
    fgets(cep,12,stdin);
    printf("\n Digite o Telefone:");
    fgets(telefone,12,stdin);
    printf("\n Digite o Email:");
    scanf("\n%s",email);
    printf("  -------------------------------------------------");
    printf("\n  -O paciente possui algum tipo de comorbidade?     -");
    printf("\n  -[1]SIM                                         -");
    printf("\n  -[2]NAO                                         -\n");
    printf("  -------------------------------------------------");
    printf("\nEscolha a opcao dejesada: ");
    scanf("%d", &opcao);
    
    printf("\n*********************************************DADOS COLETADOS******************************************\n");
    printf("\n---------------------------------------------------");
    printf("\nNome:%s\nData:%s\nCpf:%s\nEndereco:%s\ncomplemento:%s\nBairro:%s\nCidade:%s\nEstado:%s\nCep:%s\nTelefeone:%s\nEmail:%s\n",nome,data,cpf,endereco,complemento,bairro,cidade,estado,cep,telefone,email);
    
    getchar();

    
    
    system("pause");
    system("cls");
    return MostrarMenu();
    








 


}



int main(){

    setlocale(LC_ALL, "portuguese");

    TelaLogin();

    MostrarMenu();

        switch (opcao)

        {

            case 1 : // Gravar Paciente

                CadastroPaciente();

            break;

             
            default :

                printf("Opcao 2 ok!Aperte enter outra vez para sair do Sistema");

            break;    
        }

        getchar();



    return 0;
}

