#include<stdio.h>
int main(){
	char character;
	printf("enter a character=",character);
	scanf("%c", &character);
	if(character>='a' && character<='z')
	{
		printf("character is vowel");
	}else{
		printf("character is consonent");
	}
	
}
        