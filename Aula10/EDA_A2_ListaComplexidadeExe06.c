//Exercício 6 da lista de complexidade

void Exe6(float *V, int m, int j, int k)
{
	int pmenor, pdir, pesq;
  pesq = j - 1;
	pdir = j + 1;  
  while (k>0)
  {
  	if((pesq>=0)&(pdir<m))
  	{
   		if(fabs(V[pesq]-V[j]) < fabs(V[pdir]-V[j]))
  		{
  			pmenor = pesq;
  			pesq--;
  		}
  		else
  		{
  			pmenor = pdir;
  			pdir++;  		
  		}
  	}
  	else if (pesq>=0) //Caso em que pdir chegou no final do vetor
  	{
  		pmenor = pesq;
  		pesq--;
  	}
  	else if (pdir<m) //Caso em que pesq chegou no início do vetor
  	{
 			pmenor = pdir;
 			pdir++;  		
  	}
  	else //Caso em que k>m. Não há k elementos a serem impressos
  	{
  		break;
  	}
//Imprimir o k-ésimo valor mais próximo a V[j]:  	
  	printf("%f",V[pmenor]);
  	k--;
  }
	return;
}
