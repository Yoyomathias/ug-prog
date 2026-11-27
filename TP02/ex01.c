#include <unistd.h>

void ft_print(void)
{
    write(1, "Le temps passe, les gens bougent, comme le flot des rivière, ça ne finit jamais.\n", 83);
}

void ft_print_more(int number){
    int boucle = 0;
    while(boucle < number){
        ft_print();
        boucle += 1;
    }
}