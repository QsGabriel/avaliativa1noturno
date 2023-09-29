#include <stdio.h>

int main(){
    int ano;
    scanf("%d", &ano);
    
    int eventosFutebol[] = {1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018, 2022};
    int eventosOlimpicos[] = {1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020};
    
    int verificarFutebol = 0;
    int verificarOlimpico = 0;

    for(int a = 0; a < sizeof(eventosFutebol)/sizeof(eventosFutebol[0]); a++){
        if(ano == eventosFutebol[a]){
            verificarFutebol = 1;
        }
    }

    for(int a = 0; a < sizeof(eventosOlimpicos)/sizeof(eventosOlimpicos[0]); a++){
        if(ano == eventosOlimpicos[a]){
            verificarOlimpico = 1;
        }
    }

    if(verificarFutebol == 1){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.", ano);
    }   else if(verificarOlimpico == 1){
        printf("Os Jogos olimpicos de verao ocorreram no ano de %d.", ano);
    }   else{
        printf("Nao houveram Jogos Olimpicos de verao ou Copas do Mundo no ano de %d.", ano);
    }

    return 0;
}
