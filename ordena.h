void selection(int vet[],int tamanho)
{
	int i, j, aux, menor;
	
	// Itera sobre o vetor.
	for(i = 0; i < tamanho; i++)
  	{
  		for(j = i+1; j < tamanho; j++ )
  		{
			// Verifica se o valor na posição i é maior que o valor na posição j (posição seguinte a i).
  			if(vet[i] > vet[j])
  			{
				// Se for menor, armazena o valor de j em variável auxiliar (menor).
  				menor = j;
  				
			}
			
			//  Se i for diferente de menor, troca os valores de i e menor.
			if(i != menor)
			{
				aux = vet[i]; // Armazena o valor de i em variável auxiliar (aux).
				vet[i] = vet[menor]; // Atribui o valor de menor a posição anterior (i).
				vet[menor] = aux; // Atribui o valor de i a posição de menor.
			}
  				
		}
		
	}
}

// Em suma, está função re-ordena o vetor de maior para menor [11, 9, 6, 4, 1].
void insertion(int vet[],int tamanho)
{
	int i, j, aux;
	
	for(i = 1; i < tamanho; i++)
	{
		aux = vet[i];
		
		// J recebe o valor de i.
		// Se j for maior que 0 e o valor de aux for maior que o valor da posição (j-1) em vetor
		// O valor da posição j recebe o valor da posição (j-1).
		for(j = i; (j > 0) && (aux > vet[j - 1]); j--)
		{
			vet[j] = vet[j - 1];
		}
		vet[j] = aux;
	}
	
}


void bolha(int vet[],int tamanho)
{
	int i, j, aux;
	
	for( i = 0; i < tamanho; i++ )
  	{
    	for( j = i + 1; j < tamanho; j++ ) 
    	{
      		
      		if ( vet[i] > vet[j] )
      		{
         		aux = vet[i];
         		vet[i] = vet[j];
         		vet[j] = aux;
      		}
    	}
    
  	}
}


int dividir(int vet[], int esq, int dir)
{
	int aux, i;
	int cont = esq;
	
	for(i = esq+1; i <= dir; i++)
	{
		if(vet[i] < vet[esq])
		{
			cont++;
			
			aux = vet[i];
			vet[i] = vet[cont];
			vet[cont] = aux;
		}
	}
	
	aux = vet[esq];
	vet[esq] = vet[cont];
	vet[cont] = aux;
	
	return cont;
}

void quick(int vet[], int esq, int dir)
{
	int pos;
	
	if(esq < dir)
	{
		pos = dividir(vet, esq, dir);
		quick(vet, esq, pos-1);
		quick(vet, pos+1, dir);
	}
	
	
}
