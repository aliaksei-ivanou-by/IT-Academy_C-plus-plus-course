void bubble_sort(int* array, int n_array)
{
	int temp=0;
	for(int i=0; i<=n_array-1; i++)
	{
		for(int j=0; j<=n_array-i-1; j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
