#include <stdio.h>
#include <locale.h>
int main(void)
{
    int op;
    
    printf ("Selecione uma opcao: \n 1 - Pizza \n 2 - Sanduiche \n 3 - Suchi \n 4 - Churrasco \n");
    scanf ("%d", &op);
    
	swith (op);
    	case 1: printf ("Voce escolheu pizza");
    		break;
    	case 2: printf ("Voce escolheu sanduiche");
    		break;
    	case 3: printf ("Voce escolheu suchi");
    		break;
<<<<<<< HEAD
    	case 4: 
			printf ("Voce escolheu churrasco");
    		break;
    	default:
			printf ("Vai ficar com fome");
    		break;
	}
	
=======
    	case 4: printf ("Voce escolheu churrasco");
    	defaut: printf ("Vai ficar com fome!");
    
    
>>>>>>> parent of b1afd85 (correção-projeto-cardapio)
    return 0;
}
