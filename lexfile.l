%{
#include<stdio.h>
#include "y.tab.h"
%}

%%
[0-9]+  {
		yylval.real=atoi(yytext);
		return NUMBER;
		}
[0-9]*\.[0-9]* {
		yylval.real=(float)atof(yytext); 
		return NUMBER;
		}        
to      {return to;}
of      {return of;}
m       {return m;}
cm		{return cm;}
tonne       {return tonne;}
km      {return km;}
pound       {return pound;} 
g       {return g;}
kg      {return kg;}
pascal      {return pascal;}
bar	{return bar;}
joule	{return joule;}
cal	{return cal;}
hr	{return hr;}
min	{return min;}
s	{return s;}
msec	{return msec;}
kmhr	{return kmhr;}
deg	{return deg;}
rad	{return rad;}
inch        {return inch;}
ft		{return ft;} 
[\n]	{return yytext;}
[/t]	;
%%
int yywrap(void){return 1;}