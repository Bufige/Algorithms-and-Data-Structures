#include <iostream>


int binary_search(int array[], int start, int end, int data)
{
	//não válido, portanto encerra aqui
	if(start > end)
	{
		return -1;
	}

	//ponto do meio entre start e end
	int mid = start + ((end-start)/2);
	//é o ponto do meio?
	if(array[mid] == data)
	{
		return mid;
	}
	//se o ponto do meio for maior que o data que procuramos, logo vamos procurar em 0 até mid -1.
	//caso contrário vamos procurar em mid + 1 até end.
	return array[mid] > data ? binary_search(array,start,mid - 1, data) : binary_search(array,mid+1,end, data);
}


int main()
{
	std::cin.tie(NULL); std::cout.sync_with_stdio(false);

	int array[] = {1,2,4,8,16,32,64,128,256};
	

	int found = binary_search(array,0,8,256);

	if(found != -1)
		std::cout << array[found];
	else
		std::cout << "not found";
	std::cout << std::endl;
	return 0;
}