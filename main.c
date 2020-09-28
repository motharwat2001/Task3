#include <stdio.h>
#include <stdlib.h>

int main()
{

    char s[16];	//maximum 16 letter



		int i =0;
		while (i<16){
			s[i] = 0;
			i = i+1;
		}
		scanf("%s", &s);
		i = 0;
		int len;
		while (i<16){
			if (s[i] == 0){
				len = i;
				break;
			}
			i = i+1;
		}

		char reverse[len];
	i = 0;
	int j = 2;
	int x = len;
	while (i<len){
		if (!(s[i]>=97 && s[i]<=122)){
			j = 0;
			i=16;
		}
		reverse[x-1] = s[i];
		i = i+1;
		x = x-1;
	}
	i = 0;


	while (i<len){
		if (!(s[i]==reverse[i])){
			j = 3;
			break;
		}
		i = i+1;
	}

	if (j==0){
		printf("Wrong Input");

	}
	else if (j == 3){
			printf("no");
	}
	else{
		printf("yes");
	}

    return 0;
}
