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

void exibirCursosCPCF(TCursoP cursos[]){
    //Aqui, basta criar uma função para varrer o vetor de cursos.cod, enquanto existir e, para cada posição de cpc faixa, exibir os que estão dentro.
    int i, num;
    for(num=1;num<6;num++){
        for(i=0;cursos[i].cod;i++){
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
    int i, j;
    //ao ler o arquivo, a cada 10 leituras, iterar o struct (fazer função para checar múltiplo de 10)
    //fazer uma variável para receber o string lido (cada linha ele entende como um string), usar a função para passar pra float e passar pro lugar certo
    // fazer a leitura e preenchimento do struct diretamente na main (ou não)

    arq = fopen (nomeArq, "r");


    if(arq){

        for(i=1, j=0;fscanf (arq, "%s", &s) != EOF;i++){
            if(preencherTabela(i,dados,j,s)==10){
                j++;
            }
        }
        fclose(arq);
        return 1;
    } else{
        return 0;
    }
}

void orgDados(TCursoD dados[], TCursoP dadosP[]){
    int i;
    for(i=0;dados[i].cod;i++){
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

void exibDados(TCursoP dados[]){
    int i;
    for(i=0;dados[i].cod;i++){
        printf("\n Curso %d:\n Código: %d\n CPC Contínuo: %f\n CPC Faixa: %f\n Classificação: %s", i, dados[i].cod, dados[i].MCpcCont, dados[i].cpcFaixa, dados[i].classificacao);
    }
}

float igcInst(TCursoD dados[], TCursoP dadosP[]){
int i;
float result=0, div=0;
for(i=0;dados[i].cod;i++){
    result+=dadosP[i].MCpcCont*dados[i].numAlun;
    div+=dados[i].numAlun;
}
result/=div;
return result;
}

void main(){
char nomeArq[20];
TCursoD dados[100];
TCursoP dadosProc[100];
int cUser;
printf("Informe o nome do Arquivo:");
scanf("%s", &nomeArq);

if(!lerArq(nomeArq,dados)){
    printf("Não foi possível abrir o arquivo!");
} else{
    printf("Pressione 0 parra terminar o programa, 1 para adicionar um novo curso ou 2 para processar os dados");
    scanf("%d", &cUser);
    if(cUser){
        orgDados(dados, dadosProc);
        printf("Pressione 1 para exibir os dados processados de cada curso, 2 para exibir os cursos em relação ao CPC Faixa e 3 para exibir o IGC da Instituição:");
        scanf("%d", &cUser);
        if(cUser==1){
            exibDados(dadosProc);
        } else{
            if(cUser==2){
                exibirCursosCPCF(dadosProc);
            } else{
                igcInst(dados, dadosProc);
            }
        }
    } else{

    }
}

//tentando implementar uma recursiva a seguir:
int comandUser(int comand){
    if(comand){
        if(comand==1){
            exibDados(dadosProc);

        }
    } else {
        printf("Encerrando o programa...");
        return 0;
    }
}