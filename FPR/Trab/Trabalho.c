#include <stdio.h>

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

int abrirArq(char nomeArq[], char carac){
    FILE* arq;
    int i, num, ant = INT_MIN;
    char linha[5];
    

    arq = fopen (nomeArq, "r");


    if(arq!= NULL){


        while(fscanf (arq, "%s", &num) != EOF)
		{
            if(){

            }
		}
        fclose(arq);
        return 1;
    } else{
        return -1;
    }
}


float mCPCCont(TCursoD curso){
    float result=0;
    result=curso.doutores;
    result*=curso.idd;
    result*=curso.inf;
    result*=curso.mestres;
    result*=curso.notaEnade;
    result*=curso.OAAP;
    result*=curso.orgDPed;
    result*=curso.regDTrab;
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

void exibirCCPC(TCursoP cursos){
    //Aqui, basta criar uma função para varrer o vetor de cursos.cod, enquanto existir e, para cada posição de cpc faixa, exibir os que estão dentro.
}