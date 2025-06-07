#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
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
    char class[14];
}TCursoP;

int abrirArq(char nomeArq[], TCursoD dados[], char carac){
    FILE* arq;
    char s[4];
    int i, j;
    //ao ler o arquivo, a cada 10 leituras, iterar o struct (fazer função para checar múltiplo de 10)
    //fazer uma variável para receber o string lido (cada linha ele entende como um string), usar a função para passar pra float e passar pro lugar certo
    // fazer a leitura e preenchimento do struct diretamente na main (ou não)

    arq = fopen (nomeArq, "r");


    if(arq!= NULL){

        for(i=1, j=0;fscanf (arq, "%s", &s) != EOF;i++){
            if(preencherTabela(i,dados,j,s)==10){
                j++;
            }
        }
        fclose(arq);
        return 1;
    } else{
        return -1;
    }
}


float calcularCPCCont(TCursoD curso){
    // checar se é assim mesmo que checa a média.
    float result=0;
    result=curso.doutores*0.15;
    result*=curso.idd*0.35;
    result*=curso.inf*0.05;
    result*=curso.mestres*0.075;
    result*=curso.notaEnade*0.2;
    result*=curso.OAAP*0.025;
    result*=curso.orgDPed*0.075;
    result*=curso.regDTrab*0.075;
    return result;
}

int determCpcF(float mCpcC){
    if(mCpcC>3.945){
        return 5;
    }else{
        if (mCpcC>2.945)
        {
            return 4;
        }else{
            if (mCpcC>1.945)
            {
                return 3;
            }else{
                if (mCpcC>0.945)
                {
                    return 2;
                }else{
                    return 1;
                }
                
            }
            
        }
        
    }
}

void exibirCursosCPCF(TCursoP cursos[], int num){
    //Aqui, basta criar uma função para varrer o vetor de cursos.cod, enquanto existir e, para cada posição de cpc faixa, exibir os que estão dentro.
    int i;
    for(i=0;cursos[i].cod;i++){
        if(cursos[i].cpcFaixa==num){
            printf("%d\n", cursos[i].cod);
        }
    }
}

int preencherTabela(int i, TCursoD cursos[], int j, char s[]){
    int inteiro;
    float frac;
    if((i%2==0)&&(i%5==0)){
        inteiro=atoi(s);
        cursos[j].numAlun=inteiro;
        return 10;
    } else{
        if((i%9==0)&&(i%3==0)){
            frac=atof(s);
            cursos[j].OAAP=frac;
            return 9;
        } else{
            if((i%2==0)&&(i%4==0)){
                frac=atof(s);
                cursos[j].inf=frac;
                return 8;
            } else{
                if(i%7==0){
                    frac=atof(s);
                    cursos[j].orgDPed=frac;
                    return 7;
                } else{
                    if((i%2==0)&&(i%3==0)){
                        frac=atof(s);
                        cursos[j].regDTrab=frac;
                        return 6;
                    } else{
                        if(i%5==0){
                            frac=atof(s);
                            cursos[j].mestres=frac;
                            return 5;
                        }else{
                            if(i%4==0){
                                frac=atof(s);
                                cursos[j].doutores=frac;
                                return 4;
                            } else{
                                if(i%3==0){
                                    frac=atof(s);
                                    cursos[j].idd=frac;
                                    return 3;
                                } else{
                                    if(i%2==0){
                                        frac=atof(s);
                                        cursos[j].notaEnade=frac;
                                        return 2;
                                    } else{
                                        inteiro=atoi(s);
                                        cursos[j].cod=inteiro;
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

void main(){

}