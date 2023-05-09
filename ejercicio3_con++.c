int main(){
    char cadena[200];
    int indice = 0;
    gets(cadena);

    while(cadena[indice] != '\0' && indice<sizeof(cadena)){
        char actual = cadena[indice];
        if(indice == 0){
            if(actual >=97 && actual <=122)
                actual = actual-32;
        }
        if(actual == '.'){
            printf("%c", actual);
            actual = cadena[++indice];
            if(actual >=97 && actual <=122){
                actual = cadena[indice];
                actual = actual-32;
            }else{
                actual = cadena[indice];
            }

        }
        if(actual != '\0')
            indice++;
        printf("%c", actual);
    }
return 0;
}
