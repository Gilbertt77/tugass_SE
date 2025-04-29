#include <stdio.h>
#include <string.h>

int main(){
	
	int aa;
	int bb;
	scanf("%d", &aa);
	
	char Englishlett[aa][110];
	
	for(int q = 0; q<aa ; q++){
		scanf("%s", Englishlett[q]);
	}
	
	
	for(int q=0 ; q<aa ;q++){
		char simplifiedspellsyst[110];
		int w=0;
		
		for(int a=0;Englishlett[q][a] != '\0' ; a++){
			
			if (Englishlett[q][a] == 'c' && Englishlett[q][a+1] == 'h'){
				simplifiedspellsyst[w++] = 'c';
				a++;
			}else if(Englishlett[q][a] == 'c' && (Englishlett[q][a + 1] =='e' || Englishlett[q][a + 1] =='i' || Englishlett[q][a + 1] =='y')) {
                simplifiedspellsyst[w++] = 's';
			}else if(Englishlett[q][a] == 'c' && (Englishlett[q][a+1] =='a' ||Englishlett[q][a+1] =='o'||
					Englishlett[q][a+1] =='u'|| (Englishlett[q][a+1] >='b' && Englishlett[q][a+1] <='z' &&
					Englishlett[q][a+1] !='y' && Englishlett[q][a+1] !='h') ||Englishlett[q][a+1] =='\0')){
						simplifiedspellsyst[w++] = 'k';
					}else{
						simplifiedspellsyst[w++] = Englishlett[q][a];
					}
		}
		
		simplifiedspellsyst[w] = '\0';
		printf("%s\n",simplifiedspellsyst);
	}
	return 0;
}
