main ()
{
char *foo;
int counter;
foo=malloc(sizeof(char)*10);
for (counter=0;counter!=14;counter++){
foo[counter]='a';
printf("%s\n",foo);
}
}