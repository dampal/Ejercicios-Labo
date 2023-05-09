int main(){
    char cadena[200];
    int indice = 0;
    gets(cadena);
    if(cadena[0] >=97 && cadena[0] <=122){
        cadena[0] -= 32;
    }
    while(cadena[indice] != '\0' && indice<sizeof(cadena)){
        if(cadena[indice] == '.' && cadena[indice+1] != '\0'){
            if(cadena[indice+1] >=97 && cadena[indice+1] <=122){
                cadena[indice+1] -= 32;
            }
        }
        printf("%c", cadena[indice]);
        indice++;

    }
    return 0;
}
