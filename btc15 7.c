#include<stdio.h>
int main(){
	char text[]="NoV@Sel1ne";
	int countCharacterText=0;
	int countCharacterNum=0;
	int countCharacterSpecial=0;
	int length=strlen(text);
	for(int i=0;i<length;i++){
		if(isalpha(text[i])){
			countCharacterText++;
		}else if(isdigit(text[i])){
			countCharacterNum++;
		}else{
			countCharacterSpecial++;
		}
	}
	printf("%d ki tu chu cai \n",countCharacterText);
	printf("%d ki tu chu so \n",countCharacterNum);
	printf("%d ki tu chu cai dac biet\n",countCharacterSpecial);
	return 0;
}
