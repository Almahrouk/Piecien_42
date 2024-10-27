int calculus_and_return(int a, int b){
    return (a + b);
}
void assignment(void){
    int a, b;
    char c;
    a = 44;
    b = -2;
    c = 'A';

    {
        a = calculus_and_return(a, b);
        b = (a - 2) * 2;
    }
}
void call_function(void){
    int forty_two;
    forty_two = 42;
}
char condition(int nb){
    if (nb < 10){
        nb = nb + 1;
    }
    if (nb > 10){
        return ('1');
    }
    else{
        return ('2');
    }
}
void loop(void){
    int i;
    i = 0;
    while (i < 10){
        i = i + 1;
    }
}
int main(void){
    call_function();
    return (0);
}