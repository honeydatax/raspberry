#include <stdio.h>
#include <stdlib.h>

char c1[50];
void str(int a,char *s);
void putss(char *cc);

void main(){
int a;
a=98765432;
str(a,c1);
putss(c1);
}


void str(int a,char *s){
int b;
int c;
int d;
int f;
int g;
int h;
g=(int)'0';
d=10;
c=1000000000;
for (b=0;b<10;b++){
h=(a/c)*c;
f=a/c+g;
	if (a>=c){
		s[b]=f;
	}
	else{
		s[b]='0';
	}
	a=a-(a/c)*c;
	c=c/d;
}
b=b+1;
s[b]='$';

}

void putss(char *cc){
char *c ;
c=cc;
puts(c);
}