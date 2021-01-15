#include<stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 50 

void codifica(FILE *outputText, int chiave) {
    int i;
	char ch;
	char stringa[DIM];

    
	printf("Inserire stringa: ");
	scanf("%s",stringa);
	
	for(i = 0; stringa[i] != '\0'; i++){
		ch = stringa[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + chiave;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
				
			stringa[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + chiave;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			stringa[i] = ch;
		}
	}
	
	fprintf(outputText,"%s",stringa);	
}

void decodifica(FILE *input, int chiave) {
    int i;
	char ch;
	char stringa[DIM];
    
	fscanf(input,"%s",stringa);
	
    for(i = 0; stringa[i] != '\0'; ++i){
        ch = stringa[i];
        
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - chiave;
            
            if(ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
            }
            
            stringa[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch - chiave;
            
            if(ch > 'a'){
                ch = ch + 'Z' - 'A' + 1;
            }
            
            stringa[i] = ch;
        }
    }
	
	printf("Decodificato: %s\n",stringa);
}


void mostra(FILE *file) {
	char stringa[DIM];
	
	while(fscanf(file,"%s",stringa) != EOF) {
		printf("Codificato: %s\n",stringa);
	}
	
}

int main(int argc, char **argv) {
	int n;
	char nomeFile[DIM];
	FILE *fp;
	
	if(argc != 3) {
		printf("Uso ./codifica <fileOutput> <numeroPosizioniShift>\n");
		exit(-1);		
	}
	
	strcpy(nomeFile,argv[1]);
	n = atoi(argv[2]);
	
	printf("%s %d\n",nomeFile,n);
	
	fp = fopen(nomeFile,"w+t");

	if(fp == NULL) {
		printf("Errore apertura file\n");
		exit(-1);
	}

	codifica(fp,n);
	rewind(fp);
	mostra(fp);
	rewind(fp);
	decodifica(fp,n);
	
	fclose(fp);
}