#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int cod;
    float notaEnade;
    float idd;
    float doutores;
    float mestres;
    float regDTrab;
    float orgDPed;
    float inf;
    float OAAP;
    int numAlun;
}TCursoD;

typedef struct{
    int cod;
    float MCpcCont;
    float cpcFaixa;
    char classificacao[14];
}TCursoP;

float calcularCPCCont(TCursoD curso){
    // checar se é assim mesmo que checa a média.
    float result=0;
    result=curso.doutores*0.15;
    result+=curso.idd*0.35;
    result+=curso.inf*0.05;
    result+=curso.mestres*0.075;
    result+=curso.notaEnade*0.2;
    result+=curso.OAAP*0.025;
    result+=curso.orgDPed*0.075;
    result+=curso.regDTrab*0.075;
    result/=8;
    return result;
}

int determCpcF(float mCpcC){
    if(mCpcC>3.945){
        return 5;
    }
    else 
    {
        if (mCpcC>2.945)
        {
            return 4;
        }
        else 
        {
            if (mCpcC>1.945)
            {
                return 3;
            }
            else
            {
                if (mCpcC>0.945)
                {
                    return 2;
                }
                else
                {
                    return 1;
                }
            }
        }
    }
}

void exibirCursosCPCF(TCursoP cursos[], int tamV){
    //Aqui, basta criar uma função para varrer o vetor de cursos.cod, enquanto existir e, para cada posição de cpc faixa, exibir os que estão dentro.
    int i, num;
    for(num=1;num<6;num++){
        for(i=0;i<tamV;i++){
            if(cursos[i].cpcFaixa==num){
                printf("%d\n", cursos[i].cod);
            }
        }
    }

}

int preencherTabela(int i, TCursoD cursos[], int j, char s[]){
    if((i%2==0)&&(i%5==0)){
        cursos[j].numAlun=atoi(s);
        return 10;
    } else{
        if((i%9==0)&&(i%3==0)){
            cursos[j].OAAP=atof(s);
            return 9;
        } else{
            if((i%2==0)&&(i%4==0)){
                cursos[j].inf=atof(s);
                return 8;
            } else{
                if(i%7==0){
                    cursos[j].orgDPed=atof(s);
                    return 7;
                } else{
                    if((i%2==0)&&(i%3==0)){
                        cursos[j].regDTrab=atof(s);
                        return 6;
                    } else{
                        if(i%5==0){
                            cursos[j].mestres=atof(s);
                            return 5;
                        }else{
                            if(i%4==0){
                                cursos[j].doutores=atof(s);
                                return 4;
                            } else{
                                if(i%3==0){
                                    cursos[j].idd=atof(s);
                                    return 3;
                                } else{
                                    if(i%2==0){
                                        cursos[j].notaEnade=atof(s);
                                        return 2;
                                    } else{
                                        cursos[j].cod=atoi(s);
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int lerArq(char nomeArq[], TCursoD dados[]){
    FILE* arq;
    char s[4];
    int i=1, j=0;
    //ao ler o arquivo, a cada 10 leituras, iterar o struct (fazer função para checar múltiplo de 10)
    //fazer uma variável para receber o string lido (cada linha ele entende como um string), usar a função para passar pra float e passar pro lugar certo
    // fazer a leitura e preenchimento do struct diretamente na main (ou não)

    arq = fopen (nomeArq, "r");


    if(arq){

        while(fscanf (arq, "%s", &s) != EOF){
            if(preencherTabela(i,dados,j,s)==10){
                j++;
            } else{
                i++;
            }
        }
        fclose(arq);
        return j;
    } else{
        return 0;
    }
}

void orgDados(TCursoD dados[], TCursoP dadosP[], int tamV){
    int i;
    for(i=0;i<tamV;i++){
        dadosP[i].cod=dados[i].cod;
        dadosP[i].MCpcCont=calcularCPCCont(dados[i]);
        dadosP[i].cpcFaixa=determCpcF(dadosP[i].MCpcCont);
        if(dadosP[i].cpcFaixa>=3){
            strcpy(dadosP[i].classificacao, "Satisfatória");
        } else{
            strcpy(dadosP[i].classificacao, "Insatisfatória");
        }
    }
}

void exibDados(TCursoP dados[], int tamV){
    int i;
    for(i=0;i<tamV;i++){
        printf("\n Curso %d:\n Código: %d\n CPC Contínuo: %f\n CPC Faixa: %f\n Classificação: %s", i, dados[i].cod, dados[i].MCpcCont, dados[i].cpcFaixa, dados[i].classificacao);
    }
}

float igcInst(TCursoD dados[], TCursoP dadosP[], int tamV){
int i;
float result=0, div=0;
for(i=0;i<tamV;i++){
    result+=dadosP[i].MCpcCont*dados[i].numAlun;
    div+=dados[i].numAlun;
}
result/=div;
return result;
}

// void incluir_curso(TCursoD dados[], char nomeArq[], int totalCursos) {
//     dados[totalCursos+1]
//     if (totalCursos >= MAX_CURSOS) {
//         printf("Limite máximo de cursos atingido.\n");
//         return -1;
//     }
//     printf("Código do curso: ");
//     scanf("%s", cursos[totalCursos].codigo);
//     printf("CPC contínuo: ");
//     scanf("%f", &cursos[totalCursos].cpc);
//     printf("Número de alunos matriculados: ");
//     scanf("%d", &cursos[totalCursos].alunos);
//     totalCursos++;
//     printf("Curso incluído com sucesso!\n");
// }
int incluirCurso(TCursoD dados[], int *tamV){
    if(tamV==99){
        printf("Limite de Cursos atingido!");
        return 0;
    } else{
    printf("\nCódigo do curso: ");
    scanf("%s", &dados[*tamV+1].cod);
    printf("\nNota do Enade: ");
    scanf("%f", &dados[*tamV+1].notaEnade);
    printf("\nNota do IDD: ");
    scanf("%f", &dados[*tamV+1].idd);
    printf("\nNota dos Doutores: ");
    scanf("%f", &dados[*tamV+1].doutores);
    printf("\nNota dos Mestres: ");
    scanf("%f", &dados[*tamV+1].mestres);
    printf("\nNota do Regime de Trabalho: ");
    scanf("%f", &dados[*tamV+1].regDTrab);
    printf("\nNota da Organização Didático-Pedagógica: ");
    scanf("%f", &dados[*tamV+1].orgDPed);
    printf("\nNota da Infraestrutura: ");
    scanf("%f", &dados[*tamV+1].inf);
    printf("\nNota das Oportunidades de Ampliação Acadêmico-social: ");
    scanf("%f", &dados[*tamV+1].OAAP);
    printf("\nNúmero de alunos matriculados: ");
    scanf("%d", &dados[*tamV+1].numAlun);
    printf("\n\nCurso incluído com sucesso!\n");
    *tamV++;
    return 1;
    }
}

void gravarArq(TCursoD dados[], char nomeArq[], int tamV){
    FILE* arq;
    int i;

    arq = fopen (nomeArq, "w");


    if (arq)
    {	
		for (i=0;i<tamV;i++)
		{
			fprintf (arq, "%d\n", dados[i].cod);
            fprintf (arq, "%f\n", dados[i].notaEnade);
            fprintf (arq, "%f\n", dados[i].idd);
            fprintf (arq, "%f\n", dados[i].doutores);
            fprintf (arq, "%f\n", dados[i].mestres);
            fprintf (arq, "%f\n", dados[i].regDTrab);
            fprintf (arq, "%f\n", dados[i].orgDPed);
            fprintf (arq, "%f\n", dados[i].inf);
            fprintf (arq, "%f\n", dados[i].OAAP);
            fprintf (arq, "%d\n", dados[i].numAlun);
		}

        printf ("Gravação feita com sucesso!");
		fclose (arq);
	}
	else
	{
		printf ("\n\nErro na abertura do arquivo!");
	}
}
void main(){
    char nomeArq[20];
    TCursoD dados[100];
    TCursoP dadosProc[100];
    printf("Informe o nome do Arquivo:");
    scanf("%s", &nomeArq);
    int cUser, Cursos=lerArq(nomeArq,dados);
    if(!Cursos){
        printf("Não foi possível abrir o arquivo!");
    } else{
        printf("Pressione 0 parra terminar o programa, 1 para adicionar um novo curso ou 2 para processar os dados");
        scanf("%d", &cUser);
        if(cUser){
            orgDados(dados, dadosProc, Cursos);
            printf("Pressione 1 para exibir os dados processados de cada curso, 2 para exibir os cursos em relação ao CPC Faixa e 3 para exibir o IGC da Instituição:");
            scanf("%d", &cUser);
            if(cUser==1){
                exibDados(dadosProc, Cursos);
            } else{
                if(cUser==2){
                    exibirCursosCPCF(dadosProc, Cursos);
                } else{
                    igcInst(dados, dadosProc, Cursos);
                }
            }
        } else{
            if(incluirCurso){
                gravarArq(dados,nomeArq,Cursos);
            }
        }
    }

// //tentando implementar uma recursiva a seguir:
// int comandUser(int comand, TCursoD dados[], TCursoP dadosP[]){
//     if(comand){
//         if(comand==1){
//             exibDados(dadosP);
//         }
//     } else {
//         printf("Encerrando o programa...");
//         return 0;
//     }
// }