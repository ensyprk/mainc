#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// fonksiyon kullanma deneme
int main(int argc, char *argv[]) {
	int sayi = 10;
	
	printf("%d", karesi(sayi));
	

	return 0;
}


int karesi(int x)
{
x*=x;
return x;	
	
}

